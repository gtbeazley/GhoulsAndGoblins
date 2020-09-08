// Fill out your copyright notice in the Description page of Project Settings.
#include "Marvin.h"

#include "ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"

AMarvin::AMarvin()
{ 
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Marvin/Anim_Marvin_Walk.Anim_Marvin_Walk'"));

	m_mesh->SetSkeletalMesh(l_skeletalMeshObject.Object);
}

AMarvin::~AMarvin()
{
}
