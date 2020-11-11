// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyUnit.h"
#include "Esqueleto.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AEsqueleto : public AEnemyUnit
{
	GENERATED_BODY()
public:
	//Constructor
	AEsqueleto();
	//Destructor
	virtual ~AEsqueleto();

	virtual void Tick(float a_deltaTime) override;

	virtual void Attack();

	virtual void Despawn() override;

	virtual void DealDamage() override;
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_attackDamage = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimSequence* m_attackAnim;
};
