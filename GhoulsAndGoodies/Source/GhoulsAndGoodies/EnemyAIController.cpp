// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"

#include "Base.h"
#include "DefendingUnit.h"
#include "GhoulsAndGoodiesGameMode.h"
#include "Tile.h"

#include <BehaviorTree/BlackboardData.h>
#include <BehaviorTree/BlackboardComponent.h>
#include <BehaviorTree/BehaviorTree.h>
#include <GameFramework/Character.h>
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/GameplayStatics.h>

#include <ConstructorHelpers.h>

AEnemyAIController::AEnemyAIController()
{

	const ConstructorHelpers::FObjectFinder<UBlackboardData> l_bBData(TEXT("BlackboardData'/Game/TopDownCPP/AI/EnemyBlackBoard.EnemyBlackBoard'"));
	const ConstructorHelpers::FObjectFinder<UBehaviorTree> l_behTree(TEXT("BehaviorTree'/Game/TopDownCPP/AI/EnemyBehTree.EnemyBehTree'"));
	
	
	if(l_bBData.Succeeded())
	m_bBData = l_bBData.Object;
	if(l_behTree.Succeeded())
	m_behTree = l_behTree.Object;

	

}

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();
	
	UBlackboardComponent* l_outBoard = nullptr;
	if(m_bBData)
	UseBlackboard(m_bBData, l_outBoard);
	if (l_outBoard != nullptr)
	{
		AGhoulsAndGoodiesGameMode* l_gNGGameMode = Cast <AGhoulsAndGoodiesGameMode>(UGameplayStatics::GetGameMode(this));
		if (l_gNGGameMode && l_gNGGameMode->m_baseLockTiles.Num() - 1 >= 3)
		{
			int l_randIter = UKismetMathLibrary::RandomIntegerInRange(0, 3);
			l_outBoard->SetValueAsObject("CharacterTarget", Cast<UObject>(l_gNGGameMode->m_baseLockTiles[l_randIter]));
		}
	}

	if(m_behTree)
	RunBehaviorTree(m_behTree);
}

void AEnemyAIController::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	switch (m_state)
	{
	case ENEMYSTATE_Attack:
		GetBlackboardComponent()->SetValueAsBool("MoveState", false);
		break;
	case ENEMYSTATE_Move:
		GetBlackboardComponent()->SetValueAsBool("MoveState", true);
		break;
	}

	
}
