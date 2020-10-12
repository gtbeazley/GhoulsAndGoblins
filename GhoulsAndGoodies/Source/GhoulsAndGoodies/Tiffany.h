// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DefendingUnit.h"
#include "Tiffany.generated.h"
 
class USphereComponent;
class AEnemyUnit;
/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API ATiffany : public ADefendingUnit
{
	GENERATED_BODY()
public:
	ATiffany();
	~ATiffany();

	virtual void Tick(float a_deltaTime);

	UFUNCTION(BlueprintCallable)
		void OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp,
			AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex,
			bool a_fromSweep, const FHitResult& a_sweepResult);

	UFUNCTION(BlueprintCallable)
		void OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor,
			UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex);

	UFUNCTION(BlueprintCallable)
		void Attack();

		virtual void DealDamage() override;
public: 


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AEnemyUnit*> m_detectedEnemies;
};
