// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GhoulsAndGoodiesGameMode.h"


#include "EnemySpawn.h"
#include "EnemyUnit.h"
#include "Base.h"
#include "Garry.h"
#include "GhoulsAndGoodiesPlayerController.h"
#include "GhoulsAndGoodiesCharacter.h"
#include "GNGGameInstance.h"
#include "GNGPawn.h"
#include "GNGPlayerController.h"
#include "GNGSaveGame.h"
#include "TileBoard.h"
#include "Tile.h"
#include "UserWidget.h"

#include "Animation/WidgetAnimation.h" 
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Materials/Material.h"
#include "UObject/ConstructorHelpers.h"

AGhoulsAndGoodiesGameMode::AGhoulsAndGoodiesGameMode()
{
	PlayerControllerClass = AGNGPlayerController::StaticClass();

	DefaultPawnClass = AGNGPawn::StaticClass();

	PrimaryActorTick.bCanEverTick = true;

	m_mainTileBoard = Cast<ATileBoard>(UGameplayStatics::GetActorOfClass(this, ATileBoard::StaticClass()));

	static ConstructorHelpers::FObjectFinder<UMaterial> l_canNotSelectMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Red.Red'"));
	m_canNotSelectMaterial = l_canNotSelectMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_canSelectMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Green.Green'"));
	m_canSelectMaterial = l_canSelectMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_jimmyTileMaterial(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	m_jimmyTileMaterial = l_jimmyTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_garryTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/DarkPurple.DarkPurple'"));
	m_garryTileMaterial = l_garryTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_tifannyTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Yellow.Yellow'"));
	m_tiffanyTileMaterial = l_tifannyTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_smidgeTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Blue.Blue'"));
	m_smidgeTileMaterial = l_smidgeTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_baseTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Purple.Purple'"));
	m_baseTileMaterial = l_baseTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_normalTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/M_ground.M_ground'"));
	m_normalTileMaterial = l_normalTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_selectedTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Blue.Blue'"));
	m_selectedTileMaterial = l_selectedTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_baseSelectedMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/Brown.Brown'"));
	m_baseSelectedMaterial = l_baseSelectedMaterial.Object; 

	static ConstructorHelpers::FObjectFinder<UMaterial> l_baseUnselectedMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/LightBrown.LightBrown'"));
	m_baseUnselectedMaterial = l_baseUnselectedMaterial.Object;
}

void AGhoulsAndGoodiesGameMode::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	if (m_gameState == STATE_Base)
	{ 
		for (ATile* l_tile : m_baseHighlightTiles)
		{
			//l_tile->GetStaticMeshComponent()->SetMaterial(0, m_baseSelectedMaterial);
		} 
	}
	else
	{ 
		int l_costThreshold = 0;
		switch(m_selectedUnitType)
		{
		default:
			l_costThreshold = 0;
			break;
		case DEF_Garry:
			l_costThreshold = m_GarryFullCost;
			break;
		case DEF_Jimmy:
			l_costThreshold = m_JimmyFullCost;

			break;
		case DEF_Tiffany:
			l_costThreshold = m_TiffanyFullCost;

			break;
		case DEF_Smidge:
			l_costThreshold = m_SmidgeFullCost;
			break;

		}

		if (m_candyCorn - l_costThreshold < 0)
		{
			m_selectedUnitType = DEF_None;
		}


		if (m_tileInFocus)
		{
			//m_tileInFocus->GetStaticMeshComponent()->SetMaterial(0, m_selectedTileMaterial);
		}

		if (m_gameState == STATE_Defend)
		{
			AActor* m_base = UGameplayStatics::GetActorOfClass(this, ABase::StaticClass());
			if (!IsValid(m_base))
			{
				m_wave--;
				m_candyCorn += 40;
				m_gameState = STATE_Base;
				DetermineSpawn();
				for (ATile* l_tile : m_baseLockTiles)
				{
					l_tile->SetDefenceUnitType(DEF_None);
				}
				TArray<AActor*> l_outActors;
				UGameplayStatics::GetAllActorsOfClass(this, AEnemyUnit::StaticClass(), l_outActors);     
				for (AActor* l_outActor : l_outActors)
				{
					l_outActor->Destroy(true, true);
				}
			}
			else if (Cast<ABase>(m_base)->m_curHealth > 0 && (m_enemyCount * m_wave) + 1 <= m_enemiesDestroyed)
			{
				m_candyCorn += 50;
				m_gameState = STATE_Plan;
				PlayPanelSlideAnimation();
				DetermineSpawn();
			} 
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Current Game State: %d"), m_gameState);
}

void AGhoulsAndGoodiesGameMode::BeginPlay()
{
	Super::BeginPlay(); 

	m_mainTileBoard = Cast<ATileBoard>(UGameplayStatics::GetActorOfClass(this, ATileBoard::StaticClass()));
	if (m_mainTileBoard)
	{
		m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[0]);
		m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[1]);
		m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[0 + m_mainTileBoard->m_columns]);
		m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[1 + m_mainTileBoard->m_columns]);
		UpdateLockTiles();
	}
	TArray<AActor*> l_outActors;
	UGameplayStatics::GetAllActorsOfClass(this, AEnemySpawn::StaticClass(), l_outActors);
	for (AActor* l_outActor : l_outActors)
	{
		m_enemySpawns.AddUnique(Cast<AEnemySpawn>(l_outActor));
	}
	DetermineSpawn();
}

