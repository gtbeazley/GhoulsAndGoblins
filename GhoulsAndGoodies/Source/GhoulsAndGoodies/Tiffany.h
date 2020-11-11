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

	virtual void Tick(float a_deltaTime) override;

	virtual void DealDamage() override;
public: 

};
