// Fill out your copyright notice in the Description page of Project Settings.


#include "Base.h"
#include "ConstructorHelpers.h"

#include "Animation/AnimBlueprint.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"

ABase::ABase()
{
	m_fullHealth = 100;
	m_curHealth = m_fullHealth;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMesh (TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Candy_Base/Candy_Base_Idle_Anim.Candy_Base_Idle_Anim'"));
	static ConstructorHelpers::FObjectFinder<UClass> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Base_AnimBP.Base_AnimBP_C'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> l_baseMesh(TEXT("StaticMesh'/Game/TopDownCPP/ASSETS/SM_BASE.SM_BASE'"));

	m_mesh->SetSkeletalMesh(l_skeletalMesh.Object);

	m_mesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	m_mesh->SetAnimClass(l_animBlueprint.Object);
	m_mesh->SetRelativeScale3D(FVector(.5, .5, .5));
	m_mesh->SetCollisionProfileName(TEXT("BlockAllDynamic"));



	m_lifeBarComponent->SetRelativeLocation(FVector(0, 0, 600.0f));
	//m_detectionSphere->bHiddenInGame = false;


}

ABase::~ABase()
{

}