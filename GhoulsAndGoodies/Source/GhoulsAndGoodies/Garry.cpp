// Fill out your copyright notice in the Description page of Project Settings.


#include "Garry.h"
#include "ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

AGarry::AGarry()
{
	m_fullHealth = 200.0f;
	m_curHealth = m_fullHealth;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_meshAsset (TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/GARRY/GARRY_ANIM_IDLE_02.GARRY_ANIM_IDLE_02'"));

	m_mesh->SetSkeletalMesh(l_meshAsset.Object);

	m_detectionSphere = CreateDefaultSubobject<USphereComponent>("Detection Sphere");
	m_detectionSphere->SetupAttachment(m_mesh);
	m_detectionSphere->SetRelativeScale3D(FVector(10));
}

AGarry::~AGarry()
{

}