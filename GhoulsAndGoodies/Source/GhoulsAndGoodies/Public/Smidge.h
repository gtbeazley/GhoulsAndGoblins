// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DefendingUnit.h"
#include "Smidge.generated.h"

class AEnemyUnit;

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
	virtual void Tick(float a_deltaTime) override;

	//Called durin animation notify to deal damage to target enemy
	virtual void DealDamage() override;
public:
};