void AGhoulsAndGoodiesGameMode::NextWave()
{
	m_enemiesDestroyed = 0;
	m_wave++;
	if (m_mainTileBoard != nullptr)
	{
		if (m_mainTileBoard->m_tileList.Num() > 0)
		{
			for (ATile* l_tile : m_mainTileBoard->m_tileList)
			{ 
				if (l_tile->m_plannedToDeploy)
				{
					l_tile->SetupDefUnit();
				}
			}
		}
	}
	else
	{
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

	}


	for (int l_enemySpawn : m_spawnList)
	{
		m_enemySpawns[l_enemySpawn]->QueueSpawn((TEnumAsByte<EEnemyUnitType>)( UKismetMathLibrary::RandomIntegerInRange(0, 2) ));
	}

	m_gameState = EGNGGameState::STATE_Defend;
}

void AGhoulsAndGoodiesGameMode::SetTileInFocus(ATile* a_tile)
{
	if (m_gameState == STATE_Base)
	{

	}
	else
	{
		if (m_tileInFocus == a_tile)
		{
			if(m_tileInFocus)
			m_tileInFocus->SetupTileMaterial();
			m_tileInFocus = nullptr;
		}
		else
		{
			if (m_tileInFocus)
			{
				m_tileInFocus->SetupTileMaterial();
			}
			m_tileInFocus = a_tile;
		}
	}
}

void AGhoulsAndGoodiesGameMode::HighlightTile(ATile* a_highlightedTile)
{

	if (a_highlightedTile != m_baseTileLastHighlighted)
	{

		int l_iter = 0;
		for (ATile* l_tile : m_mainTileBoard->m_tileList)
		{
			if (l_tile == a_highlightedTile)
			{

				break;
			}
			l_iter++;
		}
		bool l_wasInList = false;
		for (ATile* l_tile : m_baseHighlightTiles)
		{
			if (l_tile == a_highlightedTile)
			{
				l_wasInList = true;
				break;
			}
		}
		if (!l_wasInList)
		{
			if (l_iter < m_mainTileBoard->m_tileList.Num() - 1 && a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter + 1]))
			{
				if (l_iter < m_mainTileBoard->m_tileList.Num() - 1 - m_mainTileBoard->m_columns && 
					a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns]))
				{
					for (ATile* l_tile : m_baseHighlightTiles)
					{
						//l_tile->m_highlightedMaterial = m_canSelectMaterial;
						//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_unhighlightedMaterial);
						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(false);
					}
					m_baseHighlightTiles.Empty();
					m_baseHighlightTiles.Add(a_highlightedTile);
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter + 1]);
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns]);
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns + 1] );

					for (ATile* l_tile : m_baseHighlightTiles)
					{
						//l_tile->m_highlightedMaterial = m_baseUnselectedMaterial;
						//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_highlightedMaterial);
						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(true);
					}
				} 
				else if (l_iter >= m_mainTileBoard->m_columns
					&& a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns]))
				{
					for (ATile* l_tile : m_baseHighlightTiles)
					{
						l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_unhighlightedMaterial);
						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(false);
					}
					m_baseHighlightTiles.Empty();
					m_baseHighlightTiles.Add(a_highlightedTile); 
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter + 1]);
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns]);
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns + 1] );
					for (ATile* l_tile : m_baseHighlightTiles)
					{
						//l_tile->m_highlightedMaterial = m_baseUnselectedMaterial;
						//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_highlightedMaterial);
						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(true);
					}
				}
			}
			else if (a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter - 1]))
			{
				if (l_iter < m_mainTileBoard->m_tileList.Num() - 1 - m_mainTileBoard->m_columns && a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns]))
				{
					for (ATile* l_tile : m_baseHighlightTiles)
					{
						//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_unhighlightedMaterial);
						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(false);
						 
					}
					m_baseHighlightTiles.Empty();					
					m_baseHighlightTiles.Add(a_highlightedTile);
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter - 1]);
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns]);
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns - 1] );
					for (ATile* l_tile : m_baseHighlightTiles)
					{
						//l_tile->m_highlightedMaterial = m_baseUnselectedMaterial;
						
						//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_highlightedMaterial);
						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(true);
						 
					}
				}
				else if (a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns]))
				{
					for (ATile* l_tile : m_baseHighlightTiles)
					{
						//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_unhighlightedMaterial);
						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(false);
						 
					}
					m_baseHighlightTiles.Empty();
					m_baseHighlightTiles.Add(a_highlightedTile);
					m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[l_iter - 1]);
					m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns]);
					m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns - 1]);
					for (ATile* l_tile : m_baseHighlightTiles)
					{
						//l_tile->m_highlightedMaterial = m_baseUnselectedMaterial;
						//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_highlightedMaterial);

						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(true);
					}
				}
			}

			if (m_fakeBase)
				m_fakeBase->Destroy(); 

			FVector l_locationOfLock0 = m_baseHighlightTiles[0]->GetActorLocation(),
				l_locationOfLock1 = m_baseHighlightTiles[1]->GetActorLocation(),
				l_locationOfLock2 = m_baseHighlightTiles[2]->GetActorLocation(),
				l_locationOfLock3 = m_baseHighlightTiles[3]->GetActorLocation();

			float l_distanceToLock1 = FVector::Distance(l_locationOfLock0, l_locationOfLock1),
				l_distanceToLock2 = FVector::Distance(l_locationOfLock0, l_locationOfLock2),
				l_distanceToLock3 = FVector::Distance(l_locationOfLock0, l_locationOfLock3);

			FVector l_middleLocation = l_locationOfLock0;


			if (l_distanceToLock1 == l_distanceToLock2)
			{
				//l_distanceToLock3
				FVector DirTimesHalfLength = (l_locationOfLock3 - l_locationOfLock0) / 2;
				l_middleLocation += DirTimesHalfLength;
			}
			else if (l_distanceToLock2 == l_distanceToLock3)
			{
				//l_distanceToLock1
				FVector DirTimesHalfLength = (l_locationOfLock1 - l_locationOfLock0) / 2;
				l_middleLocation += DirTimesHalfLength;

			}
			else if (l_distanceToLock1 == l_distanceToLock3)
			{
				//l_distanceToLock2
				FVector DirTimesHalfLength = (l_locationOfLock3 - l_locationOfLock0) / 2;
				l_middleLocation += DirTimesHalfLength;
			}

			m_fakeBase = GetWorld()->SpawnActor<ABase>(l_middleLocation, FRotator(0, 0, 0));
			m_fakeBase->GetMesh()->SetRenderCustomDepth(true);

		}

		m_baseLastTileIndex = l_iter;
		m_baseTileLastHighlighted = a_highlightedTile;

	}
}

