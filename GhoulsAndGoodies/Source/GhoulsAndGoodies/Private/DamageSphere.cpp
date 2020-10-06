// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageSphere.h"
#include "DefendingUnit.h"
#include "EnemyUnit.h"

// Sets default values
ADamageSphere::ADamageSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADamageSphere::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADamageSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

} 

void ADamageSphere::OnDamageSphereBeginOverlap(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{ 
	if (m_damageDefendingUnits)
	{
		if(Cast<ADefendingUnit>(a_otherActor))
			m_actorsToDamage.AddUnique(a_otherActor);
			
	}
	else
	{
		if (Cast<AEnemyUnit>(a_otherActor))
			m_actorsToDamage.AddUnique(a_otherActor); 
	}

}

void ADamageSphere::OnDamageSphereEndOverlap(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex)
{
	m_actorsToDamage.Remove(a_otherActor);
}

void ADamageSphere::Explode()
{
	if(m_damageDefendingUnits)
	{
		for (AActor* l_actorToBeDamaged : m_actorsToDamage)
		{ 
			Cast<ADefendingUnit>(l_actorToBeDamaged)->m_curHealth -= m_damage;
		}
	}
	else
	{
		for (AActor* l_actorToBeDamaged : m_actorsToDamage)
		{ 
			Cast<AEnemyUnit>(l_actorToBeDamaged)->m_curHealth -= m_damage; 
		}
	}
}

