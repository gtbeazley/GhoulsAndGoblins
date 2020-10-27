// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DefendingUnit.h"
#include "Smidge.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API ASmidge : public ADefendingUnit
{
	GENERATED_BODY()
	
public:
	//Constructor
	ASmidge();
	//Destructor
	virtual ~ASmidge();

	//Begin Play function
	virtual void BeginPlay() override;

	//Called frame 
	virtual void Tick(float a_deltaTime);

	//Called when anything but detection enters the sphere
	UFUNCTION(BlueprintCallable)
		void OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp,
			AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex,
			bool a_fromSweep, const FHitResult& a_sweepResult);

	//Called when anything but detection exits the sphere
	UFUNCTION(BlueprintCallable)
		void OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor,
			UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex);

};
