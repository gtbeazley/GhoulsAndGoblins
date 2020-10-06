// Fill out your copyright notice in the Description page of Project Settings.


#include "Jimmy.h"
#include <ConstructorHelpers.h>


#include "Components/SkeletalMeshComponent.h"


AJimmy::AJimmy()
{
	m_fullHealth = 200.0f;
	m_curHealth = m_fullHealth;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_staticMeshObject(TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin'"));

	GetMesh()->SetSkeletalMesh(l_staticMeshObject.Object);
}

AJimmy::~AJimmy()
{
}

void AJimmy::BeginPlay()
{
	Super::BeginPlay();
}
