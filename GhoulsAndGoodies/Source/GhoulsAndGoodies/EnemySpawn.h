// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyUnitType.h"
#include "EnemySpawn.generated.h"

class USceneComponent;
class USpotLightComponent;

UCLASS()
class GHOULSANDGOODIES_API AEnemySpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Called when to spawn an enemy unit
	//The type that is spawned will be determined by a_enemyType
	UFUNCTION(BlueprintCallable)
		void Spawn(TEnumAsByte<EEnemyUnitType> a_enemyType);

	//Queues an enemy to be spawned
	UFUNCTION(BlueprintCallable)
		void QueueSpawn(TEnumAsByte<EEnemyUnitType> a_enemyType);

	//Called when needed to change the lighting 
	//a_turnOn determines whether to turn it on or not
	UFUNCTION(BlueprintCallable)
		void TurnLightOn(bool a_turnOn);

	//Called to reset to no spawns queued
	UFUNCTION(BlueprintCallable)
		void Reset();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* m_spawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* m_pumpkinStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USpotLightComponent* m_spotLight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor m_lightColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor m_onColor = FLinearColor(1, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor m_offColor = FLinearColor(0, 0, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_spawnTimer = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_spawnInterval = .5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray< TEnumAsByte<EEnemyUnitType>> m_spawnQueue;
};
