// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawned_AnimNotify.h"
#include "DefendingUnit.h"
#include "EnemyUnit.h"
#include "Components/SkeletalMeshComponent.h"

void USpawned_AnimNotify::Notify(USkeletalMeshComponent* a_meshComp, UAnimSequenceBase* a_animation)
{
	a_meshComp->SetAnimationMode(EAnimationMode::AnimationBlueprint);
}