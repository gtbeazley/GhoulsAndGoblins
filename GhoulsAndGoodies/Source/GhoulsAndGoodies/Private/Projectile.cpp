// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"

#include <Components/SphereComponent.h>
#include <Components/StaticMeshComponent.h>

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	m_mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	m_collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));


	m_collider->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnColliderOverlapBegin);

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnColliderOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
}

