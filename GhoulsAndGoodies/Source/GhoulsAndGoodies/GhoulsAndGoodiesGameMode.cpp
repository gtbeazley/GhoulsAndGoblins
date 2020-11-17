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

	static ConstructorHelpers::FObjectFinder<UMaterial> l_normalTileMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/M_ground.M_ground'"));
	m_normalTileMaterial = l_normalTileMaterial.Object;

	static ConstructorHelpers::FObjectFinder<UMaterial> l_fakeSpawnMaterial(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/BasicMaterials/FakeSpawn.FakeSpawn'"));
	m_fakeSpawnMaterial = l_fakeSpawnMaterial.Object;
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

		//During Defend Game
		if (m_gameState == STATE_Defend)
		{
			AActor* m_base = UGameplayStatics::GetActorOfClass(this, ABase::StaticClass());
			//When the base doesn't exist
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
				ResetLockTiles();
				TArray<AActor*> l_outActors;
				UGameplayStatics::GetAllActorsOfClass(this, AEnemyUnit::StaticClass(), l_outActors);     
				for (AActor* l_outActor : l_outActors)
				{
					l_outActor->Destroy(true, true);
				}
			}
			else if (Cast<ABase>(m_base)->m_curHealth > 0 && (m_enemyCount * m_wave) + 1 <= m_enemiesDestroyed)
			{
				//If the base still exists but all enemies are destroyed
				m_candyCorn += 50;
				m_gameState = STATE_Plan;
				PlayPanelSlideAnimation();
				DetermineSpawn();
			} 
		}
	}

	//UE_LOG(LogTemp, Log, TEXT("Enemies Destroyed: %d"), m_enemiesDestroyed);
}

void AGhoulsAndGoodiesGameMode::BeginPlay()
{
	Super::BeginPlay(); 

	m_mainTileBoard = Cast<ATileBoard>(UGameplayStatics::GetActorOfClass(this, ATileBoard::StaticClass()));

	TArray<AActor*> l_outActors;
	UGameplayStatics::GetAllActorsOfClass(this, AEnemySpawn::StaticClass(), l_outActors);
	for (AActor* l_outActor : l_outActors)
	{
		m_enemySpawns.AddUnique(Cast<AEnemySpawn>(l_outActor));
	}
	if (m_mainTileBoard)
	{
		m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[0]);
		m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[1]);
		m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[0 + m_mainTileBoard->m_columns]);
		m_baseHighlightTiles.AddUnique(m_mainTileBoard->m_tileList[1 + m_mainTileBoard->m_columns]);
		UpdateLockTiles();
		LoadGame();
	}
}

