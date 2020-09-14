// Fill out your copyright notice in the Description page of Project Settings.


#include "Grace.h"

#include "ConstructorHelpers.h"

#include "Animation/AnimBlueprint.h"
#include "Components/SkeletalMeshComponent.h"

AGrace::AGrace()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Grace/Anim_Grace_Floating.Anim_Grace_Floating'"));
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Grace.Grace'"));

	GetMesh()->SetSkeletalMesh(l_skeletalMeshObject.Object);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_animBlueprint.Object->GeneratedClass);
}

AGrace::~AGrace()
{
}
