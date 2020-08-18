// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"
#include "ConstructorHelpers.h"

#include "GhoulsAndGoodiesGameMode.h"

#include "Materials/Material.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
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
	
	m_mesh->OnClicked.AddDynamic(this, &ATile::MeshOnClick);
	m_mesh->OnBeginCursorOver.AddDynamic(this, & ATile::MeshOnBeginHover);
	m_mesh->OnEndCursorOver.AddDynamic(this, & ATile::MeshOnEndHover);

	m_gNGGameMode = Cast<AGhoulsAndGoodiesGameMode>(UGameplayStatics::GetGameMode(this));
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

	if (m_lastDefType != m_defType)
	{
		switch (m_defType)
		{
		case ETileDefenceType::DEF_None: 
			m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial;
			m_highlightedMaterial = m_gNGGameMode->m_canSelectMaterial;
			break;
		case ETileDefenceType::DEF_Base:
			m_unhighlightedMaterial = m_gNGGameMode->m_baseTileMaterial;
			m_highlightedMaterial = m_gNGGameMode->m_canNotSelectMaterial;
			break;
		case ETileDefenceType::DEF_Tiffany:
			m_unhighlightedMaterial = m_gNGGameMode->m_tiffanyTileMaterial;
			m_highlightedMaterial = m_gNGGameMode->m_canNotSelectMaterial;
			break;
		case ETileDefenceType::DEF_Jimmy:
			m_unhighlightedMaterial = m_gNGGameMode->m_jimmyTileMaterial;
			m_highlightedMaterial = m_gNGGameMode->m_canNotSelectMaterial;
			break;
		case ETileDefenceType::DEF_Garry:
			m_unhighlightedMaterial = m_gNGGameMode->m_garryTileMaterial;
			m_highlightedMaterial = m_gNGGameMode->m_canNotSelectMaterial;
			break;
		}
	}

	m_lastDefType = m_defType;
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
	case ETileDefenceType::DEF_Garry:
		
		break;
	}
}

void ATile::SetDefenceUnitType(TEnumAsByte<ETileDefenceType> a_defType)
{
	if (m_defType == ETileDefenceType::DEF_None)
	{
		m_defType = a_defType;
	}
}

void ATile::MeshOnBeginHover(UPrimitiveComponent* a_primCom)
{ 
	m_mesh->SetMaterial(0, m_highlightedMaterial);
}

void ATile::MeshOnEndHover(UPrimitiveComponent* a_primCom)
{
	m_mesh->SetMaterial(0, m_unhighlightedMaterial);
}

void ATile::MeshOnClick(UPrimitiveComponent* a_primCom, FKey a_inKey)
{
	if (m_highlighted)
	{
		m_gNGGameMode->SetTileInFocus(this);
	}
}

UStaticMeshComponent* ATile::GetStaticMeshComponent()
{
	return m_mesh;
}
 
void ATile::AddNeighbour(ATile* a_neighbour)
{
	if (a_neighbour != this)
	{
		m_neighbours.AddUnique(a_neighbour);
		a_neighbour->m_neighbours.AddUnique(this);
	}
}