void AGhoulsAndGoodiesGameMode::NextWave()
{
	//Start the Next Wave
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

	//Queue the spawning enemies
	if (m_wave % 10 == 0)
	{
		for (int l_enemySpawn : m_spawnList)
		{
			m_enemySpawns[l_enemySpawn]->QueueSpawn(ATT_Marvin);
		}
	}
	else if (m_wave % 10 == 5)
	{
		for (int l_enemySpawn : m_spawnList)
		{
			m_enemySpawns[l_enemySpawn]->QueueSpawn(ATT_Buddy);
		}
	}
	else if (m_wave % 10 == 7)
	{
		for (int l_enemySpawn : m_spawnList)
		{
			m_enemySpawns[l_enemySpawn]->QueueSpawn(ATT_Esqueleto);
		}
	}
	else
	{
		for (int l_enemySpawn : m_spawnList)
		{
			m_enemySpawns[l_enemySpawn]->QueueSpawn((TEnumAsByte<EEnemyUnitType>)( UKismetMathLibrary::RandomIntegerInRange(0, 3) ));
		}

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

	if (a_highlightedTile != m_baseTileLastHighlighted && a_highlightedTile->m_defType == DEF_None)
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
			if (l_iter < m_mainTileBoard->m_tileList.Num() - 1
				&& a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter + 1])
				&& m_mainTileBoard->m_tileList[l_iter + 1]->m_defType == DEF_None)
			{
				if (l_iter < m_mainTileBoard->m_tileList.Num() - 1 - m_mainTileBoard->m_columns
					&& a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns])
					&& m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns]->m_defType == DEF_None
					&& m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns + 1]->m_defType == DEF_None)
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
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns + 1]);

					for (ATile* l_tile : m_baseHighlightTiles)
					{
						//l_tile->m_highlightedMaterial = m_baseUnselectedMaterial;
						//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_highlightedMaterial);
						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(true);
					}
				}
				else if (l_iter >= m_mainTileBoard->m_columns
					&& a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns])
					&& m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns]->m_defType == DEF_None
					&& m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns + 1]->m_defType == DEF_None)
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
					m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns + 1]);
					for (ATile* l_tile : m_baseHighlightTiles)
					{
						//l_tile->m_highlightedMaterial = m_baseUnselectedMaterial;
						//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_highlightedMaterial);
						l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(true);
					}
				}
				else if (l_iter > 0 && a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter - 1]))
				{
					if (m_mainTileBoard->m_tileList[l_iter - 1]->m_defType == DEF_None)
					{
						if (l_iter < m_mainTileBoard->m_tileList.Num() - 1 - m_mainTileBoard->m_columns
							&& a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns]))
						{
							if (m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns]->m_defType == DEF_None
								&& m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns - 1]->m_defType == DEF_None)
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
								m_baseHighlightTiles.Add(m_mainTileBoard->m_tileList[l_iter + m_mainTileBoard->m_columns - 1]);
								for (ATile* l_tile : m_baseHighlightTiles)
								{
									//l_tile->m_highlightedMaterial = m_baseUnselectedMaterial;

									//l_tile->GetStaticMeshComponent()->SetMaterial(0, l_tile->m_highlightedMaterial);
									l_tile->GetStaticMeshComponent()->SetRenderCustomDepth(true);

								}
							}
						}

						else if (a_highlightedTile->IsNeighbour(m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns]))
						{
							if (m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns]->m_defType == DEF_None
								&& m_mainTileBoard->m_tileList[l_iter - m_mainTileBoard->m_columns - 1]->m_defType == DEF_None)
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

			if (m_lockBase)
				m_lockBase->GetMesh()->SetRenderCustomDepth(false);
			m_fakeBase = GetWorld()->SpawnActor<ABase>(l_middleLocation, FRotator(0, 0, 0));
			m_fakeBase->GetMesh()->SetRenderCustomDepth(true);
			m_fakeBase->GetMesh()->SetAnimationMode(EAnimationMode::AnimationSingleNode);
			m_fakeBase->GetMesh()->SetCustomDepthStencilValue(3);
			m_fakeBase->GetMesh()->SetMaterial(0, m_fakeSpawnMaterial);
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
	if(m_fakeBase)
	m_fakeBase->GetMesh()->SetRenderCustomDepth(false);
	m_lockBase = GetWorld()->SpawnActor<ABase>(l_middleLocation, FRotator(0, 0, 0));
	m_lockBase->GetMesh()->SetRenderCustomDepth(true);
	m_lockBase->GetMesh()->SetAnimationMode(EAnimationMode::AnimationSingleNode);
	m_lockBase->GetMesh()->SetCustomDepthStencilValue(0);
	m_lockBase->GetMesh()->SetMaterial(0, m_fakeSpawnMaterial);

}

void AGhoulsAndGoodiesGameMode::ResetLockTiles()
{
	for (int i = 0; i < m_baseLockTiles.Num(); i++)
	{
		m_baseLockTiles[i]->m_mesh->SetCustomDepthStencilValue(0);
		m_baseHighlightTiles[i] = m_baseLockTiles[i];
	}
	UpdateLockTiles();
}


void AGhoulsAndGoodiesGameMode::SaveGame()
{
	//Create Save Game Object
	UGNGSaveGame * l_saveGame = Cast<UGNGSaveGame>(UGameplayStatics::CreateSaveGameObject(UGNGSaveGame::StaticClass()));

	//Save the wave
	l_saveGame->m_wave = m_wave;

	//Save the candy corn
	l_saveGame->m_candyCorn = m_candyCorn;
	UE_LOG(LogTemp, Warning, TEXT("Saved candyCorn %d for candyCorn %d"), l_saveGame->m_candyCorn, m_candyCorn);

	//Save the game state
	l_saveGame->m_gameState = (int)m_gameState;
	
	//Find all defending units
	TArray<AActor*> l_outActors;
	UGameplayStatics::GetAllActorsOfClass(this, ADefendingUnit::StaticClass(), l_outActors);

	for (AActor* l_actor : l_outActors)
	{
		//Make sure its a defending unit
		ADefendingUnit* l_defUnit = Cast<ADefendingUnit>(l_actor);
		if (l_defUnit)
		{
			if (l_defUnit->m_owningTile)
			{
				//Save the tile its on
				l_saveGame->m_owningTileNumbers.Add(l_defUnit->m_owningTile->m_iterID);
				//Save the health it has left
				l_saveGame->m_defHealths.Add(l_defUnit->m_curHealth);
				//Save the defence unit type
				l_saveGame->m_defUnitTypes.Add(l_defUnit->m_owningTile->m_defType);
				UE_LOG(LogTemp, Warning, TEXT("Tile saved %s iter %d health %f unit type %d"), *l_defUnit->m_owningTile->GetName(), 
					l_defUnit->m_owningTile->m_iterID, l_defUnit->m_curHealth, l_defUnit->m_owningTile->m_defType);
			}
		}
	}
	
	//Save the base lock tile numbers
	for (int i = 0; i < 4; i++)
	{
		l_saveGame->m_baseLockTiles[i] = m_baseLockTiles[i]->m_iterID;
	}

	//Save the list of spawns
	for (int l_spawnIter : m_spawnList)
	{
		l_saveGame->m_spawnList.Add(l_spawnIter);
	}

	UGameplayStatics::SaveGameToSlot(l_saveGame, m_saveSlotName, 0);
}

