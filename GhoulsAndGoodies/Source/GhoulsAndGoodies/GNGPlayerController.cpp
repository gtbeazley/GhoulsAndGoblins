// Fill out your copyright notice in the Description page of Project Settings.


#include "GNGPlayerController.h"

#include <Camera/CameraActor.h>
#include <Components/InputComponent.h>
#include <Components/PrimitiveComponent.h>
#include "Engine/Player.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include <GameFramework/Pawn.h> 
#include "GameFramework/PlayerInput.h"
#include <Kismet/GameplayStatics.h>
#include <Kismet/KismetSystemLibrary.h>


DECLARE_CYCLE_STAT(TEXT("  PC Tick Input"), STAT_PC_TickInput, STATGROUP_PlayerController);

AGNGPlayerController::AGNGPlayerController()
{
	m_inputGameandUIMode = FInputModeGameAndUI();

	bShowMouseCursor = true;
	bEnableMouseOverEvents = true;
	bEnableClickEvents = true;
}

void AGNGPlayerController::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> l_outActors;

	UGameplayStatics::GetAllActorsOfClass(this, ACameraActor::StaticClass(), l_outActors); 
	
	for (AActor* l_camActor : l_outActors)
	{
		if (l_camActor->GetName() == m_camName.ToString())
		{
			if (Cast<ACameraActor>(l_camActor))
			{
				m_camActors.Add(Cast<ACameraActor>(l_camActor));

			}


		}
	}

	if (m_camActors.Num() > 0)
	{
		SetViewTargetWithBlend(m_camActors[0]);
	}

	SetInputMode(m_inputGameandUIMode);

}

void AGNGPlayerController::PlayerTick(float a_deltaTime)
{
	CustomPlayerTick(a_deltaTime);

}

void AGNGPlayerController::CustomTickPlayerInput(float a_deltaTime, const bool a_gamePaused)
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

void AGNGPlayerController::CustomPlayerTick(float a_deltaTime)
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

void AGNGPlayerController::NextCamera()
{
	m_camTraversal++;
	
	if (m_camTraversal >= m_camActors.Num())
		m_camTraversal = 0;

	SetViewTargetWithBlend(m_camActors[m_camTraversal]);

	
}

void AGNGPlayerController::PrevCamera()
{
	m_camTraversal--;

	if (m_camTraversal <= 0)
		m_camTraversal = m_camActors.Num() - 1;

	SetViewTargetWithBlend(m_camActors[m_camTraversal]);


}
