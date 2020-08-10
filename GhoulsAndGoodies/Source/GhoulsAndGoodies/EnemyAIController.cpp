// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include <BehaviorTree/BlackboardData.h>

AEnemyAIController::AEnemyAIController()
{

}

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();
	UBlackboardData* l_data = Cast<UBlackboardData>(StaticLoadClass(UBlackboardData::StaticClass(), nullptr, TEXT("BlackboardData'/Game/TopDownCPP/AI/EnemyBlackBoard.EnemyBlackBoard'")));
	
	UBlackboardComponent* l_outBoard;
	UseBlackboard(l_data, l_outBoard);

}