// Fill out your copyright notice in the Description page of Project Settings.


#include "Smidge.h"

#include "ConstructorHelpers.h"
#include "EnemyUnit.h"

#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

ASmidge::ASmidge()
{
	m_fullHealth = 250.0f;
	m_curHealth = m_fullHealth;
	const ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMesh(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Smidge/Smidge_Anim_Idle.Smidge_Anim_Idle'"));
	static ConstructorHelpers::FObjectFinder<UClass> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Smidge_AnimBP.Smidge_AnimBP_C'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_despawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/Smidge/Anim_Smidge_Death_Anim.Anim_Smidge_Death_Anim'"));

	m_despawnAnim = l_despawnAnim.Object;

	m_mesh->SetSkeletalMesh(l_skeletalMesh.Object);
	m_mesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	m_mesh->SetAnimClass(l_animBlueprint.Object);

	m_detectionSphere->OnComponentBeginOverlap.AddDynamic(this, &ASmidge::OnDetectionSphereOverlapBegin);
	m_detectionSphere->OnComponentEndOverlap.AddDynamic(this, &ASmidge::OnDetectionSphereOverlapEnd);
}

ASmidge::~ASmidge()
{

}

void ASmidge::BeginPlay()
{
	Super::BeginPlay();
}

void ASmidge::Tick(float a_deltaTime)
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

void ASmidge::OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
	if (Cast<AEnemyUnit>(a_otherActor))
	{
		if(Cast<UCapsuleComponent>(a_otherComp))
			m_detectedEnemies.AddUnique(Cast<AEnemyUnit>(a_otherActor));

	}
}

void ASmidge::OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex)
{
	if (Cast<AEnemyUnit>(a_otherActor))
	{
		m_detectedEnemies.Remove(Cast<AEnemyUnit>(a_otherActor));
	}
}

void ASmidge::Attack()
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

void ASmidge::DealDamage()
{
	m_detectedEnemies[0]->m_curHealth -= m_attackDamage;
}

