// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyUnitType.h"
#include "EnemySpawn.generated.h"

class USceneComponent;

UCLASS()
class GHOULSANDGOODIES_API AEnemySpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void Spawn(TEnumAsByte<EEnemyUnitType> a_enemyType);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* m_spawn;


};
