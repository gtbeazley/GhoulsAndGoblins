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
	m_fullHealth = 300.0f;
	m_curHealth = m_fullHealth;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_meshAsset (TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/GARRY/GARRY_ANIM_IDLE_02.GARRY_ANIM_IDLE_02'"));
	static ConstructorHelpers::FObjectFinder<UClass> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Garry_AnimBP.Garry_AnimBP_C'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_spawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/GARRY/GARRY_ANIM_SPAWN_Anim.GARRY_ANIM_SPAWN_Anim'"));

	m_spawnAnim = l_spawnAnim.Object;

	m_mesh->SetSkeletalMesh(l_meshAsset.Object);


	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_animBlueprint.Object);

	m_detectionSphere->InitSphereRadius(500);

}

AGarry::~AGarry()
{

}

void AGarry::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	
}


void AGarry::DealDamage()
{
	m_detectedEnemies[0]->m_curHealth -= m_attackDamage;
}
