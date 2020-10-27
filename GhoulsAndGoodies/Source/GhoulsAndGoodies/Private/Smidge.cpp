// Fill out your copyright notice in the Description page of Project Settings.


#include "Smidge.h"

#include "ConstructorHelpers.h"

#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"

ASmidge::ASmidge()
{
	m_fullHealth = 250.0f;
	m_curHealth = m_fullHealth;
	const ConstructorHelpers::FObjectFinder<USkeletalMesh> l_skeletalMesh(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Smidge/Smidge_Anim_Idle.Smidge_Anim_Idle'"));
	static ConstructorHelpers::FObjectFinder<UClass> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Smidge_AnimBP.Smidge_AnimBP'_C'"));

	m_mesh->SetSkeletalMesh(l_skeletalMesh.Object);
	m_mesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	m_mesh->SetAnimClass(l_animBlueprint.Object);

	m_detectionSphere->OnComponentBeginOverlap.AddDynamic(this, &ASmidge::OnDetectionSphereOverlapBegin);
	m_detectionSphere->OnComponentEndOverlap.AddDynamic(this, &ASmidge::OnDetectionSphereOverlapEnd);
}

ASmidge::~ASmidge()
{

}

void ASmidge::BeginPlay()
{
	Super::BeginPlay();
}

void ASmidge::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);
}

void ASmidge::OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
}

void ASmidge::OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex)
{
}

