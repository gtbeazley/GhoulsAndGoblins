// Fill out your copyright notice in the Description page of Project Settings.


#include "Tile.h"
#include "ConstructorHelpers.h"

#include "Base.h"
#include "DefendingUnit.h"
#include "GhoulsAndGoodiesGameMode.h"
#include "GNGGameInstance.h"
#include "Jimmy.h"
#include "Garry.h"
#include "Smidge.h"
#include "Tiffany.h"

#include "Materials/Material.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"
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

	m_mesh->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Block);

}


// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();

	m_gNGGameMode = Cast<AGhoulsAndGoodiesGameMode>(UGameplayStatics::GetGameMode(this));

	m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial;
	m_highlightedMaterial = m_gNGGameMode->m_normalTileMaterial;
	m_mesh->SetMaterial(0, m_unhighlightedMaterial);
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (m_gNGGameMode->m_gameState == STATE_Base)
	{

	}
	else {
		if (m_lastDefType != m_defType)
		{
			switch (m_defType)
			{
			case ETileDefenceType::DEF_None: 
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial; 
				break;
			case ETileDefenceType::DEF_Base:
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial; 
				break;
			case ETileDefenceType::DEF_Tiffany:
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial; 
				break;
			case ETileDefenceType::DEF_Jimmy:
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial; 
				break;
			case ETileDefenceType::DEF_Garry:
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial; 
				break;
			}
		}

	m_lastDefType = m_defType;

	}
}

void ATile::SetupDefUnit()
{
	FAttachmentTransformRules* l_fATR = new FAttachmentTransformRules(EAttachmentRule::KeepWorld, EAttachmentRule::KeepRelative, EAttachmentRule::KeepWorld, false);
	ADefendingUnit* l_spawnedObject = nullptr;
	FRotator l_facingRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraLocation());
	FRotator l_spawnRotation = FRotator(GetActorRotation().Pitch, l_facingRotation.Yaw - 90, GetActorRotation().Roll);
	switch (m_defType)
	{
	case ETileDefenceType::DEF_Base:
		break;
	case ETileDefenceType::DEF_Tiffany:
		l_spawnedObject = Cast<ADefendingUnit>(GetWorld()->SpawnActor<ATiffany>(GetActorLocation(), l_spawnRotation));
		break;
	case ETileDefenceType::DEF_Jimmy:
		l_spawnedObject = Cast<ADefendingUnit>(GetWorld()->SpawnActor<AJimmy>(GetActorLocation(), l_spawnRotation));
		break;
	case ETileDefenceType::DEF_Garry:
		l_spawnedObject = Cast<ADefendingUnit>(GetWorld()->SpawnActor<AGarry>(GetActorLocation(), l_spawnRotation));

		break;
	case ETileDefenceType::DEF_Smidge:
		l_spawnedObject = Cast<ADefendingUnit>(GetWorld()->SpawnActor<ASmidge>(GetActorLocation(), l_spawnRotation));

		break;
	}

	if (l_spawnedObject)
	{

		m_plannedToDeploy = false;
		l_spawnedObject->AttachToActor(this, *l_fATR);
		l_spawnedObject->m_owningTile = this;
		m_defenceUnit = l_spawnedObject;
		l_spawnedObject->PlaySpawnAnim();
	}
}

void ATile::SetupTileMaterial()
{
	
	if (m_gNGGameMode)
	{
		switch (m_defType)
			{
			case ETileDefenceType::DEF_None:
				m_mesh->SetCustomDepthStencilValue(0);
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial;
				break;
			case ETileDefenceType::DEF_Base:
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial;
				break;
			case ETileDefenceType::DEF_Tiffany:
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial;
				break;
			case ETileDefenceType::DEF_Jimmy:
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial;
				break;
			case ETileDefenceType::DEF_Garry:
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial;
				break;
			case ETileDefenceType::DEF_Smidge:
				m_unhighlightedMaterial = m_gNGGameMode->m_normalTileMaterial;
				break;
			}
	}
	
	//m_mesh->SetMaterial(0, m_unhighlightedMaterial);
}

