// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileDefenceType.h"
#include "Tile.generated.h"

UCLASS()
class GHOULSANDGOODIES_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Type to determine which unit to spawn and whether to add to the path
	ETileDefenceType m_defType = ETileDefenceType::DEF_None;

	//Static mesh of the tile
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* m_mesh;
public:	
	//Adds a_neighbour to the neighbour list
	void AddNeighbour(ATile* a_neighbour);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetupDefUnit();

	UPROPERTY(EditAnywhere)
	//List of neighbours for the ai traverse through
	TArray<ATile*> m_neighbours;
};
