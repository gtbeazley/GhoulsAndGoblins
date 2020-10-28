// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyUnit.h"
#include "Buddy.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API ABuddy : public AEnemyUnit
{
	GENERATED_BODY()
	
public:
	//Constructor
	ABuddy();
	//Destructor
	virtual ~ABuddy();

	//Called at the beginning of play
	virtual void BeginPlay() override;
	//Called every frame
	virtual void Tick(float a_deltaTime) override;

	//Called to play attack animation
	virtual void Attack() override;

	//Called during attack animation to deal damage to opponent
	virtual void DealDamage() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackTimer = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackInterval = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector m_facingTarget = { 0, 0, 0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackDamage = 20;
};
