// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyState.h"
#include "EnemyUnit.generated.h"

class ADefendingUnit;
class ATile;
class USkeletalMeshComponent;
class UWidgetComponent;
class USphereComponent;
class ULifeBar_W;

UCLASS()
class GHOULSANDGOODIES_API AEnemyUnit : public ACharacter
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

	UFUNCTION(BlueprintCallable)
		void OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp, 
			AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, 
			bool a_fromSweep, const FHitResult& a_sweepResult);

	UFUNCTION(BlueprintCallable)
		void OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor,
			UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex);

	UFUNCTION(BlueprintCallable)
		virtual void Attack();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector4 m_lifeBarColour = FVector4(.5, .01, .5, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UWidgetComponent* m_lifeBarComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* m_detectionSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ADefendingUnit*> m_targetList;

	ULifeBar_W* m_lifeBarWidgetObject;

	TArray<ATile*> m_tilePath;

	float m_fullHealth = 100.0f, m_curHealth = m_fullHealth;

};
