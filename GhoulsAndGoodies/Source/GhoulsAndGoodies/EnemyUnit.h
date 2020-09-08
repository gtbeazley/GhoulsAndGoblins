// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyUnit.generated.h"

class USkeletalMeshComponent;
class UWidgetComponent;
class USphereComponent;
class ATile;
class ULifeBar_W;

UCLASS()
class GHOULSANDGOODIES_API AEnemyUnit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Used for when the enemy unit is despawned
	UFUNCTION(BlueprintCallable)
	virtual void Despawn();

	//Updates the life bars values
	UFUNCTION(BlueprintCallable)
		void UpdateLifeBar();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector4 m_colour = FVector4(0, 1, .5f, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UWidgetComponent* m_lifeBarComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* m_mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* m_detectionSphere;

	ULifeBar_W* m_lifeBarWidgetObject;

	TArray<ATile*> m_tilePath;

	float m_fullHealth = 100.0f, m_curHealth = m_fullHealth;
};
