// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawn.h"

#include "Buddy.h"
#include "ConstructorHelpers.h"
#include "Esqueleto.h"
#include "Grace.h"
#include "GhoulsAndGoodiesGameMode.h"
#include "Marvin.h"

#include "Components/SpotLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemySpawn::AEnemySpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_lightColor = m_offColor;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> l_pumpkinMesh(TEXT("StaticMesh'/Game/TopDownCPP/ASSETS/SM_pumpkinScary.SM_pumpkinScary'"));

	m_spawn = CreateDefaultSubobject<USceneComponent>("Spawn Point");

	SetRootComponent(m_spawn);

	m_pumpkinStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Pumpkin");


	m_pumpkinStaticMesh->SetStaticMesh(l_pumpkinMesh.Object); 
	m_pumpkinStaticMesh->SetRelativeLocationAndRotation(FVector(200, 0, -160), FRotator(0, 90, 0));
	m_pumpkinStaticMesh->SetRelativeScale3D(FVector(2.6));
	m_pumpkinStaticMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	m_pumpkinStaticMesh->SetCustomDepthStencilValue(4);

	m_spotLight = CreateDefaultSubobject<USpotLightComponent>("GlowLight");
	m_spotLight->SetupAttachment(m_pumpkinStaticMesh);
	m_spotLight->SetRelativeLocationAndRotation(FVector(0, -60, 30),FRotator(0, -90, 0));
	m_spotLight->SetLightColor(m_lightColor);
	m_spotLight->SetIntensity(100000.0);
	m_spotLight->SetInnerConeAngle(m_spotLight->OuterConeAngle);


}

void AEnemySpawn::TurnLightOn(bool a_turnOn)
{
	m_pumpkinStaticMesh->SetRenderCustomDepth(a_turnOn);
	if (a_turnOn)
		m_lightColor = m_onColor;
	else
		m_lightColor = m_offColor;
}

// Called when the game starts or when spawned
void AEnemySpawn::BeginPlay()
{
	Super::BeginPlay();
	 

	m_pumpkinStaticMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	m_pumpkinStaticMesh->SetCustomDepthStencilValue(2);
}

void AEnemySpawn::Spawn(TEnumAsByte<EEnemyUnitType> a_enemyType)
{
	AActor* l_spawnedObject = nullptr;
	switch (a_enemyType)
	{
	case ATT_Marvin:
		l_spawnedObject = GetWorld()->SpawnActor<AMarvin>( GetActorLocation(), GetActorRotation());
		break;
	case ATT_Grace:
		l_spawnedObject = GetWorld()->SpawnActor<AGrace>(GetActorLocation(), GetActorRotation());
		break;
	case ATT_Esqueleto:
		l_spawnedObject = GetWorld()->SpawnActor<AEsqueleto>(GetActorLocation(), GetActorRotation());
		break;
	case ATT_Buddy:
		l_spawnedObject = GetWorld()->SpawnActor<ABuddy>(GetActorLocation(), GetActorRotation());
		break;
	}
}

void AEnemySpawn::QueueSpawn(TEnumAsByte<EEnemyUnitType> a_enemyType)
{
	m_spawnQueue.Add(a_enemyType);
}

// Called every frame
void AEnemySpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorRotation(FRotator(0, UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), FVector(-48, -32, GetActorLocation().Z)).Yaw, 0)); 

	if (m_lightColor != m_spotLight->GetLightColor())
		m_spotLight->SetLightColor(m_lightColor);

	if (m_spawnQueue.Num() > 0)
	{
		if (m_spawnTimer <= 0)
		{
			//Spawn unit , remove from the list and reset timer
			Spawn(m_spawnQueue.Last()); 
			m_spawnQueue.Pop(true);
			m_spawnTimer = m_spawnInterval;
		}
		else
		{
			//Update timer
			m_spawnTimer -= DeltaTime;
		}
	}
}