void ATile::SetDefenceUnitType(TEnumAsByte<ETileDefenceType> a_defType)
{

	m_defType = a_defType;

	bool l_loadGame = Cast<UGNGGameInstance>(GetGameInstance())->m_loadGame;
	
	switch (a_defType)
	{
	case ETileDefenceType::DEF_Tiffany:
		if(!l_loadGame)
		m_gNGGameMode->m_candyCorn -= m_gNGGameMode->m_TiffanyFullCost;
		m_plannedToDeploy = true;
		m_mesh->SetCustomDepthStencilValue(2);
		break;
	case ETileDefenceType::DEF_Jimmy:
		if(!l_loadGame)
		m_gNGGameMode->m_candyCorn -= m_gNGGameMode->m_JimmyFullCost;
		m_plannedToDeploy = true;
		break;
	case ETileDefenceType::DEF_Garry:
		if(!l_loadGame)
		m_gNGGameMode->m_candyCorn -= m_gNGGameMode->m_GarryFullCost;
		m_plannedToDeploy = true;
		break;
	case ETileDefenceType::DEF_Smidge:		
		if(!l_loadGame)
		m_gNGGameMode->m_candyCorn -= m_gNGGameMode->m_SmidgeFullCost;
		m_plannedToDeploy = true;
		break;
	}
	SetupTileMaterial();
}

void ATile::MeshOnBeginHover(UPrimitiveComponent* a_primCom)
{
	FAttachmentTransformRules* l_fATR = new FAttachmentTransformRules(EAttachmentRule::KeepWorld, EAttachmentRule::KeepRelative, EAttachmentRule::KeepWorld, false);
	if (m_gNGGameMode->m_gameState == STATE_Base)
	{
		m_gNGGameMode->HighlightTile(this);
		//m_mesh->SetMaterial(0, m_highlightedMaterial);
	}
	else
	{
		ADefendingUnit* l_spawnedObject = nullptr;
		FRotator l_facingRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraLocation());
		FRotator l_spawnRotation = FRotator(GetActorRotation().Pitch, l_facingRotation.Yaw - 90, GetActorRotation().Roll);
		switch (m_gNGGameMode->m_selectedUnitType)
		{
		case DEF_None:
			break;
		case DEF_Garry:
			if (m_defType == DEF_None)
				l_spawnedObject = Cast<ADefendingUnit>(GetWorld()->SpawnActor<AGarry>(GetActorLocation(), l_spawnRotation));

			break;
		case DEF_Jimmy:
			if (m_defType == DEF_None)
				l_spawnedObject = Cast<ADefendingUnit>(GetWorld()->SpawnActor<AJimmy>(GetActorLocation(), l_spawnRotation));

			break;
		case DEF_Tiffany:
			if (m_defType == DEF_None)
				l_spawnedObject = Cast<ADefendingUnit>(GetWorld()->SpawnActor<ATiffany>(GetActorLocation(), l_spawnRotation));

			break;
		case DEF_Smidge:
			if (m_defType == DEF_None)
				l_spawnedObject = Cast<ADefendingUnit>(GetWorld()->SpawnActor<ASmidge>(GetActorLocation(), l_spawnRotation));

			break;
		default:
			break;
		}
		if (l_spawnedObject)
		{
			l_spawnedObject->AttachToActor(this, *l_fATR);
			l_spawnedObject->GetMesh()->SetAnimationMode(EAnimationMode::AnimationSingleNode);
			l_spawnedObject->GetMesh()->SetRenderCustomDepth(true);
			l_spawnedObject->GetMesh()->SetCustomDepthStencilValue(0);
			m_mesh->SetCustomDepthStencilValue(0);
			m_mesh->SetRenderCustomDepth(true);
			//m_mesh->SetMaterial(0, m_highlightedMaterial);
			m_fakeSpawn = l_spawnedObject;
			//m_fakeSpawn->GetMesh()->SetMaterial(0, m_gNGGameMode->m_fakeSpawnMaterial);
			TArray<FName> l_materialNames = m_fakeSpawn->GetMesh()->GetMaterialSlotNames();
			for (FName l_matName : l_materialNames)
			{
				m_fakeSpawn->GetMesh()->SetMaterialByName(l_matName, m_gNGGameMode->m_fakeSpawnMaterial);
			}
		}
		if (m_defType != DEF_None)
		{
			m_mesh->SetRenderCustomDepth(true);
			m_mesh->SetCustomDepthStencilValue(2);
			//m_mesh->SetMaterial(0, m_highlightedMaterial);
		}
		else
		{

			m_mesh->SetCustomDepthStencilValue(0);
		}
	}
}

