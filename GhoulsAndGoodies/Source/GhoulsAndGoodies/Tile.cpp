// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"
#include "ConstructorHelpers.h"

#include "Components/StaticMeshComponent.h"

// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<UStaticMesh>CubeObjectFinder (TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));

	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	RootComponent = m_mesh;
	m_mesh->SetMobility(EComponentMobility::Movable);
	m_mesh->SetStaticMesh(CubeObjectFinder.Object);
	m_mesh->SetRelativeScale3D(FVector(1, 1, 0.1));
}


// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATile::SetupDefUnit()
{
	switch (m_defType)
	{
	case ETileDefenceType::DEF_Base:
		break;
	case ETileDefenceType::DEF_Tiffany:
		break;
	case ETileDefenceType::DEF_Jimmy:
		break;
	case ETileDefenceType::DEF_Gary:
		break;
	}
}
 
void ATile::AddNeighbour(ATile* a_neighbour)
{
	if (a_neighbour != this)
	{
		m_neighbours.AddUnique(a_neighbour);
		a_neighbour->m_neighbours.AddUnique(this);
	}
}