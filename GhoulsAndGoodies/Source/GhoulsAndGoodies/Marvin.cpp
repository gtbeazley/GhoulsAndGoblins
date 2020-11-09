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

	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_animFinder(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/Marvin/Anim_Marvin_Attack_Anim.Anim_Marvin_Attack_Anim'"));
	m_attackAnim = l_animFinder.Object;
}

AMarvin::~AMarvin()
{
}

void AMarvin::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	if (m_curHealth > 0)
	{
		if (Cast<AEnemyAIController>(GetController()))
			if (Cast<AEnemyAIController>(GetController())->m_state == ENEMYSTATE_Attack)
			{//Attack and timer logic
				if (m_targetList.Num() > 0)
				{
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

					//Set target vector to enemy unit position
					if (m_targetList.Num() > 0)
						m_facingTarget = m_targetList[0]->GetActorLocation();

					//Face the facing target
					FRotator m_faceRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), m_facingTarget);
					GetMesh()->SetWorldRotation(FRotator(GetActorRotation().Pitch, m_faceRotation.Yaw - 90, GetActorRotation().Roll));
				}
				else
				{
					//If no enemy units are left reeset the timer
					m_attackTimer = 0;
				}
			}
	}
}

void AMarvin::Attack()
{
	if (m_targetList.Num() > 0)
	{
		//Set target vector to enemy unit position
		m_facingTarget = m_targetList[0]->GetActorLocation();

		//Face the facing target
		FRotator m_faceRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), m_facingTarget);
		GetMesh()->SetWorldRotation(FRotator(GetActorRotation().Pitch, m_faceRotation.Yaw - 90.0f, GetActorRotation().Roll));

		GetMesh()->PlayAnimation(m_attackAnim, false);
	}

}

void AMarvin::DealDamage()
{
	if (m_targetList.Num() > 0)
	{
		m_targetList[0]->m_curHealth -= m_attackDamage;
	}
}
