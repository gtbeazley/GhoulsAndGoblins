// Fill out your copyright notice in the Description page of Project Settings.


#include "GNGPawn.h"

#include <Components/InputComponent.h>
#include <GNGPlayerController.h>
#include <Kismet/GameplayStatics.h>


// Sets default values
AGNGPawn::AGNGPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MainCamera = CreateDefaultSubobject<UCameraComponent>("MainCam");

}

void AGNGPawn::NextCamera()
{
	if (m_canTraverseNext)
	{
		Cast<AGNGPlayerController>(Controller)->NextCamera();
		m_canTraverseNext = false;
	}
}

void AGNGPawn::PrevCamera()
{
	if (m_canTraversePrev)
	{
		Cast<AGNGPlayerController>(Controller)->PrevCamera();
		m_canTraversePrev = false;
	}
}

void AGNGPawn::RelNextCam()
{
	m_canTraverseNext = true;
}

void AGNGPawn::RelPrevCam()
{
	m_canTraversePrev = true;
}

// Called when the game starts or when spawned
void AGNGPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGNGPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGNGPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("NextCamera", IE_Pressed, this, &AGNGPawn::NextCamera);
	PlayerInputComponent->BindAction("NextCamera", IE_Released, this, &AGNGPawn::RelNextCam);
	PlayerInputComponent->BindAction("PreviousCamera", IE_Pressed, this, &AGNGPawn::PrevCamera);
	PlayerInputComponent->BindAction("PreviousCamera", IE_Released, this, &AGNGPawn::RelPrevCam);
}

