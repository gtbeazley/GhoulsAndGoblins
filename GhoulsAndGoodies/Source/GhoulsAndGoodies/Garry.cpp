// Fill out your copyright notice in the Description page of Project Settings.


#include "Garry.h"
#include "ConstructorHelpers.h"
#include "EnemyUnit.h"

#include "Animation/AnimBlueprint.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

AGarry::AGarry()
{
	m_fullHealth = 200.0f;
	m_curHealth = m_fullHealth;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_meshAsset (TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/GARRY/GARRY_ANIM_IDLE_02.GARRY_ANIM_IDLE_02'"));
	static ConstructorHelpers::FObjectFinder<UClass> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Garry_AnimBP.Garry_AnimBP_C'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_spawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/GARRY/GARRY_ANIM_SPAWN_Anim.GARRY_ANIM_SPAWN_Anim'"));

	m_spawnAnim = l_spawnAnim.Object;

	m_mesh->SetSkeletalMesh(l_meshAsset.Object);


	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_animBlueprint.Object);

	m_detectionSphere->OnComponentBeginOverlap.AddDynamic(this, &AGarry::OnDetectionSphereOverlapBegin);
	m_detectionSphere->OnComponentEndOverlap.AddDynamic(this, &AGarry::OnDetectionSphereOverlapEnd);
	//m_detectionSphere->bHiddenInGame = false;

}

AGarry::~AGarry()
{

}

void AGarry::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	//Attack and timer logic
	if (m_detectedEnemies.Num() > 0)
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
		m_facingTarget = m_detectedEnemies[0]->GetActorLocation();
		 
		//Face the facing target
		FRotator m_faceRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), m_facingTarget);
		GetMesh()->SetWorldRotation(FRotator(GetActorRotation().Pitch, m_faceRotation.Yaw, GetActorRotation().Roll));
	}
	else 
	{
		//If no enemy units are left reeset the timer
		m_attackTimer = 0;
	}
	
}

void AGarry::OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
	if (Cast<AEnemyUnit>(a_otherActor))
	{
		m_detectedEnemies.AddUnique(Cast<AEnemyUnit>(a_otherActor));
		
	}
}

void AGarry::OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex)
{
	if (Cast<AEnemyUnit>(a_otherActor))
	{
		m_detectedEnemies.Remove(Cast<AEnemyUnit>(a_otherActor));
	}
}

void AGarry::Attack()
{
	if (m_detectedEnemies.Num() > 0)
	{ 
		//Face the facing target
		FRotator m_faceRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), m_facingTarget);
		GetMesh()->SetWorldRotation(FRotator(GetActorRotation().Pitch, m_faceRotation.Yaw + 90, GetActorRotation().Roll));
	}
		//Play attack animation
	m_detectedEnemies[0]->m_curHealth -= m_attackDamage;
}

void AGarry::DealDamage()
{
	m_detectedEnemies[0]->m_curHealth -= m_attackDamage;
}
