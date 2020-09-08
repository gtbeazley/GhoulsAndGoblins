// Fill out your copyright notice in the Description page of Project Settings.


#include "Grace.h"

#include "ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"

AGrace::AGrace()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Grace/Anim_Grace_Floating.Anim_Grace_Floating'"));

	m_mesh->SetSkeletalMesh(l_skeletalMeshObject.Object);
}

AGrace::~AGrace()
{
}