void AGhoulsAndGoodiesGameMode::SpawnBase()
{
	
	if (m_fakeBase)
		m_fakeBase->Destroy();
	if (m_lockBase)
		m_lockBase->Destroy();

	FVector l_locationOfLock0 = m_baseLockTiles[0]->GetActorLocation(),
		l_locationOfLock1 = m_baseLockTiles[1]->GetActorLocation(),
		l_locationOfLock2 = m_baseLockTiles[2]->GetActorLocation(),
		l_locationOfLock3 = m_baseLockTiles[3]->GetActorLocation();

	float l_distanceToLock1 = FVector::Distance(l_locationOfLock0, l_locationOfLock1),
		l_distanceToLock2 = FVector::Distance(l_locationOfLock0, l_locationOfLock2),
		l_distanceToLock3 = FVector::Distance(l_locationOfLock0, l_locationOfLock3);

	FVector l_middleLocation = l_locationOfLock0;


	if (l_distanceToLock1 == l_distanceToLock2)
	{
		//l_distanceToLock3
		FVector DirTimesHalfLength = (l_locationOfLock3 - l_locationOfLock0) / 2;
		l_middleLocation += DirTimesHalfLength;
	}
	else if (l_distanceToLock2 == l_distanceToLock3)
	{
		//l_distanceToLock1
		FVector DirTimesHalfLength = (l_locationOfLock1 - l_locationOfLock0) / 2;
		l_middleLocation += DirTimesHalfLength;

	}
	else if (l_distanceToLock1 == l_distanceToLock3)
	{
		//l_distanceToLock2
		FVector DirTimesHalfLength = (l_locationOfLock3 - l_locationOfLock0) / 2;
		l_middleLocation += DirTimesHalfLength;
	}

	for (ATile* l_tile : m_baseHighlightTiles)
	{
		l_tile->SetupTileMaterial();
		l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(false);
	}


	for (ATile* l_tile : m_baseLockTiles)
	{
		l_tile->SetDefenceUnitType(ETileDefenceType::DEF_Base);
		l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(false);
		l_tile->SetupTileMaterial();
	}


	ABase* l_spawnedBase = GetWorld()->SpawnActor<ABase>(l_middleLocation, FRotator(0, 0, 0));
	l_spawnedBase->m_owningTile = m_baseLockTiles[0];
	m_baseLockTiles[0]->m_defenceUnit = l_spawnedBase;
	l_spawnedBase->PlaySpawnAnim(); 


}

