// Fill out your copyright notice in the Description page of Project Settings.
#include "Marvin.h"

#include "ConstructorHelpers.h"
#include "DefendingUnit.h"
#include "EnemyAIController.h"

#include "Animation/AnimBlueprint.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"

AMarvin::AMarvin()
{ 
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Marvin/Anim_Marvin_Walk.Anim_Marvin_Walk'"));
	const ConstructorHelpers::FObjectFinder<UClass> l_AnimClass(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Marvin_AnimBP.Marvin_AnimBP_C'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_despawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/Marvin/Anim_Marvin_Death_Anim.Anim_Marvin_Death_Anim'"));

	m_despawnAnim = l_despawnAnim.Object;
	GetMesh()->SetSkeletalMesh(l_skeletalMeshObject.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_AnimClass.Object);

}

AMarvin::~AMarvin()
{
}

void AMarvin::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	
}


void AMarvin::DealDamage()
{
	if (m_targetList.Num() > 0)
	{
		if(m_targetList[0])
			m_targetList[0]->m_curHealth -= m_attackDamage;
	}
}
