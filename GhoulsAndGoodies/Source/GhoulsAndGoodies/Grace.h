// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyUnit.h"
#include "Grace.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AGrace : public AEnemyUnit
{
	GENERATED_BODY()
public:
	//Constructor intializes variables
	AGrace();

	//Destructor
	virtual ~AGrace();

	virtual void Tick(float a_deltaTime) override;

	virtual void DealDamage() override;

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackDamage = 40;

};
