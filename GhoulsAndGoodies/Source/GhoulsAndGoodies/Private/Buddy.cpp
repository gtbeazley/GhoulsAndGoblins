// Fill out your copyright notice in the Description page of Project Settings.


#include "Buddy.h"

#include "ConstructorHelpers.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

ABuddy::ABuddy()
{
	const ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMesh(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Buddy/Anim_Buddy_Running.Anim_Buddy_Running'"));
	const ConstructorHelpers::FObjectFinder<UClass> l_animBP(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Buddy_AnimBP.Buddy_AnimBP_C'"));

	GetMesh()->SetSkeletalMesh(l_skeletalMesh.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_animBP.Object);

}

ABuddy::~ABuddy()
{
}

void ABuddy::BeginPlay()
{
}

void ABuddy::Tick(float a_deltaTime)
{
}
