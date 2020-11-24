// Fill out your copyright notice in the Description page of Project Settings.


#include "Tiffany_Projectile.h"

#include <ConstructorHelpers.h>

#include <Components/StaticMeshComponent.h>

ATiffany_Projectile::ATiffany_Projectile()
{ 
	static ConstructorHelpers::FObjectFinder<UStaticMesh> l_meshFinder(TEXT("StaticMesh'/Game/TopDownCPP/ASSETS/ANIMATION/TIFFANY/Tiffany_Projectile.Tiffany_Projectile'"));
	m_mesh->SetStaticMesh(l_meshFinder.Object);
}

void ATiffany_Projectile::OnColliderOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
}
