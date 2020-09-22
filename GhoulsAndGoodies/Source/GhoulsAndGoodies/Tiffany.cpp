// Fill out your copyright notice in the Description page of Project Settings.


#include "Tiffany.h"

#include "ConstructorHelpers.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

ATiffany::ATiffany()
{ 

	m_detectionSphere = CreateDefaultSubobject<USphereComponent>("DetectionSphere");

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_meshAsset(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/TIFFANY/TIFFANY_IDLE.TIFFANY_IDLE'"));

	m_mesh->SetSkeletalMesh(l_meshAsset.Object);

	m_detectionSphere = CreateDefaultSubobject<USphereComponent>("Detection Sphere");
	m_detectionSphere->SetupAttachment(m_mesh);
	m_detectionSphere->SetRelativeScale3D(FVector(10));

}

ATiffany::~ATiffany()
{
	
}

