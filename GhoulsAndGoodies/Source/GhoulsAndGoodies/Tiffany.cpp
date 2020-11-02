// Fill out your copyright notice in the Description page of Project Settings.


#include "Tiffany.h"

#include "ConstructorHelpers.h"
#include "EnemyUnit.h"


#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"

ATiffany::ATiffany()
{  

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_meshAsset(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/TIFFANY/TIFFANY_IDLE.TIFFANY_IDLE'"));
	//static ConstructorHelpers::FObjectFinder<UAnimSequence> l_spawnAnim(TEXT(""));


	GetMesh()->SetSkeletalMesh(l_meshAsset.Object);

	m_detectionSphere->OnComponentBeginOverlap.AddDynamic(this, &ATiffany::OnDetectionSphereOverlapBegin);
	m_detectionSphere->OnComponentEndOverlap.AddDynamic(this, &ATiffany::OnDetectionSphereOverlapEnd);

	

}

ATiffany::~ATiffany()
{
	
}

void ATiffany::Tick(float a_deltaTime)
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


void ATiffany::Attack() {
	//FaceTarget
	if (m_detectedEnemies.Num() > 0)
	{
		//Face the facing target
		FRotator m_faceRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), m_facingTarget);
		GetMesh()->SetWorldRotation(FRotator(GetActorRotation().Pitch, m_faceRotation.Yaw + 90, GetActorRotation().Roll));
	}
	//Play attack animation
	m_detectedEnemies[0]->m_curHealth -= m_attackDamage;
}

void ATiffany::DealDamage() {
	m_detectedEnemies[0]->m_curHealth -= m_attackDamage;

}

void ATiffany::OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
	if (Cast<AEnemyUnit>(a_otherActor))
	{
		m_detectedEnemies.AddUnique(Cast<AEnemyUnit>(a_otherActor));

	}
}

void ATiffany::OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex)
{
	if (Cast<AEnemyUnit>(a_otherActor))
	{
		m_detectedEnemies.Remove(Cast<AEnemyUnit>(a_otherActor));
	}
}

