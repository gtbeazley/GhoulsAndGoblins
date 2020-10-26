 // Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TileDefenceType.h"
#include "GNGGameState.h"
#include "GhoulsAndGoodiesGameMode.generated.h"

class AEnemySpawn;
class ATileBoard;
class ATile;
class UMaterial;

UCLASS(minimalapi)
class AGhoulsAndGoodiesGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGhoulsAndGoodiesGameMode();

	virtual void Tick(float a_deltaTime) override;

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void NextWave();

	UFUNCTION(BlueprintCallable)
	void SetTileInFocus(ATile* a_tile);

	UFUNCTION(BlueprintCallable)
		void HighlightTile(ATile* a_highlightedtile);

	UFUNCTION(BlueprintCallable)
		void SpawnBase();

	UFUNCTION(BlueprintCallable)
		void UpdateLockTiles();

	UFUNCTION(BlueprintCallable)
		void SaveGame();

	UFUNCTION(BlueprintCallable)
		void LoadGame();
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString m_saveSlotName = "Goodies and Ghouls Save Data";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName m_levelName = "TopDownExampleMap";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName m_mainMenuLevelName = "MainMenu";

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<EGNGGameState> m_gameState = EGNGGameState::STATE_Base;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TEnumAsByte<ETileDefenceType> m_selectedUnitType = ETileDefenceType::DEF_None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_enemyCount = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_enemiesDestroyed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_potentialCut = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_JimmyFullCost = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_GarryFullCost = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_TiffanyFullCost = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_afterWaveCostMultiplier = .5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_wave = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int m_candyCorn = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AEnemySpawn*> m_enemySpawns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ATile*> m_baseHighlightTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ATile*> m_baseLockTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ATile* m_baseTileLastHighlighted = nullptr;

	int m_baseLastTileIndex = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ATileBoard* m_mainTileBoard = nullptr;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_baseSelectedMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_baseUnselectedMaterial; 
};



