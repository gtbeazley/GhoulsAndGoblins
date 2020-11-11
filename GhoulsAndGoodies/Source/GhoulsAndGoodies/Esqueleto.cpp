// Fill out your copyright notice in the Description page of Project Settings.


#include "Esqueleto.h"

#include"ConstructorHelpers.h"
#include "DefendingUnit.h"
#include "Jimmy.h"
#include "GhoulsAndGoodiesGameMode.h"

#include "Animation/AnimBlueprint.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
//#include "Kismet/KismetSystemLibrary.h"

AEsqueleto::AEsqueleto()
{ 
	m_fullHealth = 10.0f;
	m_attackDamage = 200.0f;
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

void AEsqueleto::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);

	if (m_targetList.Num() > 0)
	{
		Attack();
	}
}



void AEsqueleto::Attack()
{
	//Play animation
	if (!m_despawnQueued)
	{
		m_despawnQueued = true;
		GetMesh()->PlayAnimation(m_attackAnim, false);
	}
	 
}

void AEsqueleto::Despawn()
{
	DealDamage();
}

void AEsqueleto::DealDamage()
{ 
	TArray<TEnumAsByte<EObjectTypeQuery>> l_traceObjectTypes; 
	l_traceObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));

	TArray<AActor*> l_ignoreActors; 
	UGameplayStatics::GetAllActorsOfClass(this, AEnemyUnit::StaticClass(), l_ignoreActors);

	TArray<AActor*> l_outActors;

	UKismetSystemLibrary::SphereOverlapActors(this, GetActorLocation(), 600, l_traceObjectTypes, ADefendingUnit::StaticClass(), l_ignoreActors, l_outActors);


	for (AActor* l_outActor : l_outActors)
	{
		UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *l_outActor->GetName());
		ADefendingUnit* l_defUnit = Cast<ADefendingUnit>(l_outActor);

		if (l_defUnit)
		{
			if (Cast<AJimmy>(l_outActor))
				l_defUnit->m_curHealth -= m_attackDamage * 2;
			else
				l_defUnit->m_curHealth -= m_attackDamage;
		}
		
	}
	Cast<AGhoulsAndGoodiesGameMode>(UGameplayStatics::GetGameMode(this))->m_enemiesDestroyed++;
	Destroy(true, true);
}
