// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DefendingUnit.h"
#include "Garry.generated.h"

class USkeletalMeshComponent;
class USphereComponent;
class AEnemyUnit;

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AGarry : public ADefendingUnit
{
	GENERATED_BODY()
	
public:
	AGarry();
	~AGarry();

	virtual void Tick(float a_deltaTime);

	UFUNCTION(BlueprintCallable)
		void OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp,
			AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex,
			bool a_fromSweep, const FHitResult& a_sweepResult);

	UFUNCTION(BlueprintCallable)
		void OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor,
			UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex);

	UFUNCTION(BlueprintCallable)
		void Attack(AEnemyUnit* m_enemyToAttack);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AEnemyUnit*> m_detectedEnemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackDamage = 10.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float m_attackInterval = 3.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float m_attackTimer = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector m_facingTarget = FVector(0, 0, 0);
};
