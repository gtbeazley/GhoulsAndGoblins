// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GhoulsAndGoodiesPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GhoulsAndGoodiesCharacter.h"
#include "Engine/Player.h"
#include "GameFramework/PlayerInput.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"

DECLARE_CYCLE_STAT(TEXT("PC Tick Actor"), STAT_PC_TickActor, STATGROUP_PlayerController);
DECLARE_CYCLE_STAT(TEXT("  PC Tick Input"), STAT_PC_TickInput, STATGROUP_PlayerController);
DECLARE_CYCLE_STAT(TEXT("    PC Build Input Stack"), STAT_PC_BuildInputStack, STATGROUP_PlayerController);
DECLARE_CYCLE_STAT(TEXT("    PC Process Input Stack"), STAT_PC_ProcessInputStack, STATGROUP_PlayerController);

AGhoulsAndGoodiesPlayerController::AGhoulsAndGoodiesPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
	bEnableMouseOverEvents = true;
	bEnableClickEvents = true;
}

void AGhoulsAndGoodiesPlayerController::PlayerTick(float DeltaTime)
{
	CustomPlayerTick(DeltaTime);
	
	// keep updating the destination every tick while desired
	if (bMoveToMouseCursor)
	{
		MoveToMouseCursor();
	}
}

void AGhoulsAndGoodiesPlayerController::CustomTickPlayerInput(float a_deltaTime, const bool a_gamePaused)
{
	SCOPE_CYCLE_COUNTER(STAT_PC_TickInput);

	check(PlayerInput);
	PlayerInput->Tick(a_deltaTime);

	if (ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player))
	{
		if (bEnableMouseOverEvents)
		{
			FVector2D MousePosition;
			FHitResult HitResult;
			bool bHit = false;

			UGameViewportClient* ViewportClient = LocalPlayer->ViewportClient;

			// Only send mouse hit events if we're directly over the viewport.
			if (IsInViewportClient(ViewportClient))
			{
				if (ViewportClient->GetMousePosition(MousePosition))
				{
					bHit = GetHitResultUnderCursor(ECC_GameTraceChannel1, true, HitResult);
				}
			}

			UPrimitiveComponent* PreviousComponent = CurrentClickablePrimitive.Get();
			UPrimitiveComponent* CurrentComponent = (bHit ? HitResult.Component.Get() : NULL);

			UPrimitiveComponent::DispatchMouseOverEvents(PreviousComponent, CurrentComponent);

			CurrentClickablePrimitive = CurrentComponent;
		}

		if (bEnableTouchOverEvents)
		{
			for (int32 TouchIndexInt = 0; TouchIndexInt < EKeys::NUM_TOUCH_KEYS; ++TouchIndexInt)
			{
				const ETouchIndex::Type FingerIndex = ETouchIndex::Type(TouchIndexInt);

				FHitResult HitResult;
				const bool bHit = GetHitResultUnderFinger(FingerIndex, CurrentClickTraceChannel, true, /*out*/ HitResult);

				UPrimitiveComponent* PreviousComponent = CurrentTouchablePrimitives[TouchIndexInt].Get();
				UPrimitiveComponent* CurrentComponent = (bHit ? HitResult.Component.Get() : NULL);

				UPrimitiveComponent::DispatchTouchOverEvents(FingerIndex, PreviousComponent, CurrentComponent);

				CurrentTouchablePrimitives[TouchIndexInt] = CurrentComponent;
			}
		}
	}

	ProcessPlayerInput(a_deltaTime, a_gamePaused);
	ProcessForceFeedbackAndHaptics(a_deltaTime, a_gamePaused);
}

void AGhoulsAndGoodiesPlayerController::CustomPlayerTick(float a_deltaTime)
{
	if (!bShortConnectTimeOut)
	{
		bShortConnectTimeOut = true;
		ServerShortTimeout();
	}

	CustomTickPlayerInput(a_deltaTime, a_deltaTime == 0.f);

	if ((Player != NULL) && (Player->PlayerController == this))
	{
		// Validate current state
		bool bUpdateRotation = false;
		if (IsInState(NAME_Playing))
		{
			if (GetPawn() == NULL)
			{
				ChangeState(NAME_Inactive);
			}
			else if (Player && GetPawn() && GetPawn() == AcknowledgedPawn)
			{
				bUpdateRotation = true;
			}
		}

		if (IsInState(NAME_Inactive))
		{
			if (Role < ROLE_Authority)
			{
				SafeServerCheckClientPossession();
			}

			bUpdateRotation = !IsFrozen();
		}
		else if (IsInState(NAME_Spectating))
		{
			if (Role < ROLE_Authority)
			{
				SafeServerUpdateSpectatorState();
			}

			bUpdateRotation = true;
		}

		// Update rotation
		if (bUpdateRotation)
		{
			UpdateRotation(a_deltaTime);
		}
	}

}

void AGhoulsAndGoodiesPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	InputComponent->BindAction("SetDestination", IE_Pressed, this, &AGhoulsAndGoodiesPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &AGhoulsAndGoodiesPlayerController::OnSetDestinationReleased);

	// support touch devices 
	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AGhoulsAndGoodiesPlayerController::MoveToTouchLocation);
	InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AGhoulsAndGoodiesPlayerController::MoveToTouchLocation);

	InputComponent->BindAction("ResetVR", IE_Pressed, this, &AGhoulsAndGoodiesPlayerController::OnResetVR);
}

void AGhoulsAndGoodiesPlayerController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AGhoulsAndGoodiesPlayerController::MoveToMouseCursor()
{
	if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
	{
		if (AGhoulsAndGoodiesCharacter* MyPawn = Cast<AGhoulsAndGoodiesCharacter>(GetPawn()))
		{
			if (MyPawn->GetCursorToWorld())
			{
				UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, MyPawn->GetCursorToWorld()->GetComponentLocation());
			}
		}
	}
	else
	{
		// Trace to see what is under the mouse cursor
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, false, Hit);

		if (Hit.bBlockingHit)
		{
			// We hit something, move there
			SetNewMoveDestination(Hit.ImpactPoint);
		}
	}
}

void AGhoulsAndGoodiesPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(HitResult.ImpactPoint);
	}
}

void AGhoulsAndGoodiesPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

		// We need to issue move command only if far enough in order for walk animation to play correctly
		if ((Distance > 120.0f))
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
		}
	}
}

void AGhoulsAndGoodiesPlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	bMoveToMouseCursor = true;
}

void AGhoulsAndGoodiesPlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	bMoveToMouseCursor = false;
}