void AGhoulsAndGoodiesGameMode::LoadGame()
{
	UGNGGameInstance * l_gameInstance = Cast<UGNGGameInstance>(GetGameInstance());
	if (l_gameInstance->m_loadGame)
	{
		UGNGSaveGame* l_saveGame = Cast<UGNGSaveGame>(UGameplayStatics::CreateSaveGameObject(UGNGSaveGame::StaticClass()));

		l_saveGame = Cast<UGNGSaveGame>(UGameplayStatics::LoadGameFromSlot(m_saveSlotName, 0));
		if (l_saveGame)
		{//Load wave number
			m_wave = l_saveGame->m_wave;
			//Load candy corn
			m_candyCorn = l_saveGame->m_candyCorn;
			UE_LOG(LogTemp, Warning, TEXT("Loaded candyCorn %d for candyCorn %d"), l_saveGame->m_candyCorn, m_candyCorn);
			//Load game state
			m_gameState = (TEnumAsByte<EGNGGameState>)l_saveGame->m_gameState;
			
			//Check Tile board exists
			if (m_mainTileBoard)
			{
				for (int i = 0; i < 4; i++)
				{ 
					//Set Highlight Tiles
					m_baseHighlightTiles[i] = m_mainTileBoard->m_tileList[l_saveGame->m_baseLockTiles[i]]; 
					UpdateLockTiles();
				}
				for (int i = 0; i < l_saveGame->m_owningTileNumbers.Num(); i++)
				{
					//Load the iterator for the owning tile
					int l_tileIter = l_saveGame->m_owningTileNumbers[i];
					if ((TEnumAsByte<ETileDefenceType>)l_saveGame->m_defUnitTypes[i] == DEF_Base && m_gameState != STATE_Base)
					{
						//Spawn the base
						SpawnBase();
						m_baseLockTiles[0]->m_defenceUnit->m_curHealth = l_saveGame->m_defHealths[i];
					}
					else
					{
						if (m_mainTileBoard->m_tileList[l_tileIter])
						{
							//Set Tile defence unit type
							m_mainTileBoard->m_tileList[l_tileIter]->SetDefenceUnitType((TEnumAsByte<ETileDefenceType>)l_saveGame->m_defUnitTypes[i]);
							//Spawn defence unit
							m_mainTileBoard->m_tileList[l_tileIter]->SetupDefUnit();
							//Load defence units health
							m_mainTileBoard->m_tileList[l_tileIter]->m_defenceUnit->m_curHealth = l_saveGame->m_defHealths[i];
						}
					}

				}
			}

			m_spawnList = l_saveGame->m_spawnList;
			for (int l_spawnIter : m_spawnList)
			{
				if (m_enemySpawns.Num() > 0)
				{

					m_enemySpawns[l_spawnIter]->TurnLightOn(true);
				}
			}
		}
		l_gameInstance->m_loadGame = false;
	}
	else
	{

		DetermineSpawn();
		UpdateLockTiles();
	}
}

void AGhoulsAndGoodiesGameMode::DetermineSpawn()
{
	for (int l_spawnerIndex : m_spawnList)
	{
		m_enemySpawns[l_spawnerIndex]->TurnLightOn(false);
	}

	m_enemySpawnsAllowedToSpawnFrom.Empty();
	for (int i = 0; i < m_wave + 1; i++)
	{
		int l_chosenSpawn = UKismetMathLibrary::RandomIntegerInRange(0, m_enemySpawns.Num() - 1);
		m_enemySpawnsAllowedToSpawnFrom.Add(l_chosenSpawn);
	}


	m_spawnList.Empty();

	for (int i = 0; i < ((m_enemyCount * (m_wave + 1)) + 1); i++)
	{
		if (m_enemySpawns.Num() > 0)
		{
			m_spawnList.Add(m_enemySpawnsAllowedToSpawnFrom[UKismetMathLibrary::RandomIntegerInRange(0, m_enemySpawnsAllowedToSpawnFrom.Num() - 1)]);
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
