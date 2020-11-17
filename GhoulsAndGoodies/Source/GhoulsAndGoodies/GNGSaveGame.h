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
	UPROPERTY(EditAnywhere)
		int m_wave;

	UPROPERTY(EditAnywhere)
		int m_candyCorn;	

	UPROPERTY(EditAnywhere)
		int m_gameState;

	UPROPERTY(EditAnywhere)
		TArray<int> m_defUnitTypes;

	UPROPERTY(EditAnywhere)
		TArray<int> m_owningTileNumbers;

	UPROPERTY(EditAnywhere)
		TArray<float> m_defHealths;

	UPROPERTY(EditAnywhere)
		int m_baseLockTiles[4];

	UPROPERTY(EditAnywhere)
		TArray<int> m_spawnList;
	 

};
