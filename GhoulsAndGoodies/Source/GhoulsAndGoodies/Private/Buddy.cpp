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

	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_animFinder(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/Buddy/Anim_Buddy_Attacking_Anim.Anim_Buddy_Attacking_Anim'"));
	m_attackAnim = l_animFinder.Object;

	
}

ABuddy::~ABuddy()
{
}

void ABuddy::BeginPlay()
{
	Super::BeginPlay();
}

void ABuddy::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	if (Cast<AEnemyAIController>(GetController()))
		if (Cast<AEnemyAIController>(GetController())->m_state == ENEMYSTATE_Attack)
		{//Attack and timer logic
			if (m_targetList.Num() > 0)
			{
				//Set target vector to enemy unit position
				m_facingTarget = m_targetList[0]->GetActorLocation();

				//Face the facing target
				FRotator m_faceRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), m_facingTarget);
				GetMesh()->SetWorldRotation(FRotator(GetActorRotation().Pitch, m_faceRotation.Yaw - 90, GetActorRotation().Roll));
				if (m_attackTimer > 0)
				{
					//Countdown the timer
					m_attackTimer -= a_deltaTime;
				}
				else
				{
					//Restart timer and Attack
					m_attackTimer = m_attackInterval;
					Attack();
				}

			}
			else
			{
				//If no enemy units are left reset the timer
				m_attackTimer = 0;
			}
		}
}

void ABuddy::Attack()
{
	if(!m_despawnQueued)
	GetMesh()->PlayAnimation(m_attackAnim, false);
}

void ABuddy::DealDamage()
{
	if (m_targetList.Num() > 0)
		m_targetList[0]->m_curHealth -= m_attackDamage;
}
