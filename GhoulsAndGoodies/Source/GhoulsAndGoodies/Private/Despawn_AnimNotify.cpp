// Fill out your copyright notice in the Description page of Project Settings.


#include "Despawn_AnimNotify.h"

#include "DefendingUnit.h"
#include "EnemyUnit.h"
#include "Tile.h"

#include "Components/SkeletalMeshComponent.h"

void UDespawn_AnimNotify::Notify(USkeletalMeshComponent* a_meshComp, UAnimSequenceBase* a_animation)
{

	ADefendingUnit* l_defUnit = Cast<ADefendingUnit>(a_meshComp->GetOwner());
	AEnemyUnit* l_enemyUnit = Cast<AEnemyUnit>(a_meshComp->GetOwner());

	if (l_defUnit)
	{
		l_defUnit->Despawn();
	}
	else if (l_enemyUnit)
	{
		l_enemyUnit->Despawn();
	}

}