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

	m_detectionSphere->InitSphereRadius(300);
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
}
 
void ASmidge::DealDamage()
{
	m_detectedEnemies[0]->m_curHealth -= m_attackDamage;
}

