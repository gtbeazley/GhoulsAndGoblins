// Fill out your copyright notice in the Description page of Project Settings.


#include "DealDamage_AnimNotify.h"

#include "DefendingUnit.h"
#include "Engine.h" 
#include "EnemyUnit.h"
#include "Components/SkeletalMeshComponent.h"


void UDealDamage_AnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) {
	ADefendingUnit* l_defUnit = Cast<ADefendingUnit>(MeshComp->GetOwner());
	AEnemyUnit* l_enemyUnit = Cast<AEnemyUnit>(MeshComp->GetOwner());

	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, FString::Printf(TEXT("Deal Damage Called")));

	if (l_defUnit)
	{
		l_defUnit->DealDamage();
	}
	else if (l_enemyUnit)
	{
		l_enemyUnit->DealDamage();
	}

}