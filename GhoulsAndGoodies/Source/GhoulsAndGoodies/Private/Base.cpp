// Fill out your copyright notice in the Description page of Project Settings.


#include "Base.h"
#include "ConstructorHelpers.h"

#include "Animation/AnimBlueprint.h"
#include "Animation/AnimSequence.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

ABase::ABase()
{
	m_fullHealth = 100;
	m_curHealth = m_fullHealth;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMesh (TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Candy_Base/Candy_Base_Idle_Anim.Candy_Base_Idle_Anim'"));
	static ConstructorHelpers::FObjectFinder<UClass> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Base_AnimBP.Base_AnimBP_C'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_spawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/Candy_Base/Candy_Base_Spawn_Anim_Anim.Candy_Base_Spawn_Anim_Anim'"));


	m_spawnAnim = l_spawnAnim.Object;
	m_mesh->SetSkeletalMesh(l_skeletalMesh.Object);

	m_mesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	m_mesh->SetAnimClass(l_animBlueprint.Object);
	m_mesh->SetRelativeScale3D(FVector(.5, .5, .5));

	m_detectionSphere->InitSphereRadius(0);


	m_lifeBarComponent->SetRelativeLocation(FVector(0, 0, 0));
	//m_detectionSphere->bHiddenInGame = false;


}

ABase::~ABase()
{

}

void ABase::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
	FRotator l_facingRotation = UKismetMathLibrary::FindLookAtRotation(m_lifeBarComponent->GetComponentLocation(), UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraLocation());
	m_mesh->SetWorldRotation(FRotator(GetActorRotation().Pitch, l_facingRotation.Yaw-90, GetActorRotation().Roll));

}
