// Fill out your copyright notice in the Description page of Project Settings.


#include "Esqueleto.h"

#include"ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"

AEsqueleto::AEsqueleto()
{ 
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMeshObject(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Esqueleto/Anim_Esqueleto.Anim_Esqueleto'"));

	m_mesh->SetSkeletalMesh(l_skeletalMeshObject.Object);
}

AEsqueleto::~AEsqueleto()
{
}
