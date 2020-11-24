// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class GHOULSANDGOODIES_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Called when collision sphere overlaps something
	//Overridable for different effects
	UFUNCTION(BlueprintCallable)
		virtual void OnColliderOverlapBegin(UPrimitiveComponent* a_overlappedComp,
			AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex,
			bool a_fromSweep, const FHitResult& a_sweepResult);
public:
	//Mesh Component For Projectile Appearance
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UStaticMeshComponent* m_mesh;

	//Collider as a sphere for optimised collision
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		USphereComponent* m_collider;

};
