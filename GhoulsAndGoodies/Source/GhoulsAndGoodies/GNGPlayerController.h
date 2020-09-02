// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GNGPlayerController.generated.h"

class ACameraActor;

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AGNGPlayerController : public APlayerController
{
	GENERATED_BODY()

		AGNGPlayerController();

	virtual void BeginPlay();

	FInputModeGameAndUI m_inputGameandUIMode;

	FName m_camName = "GNGViewTarget";

	TArray<ACameraActor*> m_camActors;
	int m_camTraversal = 0;
public:
	void NextCamera();
	void PrevCamera();

};
