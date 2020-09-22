// Fill out your copyright notice in the Description page of Project Settings.
#include "Marvin.h"

#include "ConstructorHelpers.h"

#include "Animation/AnimBlueprint.h"
#include "Components/SkeletalMeshComponent.h"

AMarvin::AMarvin()
{ 
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Marvin/Anim_Marvin_Walk.Anim_Marvin_Walk'"));
	const ConstructorHelpers::FObjectFinder<UAnimBlueprint> l_AnimClass(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Marvin_AnimBP.Marvin_AnimBP'"));

	GetMesh()->SetSkeletalMesh(l_skeletalMeshObject.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_AnimClass.Object->GeneratedClass);
}

AMarvin::~AMarvin()
{
}
