// Fill out your copyright notice in the Description page of Project Settings.


#include "Base.h"
#include "ConstructorHelpers.h"

#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/WidgetComponent.h"

ABase::ABase()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_baseMeshObject (TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Candy_Base/Candy_Base_Idle_Anim.Candy_Base_Idle_Anim'"));
	 

	m_mesh->SetSkeletalMesh(l_baseMeshObject.Object);

	m_lifeBarComponent->SetRelativeLocation(FVector(0, 0, 600.0f));

	m_fullHealth = 100;

	m_curHealth = m_fullHealth;
}

ABase::~ABase()
{

}