void ATile::MeshOnEndHover(UPrimitiveComponent* a_primCom)
{
	if (m_gNGGameMode->m_gameState != STATE_Base)
	{
		if (m_gNGGameMode->m_fakeBase)
			m_gNGGameMode->m_fakeBase->Destroy();
		m_mesh->SetMaterial(0, m_unhighlightedMaterial);
		m_mesh->SetRenderCustomDepth(false);

	}
	if (m_fakeSpawn)
		m_fakeSpawn->Destroy();

}

void ATile::MeshOnClick(UPrimitiveComponent* a_primCom, FKey a_inKey)
{


	if (m_fakeSpawn)
		m_fakeSpawn->Destroy();
	if (m_gNGGameMode->m_gameState == STATE_Base)
	{
		if (m_gNGGameMode->m_fakeBase)
			m_gNGGameMode->m_fakeBase->Destroy();
		m_gNGGameMode->UpdateLockTiles();
	}
	else
	{
		if (m_defType == DEF_None)
		{
			SetDefenceUnitType(m_gNGGameMode->m_selectedUnitType);
			SetupDefUnit();
		}
	}
	
}

void ATile::DespawnUnit()
{ 
	m_defType = ETileDefenceType::DEF_None;
	m_defenceUnit->PlayDespawnAnim();
	SetupTileMaterial();
}

void ATile::SellUnit()
{
	if (m_lastDefType == ETileDefenceType::DEF_None)
		return;
	if(!m_plannedToDeploy)
	DespawnUnit();
	switch (m_lastDefType)
	{
	case ETileDefenceType::DEF_Tiffany:
		if (m_plannedToDeploy)
			m_gNGGameMode->m_potentialCut -= m_gNGGameMode->m_TiffanyFullCost;
		else
			m_gNGGameMode->m_candyCorn += m_gNGGameMode->m_TiffanyFullCost * m_gNGGameMode->m_afterWaveCostMultiplier;

		break;
	case ETileDefenceType::DEF_Jimmy:
		if (m_plannedToDeploy)
			m_gNGGameMode->m_potentialCut -= m_gNGGameMode->m_JimmyFullCost;
		else
			m_gNGGameMode->m_candyCorn += m_gNGGameMode->m_JimmyFullCost * m_gNGGameMode->m_afterWaveCostMultiplier;
		break;
	case ETileDefenceType::DEF_Garry:
		if (m_plannedToDeploy)
			m_gNGGameMode->m_potentialCut -= m_gNGGameMode->m_GarryFullCost;
		else
			m_gNGGameMode->m_candyCorn += m_gNGGameMode->m_GarryFullCost * m_gNGGameMode->m_afterWaveCostMultiplier;
		break;

	}

	SetDefenceUnitType(ETileDefenceType::DEF_None);
	m_plannedToDeploy = false;
	m_gNGGameMode->m_tileInFocus = nullptr;
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

bool ATile::IsNeighbour(ATile* a_tile)
{
	if (a_tile == nullptr)
	{
		return false;
	}
	for (ATile* l_neighbour : m_neighbours)
	{
		if (l_neighbour == a_tile)
		{
			return true;
		}
	}
	return false;
}
