// Fill out your copyright notice in the Description page of Project Settings.


#include "TileBoard.h"
#include "Tile.h"

#include "Components/SceneComponent.h"
#include "Engine/World.h" 
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATileBoard::ATileBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	RootComponent = SceneComponent;
	SceneComponent->SetMobility(EComponentMobility::Static);
}

// Called when the game starts or when spawned
void ATileBoard::BeginPlay()
{
	Super::BeginPlay();
	
	SetUpBoard();
}

void ATileBoard::SetUpBoard()
{

	//Spawn The entire board of Tiles
	for (int l_row = 0; l_row < m_rows; l_row++)
	{
		for (int l_col = 0; l_col < m_columns; l_col++)
		{
			FActorSpawnParameters l_aSP;
			FAttachmentTransformRules l_aTR(EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, EAttachmentRule::KeepRelative, false);
			

			//Spawn tile 
			ATile* l_newTile = GetWorld()->SpawnActor<ATile>(ATile::StaticClass(), FTransform(GetActorRotation(), FVector(l_row * m_tileSize, l_col * m_tileSize, 0), 
				FVector(m_tileSize / 100.0f, m_tileSize / 100.0f, 1)));

			//Attach tile to tile board
			l_newTile->AttachToActor(this, l_aTR);

			//Add tile to list
			m_tileList.Add(l_newTile);

		}
	}

	float l_buffer = 1.0f;
	// Go through each tile
	for (int l_iter = 0; l_iter < m_tileList.Num(); l_iter++)
	{
		//iterator of the next the next tile
		int l_nextTile = l_iter + 1;

		//Check if the next tile exists in the list
		if (l_nextTile < m_tileList.Num() )
		{
			//Check if the next tile is not far away
			if ((l_nextTile) % m_columns != 0)
			{
				//Add both this tile and the next tile to eachothers neighbour list
				m_tileList[l_iter]->AddNeighbour(m_tileList[l_nextTile]); 
			}
			//Check if the tile that is a space of the columns away in the next row exists
			if (l_iter + m_columns < m_tileList.Num())
			{
				//Add both this tile and the tile on the next row to eachother neighbours list
				m_tileList[l_iter]->AddNeighbour(m_tileList[l_iter + m_columns]);
				
			}
		}
	}
}

// Called every frame
void ATileBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

