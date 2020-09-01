// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GNGSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API UGNGSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	int m_wave;
};