void AGhoulsAndGoodiesGameMode::UpdateLockTiles()
{
	for (ATile* l_tile : m_baseLockTiles)
	{
		//l_tile->m_unhighlightedMaterial = m_normalTileMaterial;
		//l_tile->GetStaticMeshComponent()->SetMaterial(0, m_normalTileMaterial);
		l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(false);
	}
	m_baseLockTiles = m_baseHighlightTiles;
	for (ATile* l_tile : m_baseLockTiles)
	{
		//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_unhighlightedMaterial);
		//l_tile->m_unhighlightedMaterial = m_baseSelectedMaterial;
		//l_tile->GetStaticMeshComponent()->SetMaterial(0, m_baseSelectedMaterial);
		l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(true);
	}

	if (m_lockBase)
		m_lockBase->Destroy();

	FVector l_locationOfLock0 = m_baseLockTiles[0]->GetActorLocation(),
		l_locationOfLock1 = m_baseLockTiles[1]->GetActorLocation(),
		l_locationOfLock2 = m_baseLockTiles[2]->GetActorLocation(),
		l_locationOfLock3 = m_baseLockTiles[3]->GetActorLocation();

	float l_distanceToLock1 = FVector::Distance(l_locationOfLock0, l_locationOfLock1),
		l_distanceToLock2 = FVector::Distance(l_locationOfLock0, l_locationOfLock2),
		l_distanceToLock3 = FVector::Distance(l_locationOfLock0, l_locationOfLock3);

	FVector l_middleLocation = l_locationOfLock0;


	if (l_distanceToLock1 == l_distanceToLock2)
	{
		//l_distanceToLock3
		FVector DirTimesHalfLength = (l_locationOfLock3 - l_locationOfLock0) / 2;
		l_middleLocation += DirTimesHalfLength;
	}
	else if (l_distanceToLock2 == l_distanceToLock3)
	{
		//l_distanceToLock1
		FVector DirTimesHalfLength = (l_locationOfLock1 - l_locationOfLock0) / 2;
		l_middleLocation += DirTimesHalfLength;

	}
	else if (l_distanceToLock1 == l_distanceToLock3)
	{
		//l_distanceToLock2
		FVector DirTimesHalfLength = (l_locationOfLock3 - l_locationOfLock0) / 2;
		l_middleLocation += DirTimesHalfLength;
	}
	if(m_lockBase)
	m_lockBase->GetMesh()->SetRenderCustomDepth(false);
	m_lockBase = GetWorld()->SpawnActor<ABase>(l_middleLocation, FRotator(0, 0, 0));
	m_lockBase->GetMesh()->SetRenderCustomDepth(true);

}


void AGhoulsAndGoodiesGameMode::SaveGame()
{

	UGNGSaveGame * l_saveGame = Cast<UGNGSaveGame>(UGameplayStatics::CreateSaveGameObject(UGNGSaveGame::StaticClass()));

	l_saveGame->m_wave = m_wave;
	UGameplayStatics::SaveGameToSlot(l_saveGame, m_saveSlotName, 0);
}

void AGhoulsAndGoodiesGameMode::LoadGame()
{
	UGNGGameInstance * l_gameInstance = Cast<UGNGGameInstance>(GetGameInstance());
	if (l_gameInstance->m_loadGame)
	{
		UGNGSaveGame* l_saveGame = Cast<UGNGSaveGame>(UGameplayStatics::CreateSaveGameObject(UGNGSaveGame::StaticClass()));

		l_saveGame = Cast<UGNGSaveGame>(UGameplayStatics::LoadGameFromSlot(m_saveSlotName, 0));

		m_wave = l_saveGame->m_wave;

		l_gameInstance->m_loadGame = false;
	}
}

void AGhoulsAndGoodiesGameMode::DetermineSpawn()
{
	for (int l_spawnerIndex : m_spawnList)
	{
		m_enemySpawns[l_spawnerIndex]->TurnLightOn(false);
	}

	m_spawnList.Empty();

	for (int i = 0; i < ((m_enemyCount * (m_wave + 1)) + 1); i++)
	{
		if (m_enemySpawns.Num() > 0)
		{
			m_spawnList.Add(UKismetMathLibrary::RandomIntegerInRange(0, m_enemySpawns.Num() - 1));
			m_enemySpawns[m_spawnList.Last()]->TurnLightOn(true);
		}
	}
}

void AGhoulsAndGoodiesGameMode::PlayPanelSlideAnimation()
{
	if (m_panelMoveAnimationRef)
	{ 
		if (m_HUDWidgetRef)
			m_HUDWidgetRef->PlayAnimation(m_panelMoveAnimationRef);
	}
}
