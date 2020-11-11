// Fill out your copyright notice in the Description page of Project Settings.


#include "Buddy.h"

#include "ConstructorHelpers.h"
#include "DefendingUnit.h"
#include "EnemyAIController.h"

#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

ABuddy::ABuddy()
{
	m_fullHealth = 200.0f;
	m_curHealth = m_fullHealth;
	const ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMesh(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Buddy/Anim_Buddy_Running.Anim_Buddy_Running'"));
	const ConstructorHelpers::FObjectFinder<UClass> l_animBP(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Buddy_AnimBP.Buddy_AnimBP_C'"));
	const ConstructorHelpers::FObjectFinder<UAnimSequence> l_despawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/Buddy/Anim_Buddy_Death_Anim.Anim_Buddy_Death_Anim'"));
	
	m_despawnAnim = l_despawnAnim.Object;

	GetMesh()->SetSkeletalMesh(l_skeletalMesh.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_animBP.Object); 
}

ABuddy::~ABuddy()
{
}

void ABuddy::BeginPlay()
{
	Super::BeginPlay();
	m_attackSpeed = 2;
}

void ABuddy::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	 
}

void ABuddy::DealDamage()
{
	if (m_targetList.Num() > 0)
		m_targetList[0]->m_curHealth -= m_attackDamage;
}
