// Fill out your copyright notice in the Description page of Project Settings.


#include "Esqueleto.h"

#include"ConstructorHelpers.h"
#include "DefendingUnit.h"
#include "GhoulsAndGoodiesGameMode.h"

#include "Animation/AnimBlueprint.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"

AEsqueleto::AEsqueleto()
{ 
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Esqueleto/Anim_Esqueleto.Anim_Esqueleto'"));
	const ConstructorHelpers::FObjectFinder<UAnimBlueprint> l_AnimClass(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Esqueleto_AnimBP.Esqueleto_AnimBP'"));

	GetMesh()->SetSkeletalMesh(l_skeletalMeshObject.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_AnimClass.Object->GeneratedClass);
	
}

AEsqueleto::~AEsqueleto()
{
}

void AEsqueleto::Attack()
{
	//Play animation

	for (ADefendingUnit* l_target : m_targetList)
	{
		l_target->m_curHealth -= m_attackDamage;
	}
	
	Cast<AGhoulsAndGoodiesGameMode>(UGameplayStatics::GetGameMode(this))->m_enemiesDestroyed++;
	Destroy(true, true);
}

void AEsqueleto::Despawn()
{
	Attack();
}
