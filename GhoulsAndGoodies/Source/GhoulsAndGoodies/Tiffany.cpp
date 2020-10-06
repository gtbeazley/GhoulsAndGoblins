// Fill out your copyright notice in the Description page of Project Settings.


#include "Tiffany.h"

#include "ConstructorHelpers.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

ATiffany::ATiffany()
{ 

	m_detectionSphere = CreateDefaultSubobject<USphereComponent>("DetectionSphere");

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_meshAsset(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/TIFFANY/TIFFANY_IDLE.TIFFANY_IDLE'"));

	GetMesh()->SetSkeletalMesh(l_meshAsset.Object);

	m_detectionSphere->OnComponentBeginOverlap.AddDynamic(this, &ATiffany::OnDetectionSphereOverlapBegin);
	m_detectionSphere->OnComponentEndOverlap.AddDynamic(this, &ATiffany::OnDetectionSphereOverlapEnd);

}

ATiffany::~ATiffany()
{
	
}

void ATiffany::OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
}

void ATiffany::OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex)
{
}

