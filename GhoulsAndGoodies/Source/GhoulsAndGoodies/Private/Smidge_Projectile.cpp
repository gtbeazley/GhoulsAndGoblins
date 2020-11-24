// Fill out your copyright notice in the Description page of Project Settings.


#include "Smidge_Projectile.h"

#include <ConstructorHelpers.h>

#include <Components/StaticMeshComponent.h>

ASmidge_Projectile::ASmidge_Projectile()
{
	ConstructorHelpers::FObjectFinder<UStaticMesh> l_meshFinder(TEXT("StaticMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Smidge/Smidge_Projectile.Smidge_Projectile'"));
	m_mesh->SetStaticMesh(l_meshFinder.Object);


}

void ASmidge_Projectile::OnColliderOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
}
