// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GhoulsAndGoodiesGameMode.h"
#include "GhoulsAndGoodiesPlayerController.h"
#include "GhoulsAndGoodiesCharacter.h"
#include "GNGPawn.h"
#include "GNGPlayerController.h"
#include "TileBoard.h"
#include "Tile.h"
#include "GNGSaveGame.h"

#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/Material.h"
#include "UObject/ConstructorHelpers.h"

AGhoulsAndGoodiesGameMode::AGhoulsAndGoodiesGameMode()
{
	PlayerControllerClass = AGNGPlayerController::StaticClass();

	DefaultPawnClass = AGNGPawn::StaticClass();

	SetActorTickEnabled(true);

	m_mainTileBoard = Cast<ATileBoard>(UGameplayStatics::GetActorOfClass(this, ATileBoard::StaticClass()));

	static ConstructorHelpers::FObjectFinder<UMaterial> l_canNotSelectMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Red.Red'"));
	m_canNotSelectMaterial = l_canNotSelectMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_canSelectMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Green.Green'"));
	m_canSelectMaterial = l_canSelectMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_jimmyTileMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	m_jimmyTileMaterial = l_jimmyTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_garryTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Orange.Orange'"));
	m_garryTileMaterial = l_garryTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_tifannyTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Yellow.Yellow'"));
	m_tiffanyTileMaterial = l_tifannyTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_baseTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Purple.Purple'"));
	m_baseTileMaterial = l_baseTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_normalTileMaterial(TEXT("Material'/Game/Geometry/Meshes/CubeMaterial.CubeMaterial'"));
	m_normalTileMaterial = l_normalTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_selectedTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Blue.Blue'"));
	m_selectedTileMaterial = l_selectedTileMaterial.Object;

	
}

void AGhoulsAndGoodiesGameMode::Tick(float a_deltaTime)
{
	if (m_tileInFocus)
	{
		m_tileInFocus->GetStaticMeshComponent()->SetMaterial(0, m_selectedTileMaterial);
	}
}

void AGhoulsAndGoodiesGameMode::NextWave()
{
	m_wave++;
	m_candyCorn -= m_potentialCut;
	m_potentialCut = 0;

	TArray<AActor*> l_outTileActors;
	UGameplayStatics::GetAllActorsOfClass(this, ATile::StaticClass(), l_outTileActors);
	if (l_outTileActors.Num() > 0)
	{
		for (AActor* l_tileActor : l_outTileActors)
		{
			ATile* l_tile = Cast<ATile>(l_tileActor);
			if (l_tile->m_plannedToDeploy)
			{
				l_tile->SetupDefUnit();
			}
		}
	}

	m_gameState = EGNGGameState::STATE_Defend;
}

void AGhoulsAndGoodiesGameMode::SetTileInFocus(ATile* a_tile)
{
	if (m_tileInFocus == a_tile)
	{
		m_tileInFocus->SetupTileMaterial();
		m_tileInFocus = nullptr;
	}
	else
	{
		if (m_tileInFocus)
		{
			m_tileInFocus->SetupTileMaterial();
		}
		if (a_tile)
		{
		}
		m_tileInFocus = a_tile;
	}
}

void AGhoulsAndGoodiesGameMode::SaveGame()
{

}
