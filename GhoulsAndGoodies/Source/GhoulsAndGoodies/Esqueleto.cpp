// Fill out your copyright notice in the Description page of Project Settings.


#include "Esqueleto.h"

#include"ConstructorHelpers.h"
#include "DefendingUnit.h"
#include "GhoulsAndGoodiesGameMode.h"

#include "Animation/AnimBlueprint.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"

AEsqueleto::AEsqueleto()
{ 
	m_fullHealth = 10.0f;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Esqueleto/Anim_Esqueleto.Anim_Esqueleto'"));
	const ConstructorHelpers::FObjectFinder<UClass> l_AnimClass(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Esqueleto_AnimBP.Esqueleto_AnimBP_C'"));

	GetMesh()->SetSkeletalMesh(l_skeletalMeshObject.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_AnimClass.Object);
	
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_animFinder(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/Esqueleto/Anim_Esqueleto_Exploding_Anim.Anim_Esqueleto_Exploding_Anim'"));
	m_attackAnim = l_animFinder.Object;
}

AEsqueleto::~AEsqueleto()
{
}

void AEsqueleto::Attack()
{
	//Play animation
	GetMesh()->PlayAnimation(m_attackAnim, false);
	 
}

void AEsqueleto::Despawn()
{
	DealDamage();
}

void AEsqueleto::DealDamage()
{ 
	for (ADefendingUnit* l_target : m_targetList)
	{

		l_target->m_curHealth -= m_attackDamage;
	}
	Cast<AGhoulsAndGoodiesGameMode>(UGameplayStatics::GetGameMode(this))->m_enemiesDestroyed++;
	Destroy(true, true);
}
