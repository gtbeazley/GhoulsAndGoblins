// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawn.h"

#include "Buddy.h"
#include "Esqueleto.h"
#include "Grace.h"
#include "Marvin.h"

#include "Components/SceneComponent.h"
#include "Engine/World.h"

// Sets default values
AEnemySpawn::AEnemySpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_spawn = CreateDefaultSubobject<USceneComponent>("Spawn Point");

	SetRootComponent(m_spawn);
}

// Called when the game starts or when spawned
void AEnemySpawn::BeginPlay()
{
	Super::BeginPlay();
	
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

// Called every frame
void AEnemySpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

