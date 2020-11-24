// Fill out your copyright notice in the Description page of Project Settings.


#include "Garry_Projectile.h"

#include <ConstructorHelpers.h>

#include <Components/StaticMeshComponent.h>

AGarry_Projectile::AGarry_Projectile()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> l_meshFinder(TEXT("StaticMesh'/Game/TopDownCPP/ASSETS/ANIMATION/GARRY/Garry_Projectile.Garry_Projectile'"));
	m_mesh->SetStaticMesh(l_meshFinder.Object);
}

void AGarry_Projectile::OnColliderOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
}
