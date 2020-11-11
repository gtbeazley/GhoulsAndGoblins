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

	virtual void Tick(float a_deltaTime) override;
;  
	
	virtual void DealDamage() override;

public:

};
