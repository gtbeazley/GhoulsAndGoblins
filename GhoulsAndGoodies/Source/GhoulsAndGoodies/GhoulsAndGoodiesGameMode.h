// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TileDefenceType.h"
#include "GhoulsAndGoodiesGameMode.generated.h"

class ATileBoard;
class ATile;
class UMaterial;

UCLASS(minimalapi)
class AGhoulsAndGoodiesGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGhoulsAndGoodiesGameMode();

	virtual void Tick(float a_deltaTime);

	void NextWave();

	void SetTileInFocus(ATile* a_tile);
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_JimmyFullCost = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_GarryFullCost = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_TiffanyFullCost = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_wave = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_candyCorn = 100;

	ATileBoard* m_mainTileBoard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ATile* m_tileInFocus = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_canNotSelectMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_canSelectMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_jimmyTileMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_garryTileMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_tiffanyTileMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_baseTileMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_normalTileMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_selectedTileMaterial;
};



