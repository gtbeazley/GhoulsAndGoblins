// Fill out your copyright notice in the Description page of Project Settings.


#include "Grace.h"

#include "ConstructorHelpers.h"
#include "DefendingUnit.h"
#include "EnemyAIController.h"

#include "Animation/AnimBlueprint.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"

AGrace::AGrace()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Grace/Anim_Grace_Floating.Anim_Grace_Floating'"));
	static ConstructorHelpers::FObjectFinder<UClass> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Grace_AnimBP.Grace_AnimBP_C'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_despawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/Grace/Anim_Grace_Death_Anim.Anim_Grace_Death_Anim'"));

	m_despawnAnim = l_despawnAnim.Object;

	GetMesh()->SetSkeletalMesh(l_skeletalMeshObject.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_animBlueprint.Object);

}

AGrace::~AGrace()
{
}

void AGrace::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
}
 
void AGrace::DealDamage()
{
	if (m_targetList.Num() > 0)
		if(m_targetList[0])
			m_targetList[0]->m_curHealth -= m_attackDamage;
}
