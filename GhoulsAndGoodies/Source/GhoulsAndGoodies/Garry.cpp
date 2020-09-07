// Fill out your copyright notice in the Description page of Project Settings.


#include "Garry.h"
#include "ConstructorHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

AGarry::AGarry()
{
	m_fullHealth = 200.0f;
	m_curHealth = m_fullHealth;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_meshAsset (TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/GARRY/GARRY_SKEL.GARRY_SKEL'"));

	m_mesh->SetSkeletalMesh(l_meshAsset.Object);

	m_detectionSphere = CreateDefaultSubobject<USphereComponent>("Detection Sphere");
}

AGarry::~AGarry()
{

}