// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyUnit.h"
#include "Marvin.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AMarvin : public AEnemyUnit
{
	GENERATED_BODY()
public:
	//Constructor
	AMarvin();
	//Deconstructor
	~AMarvin();

	UFUNCTION(BlueprintCallable)
		virtual void Tick(float a_deltaTime) override;

		virtual void Attack() override; 

		virtual void DealDamage() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackTimer = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackInterval = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector m_facingTarget = { 0, 0, 0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackDamage = 20;
};
