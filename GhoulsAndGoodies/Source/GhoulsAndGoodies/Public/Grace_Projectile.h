// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectile.h"
#include "Grace_Projectile.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AGrace_Projectile : public AProjectile
{
	GENERATED_BODY()
public:
	AGrace_Projectile();

	virtual void OnColliderOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult) override;

};
