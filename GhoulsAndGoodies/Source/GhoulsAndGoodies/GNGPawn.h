// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraActor.h"

#include "GNGPawn.generated.h"
UCLASS()
class GHOULSANDGOODIES_API AGNGPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGNGPawn();

	UPROPERTY()
		UCameraComponent* MainCamera;

	void NextCamera();
	void PrevCamera();

	void RelNextCam();
	void RelPrevCam();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool m_canTraverseNext = true, m_canTraversePrev = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
