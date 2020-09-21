// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyState.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
public:
	AEnemyAIController();

	virtual void BeginPlay() override;

	virtual void Tick(float a_deltaTime) override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EEnemyState> m_state = ENEMYSTATE_Move;
protected:

	UBlackboardData* m_bBData;
	UBehaviorTree* m_behTree;
};
