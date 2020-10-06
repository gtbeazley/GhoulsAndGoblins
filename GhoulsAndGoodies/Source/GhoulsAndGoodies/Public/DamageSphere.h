// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamageSphere.generated.h"

class USphereComponent;

UCLASS()
class GHOULSANDGOODIES_API ADamageSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamageSphere();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Called when the sphere begins to overlap with another actor
	void OnDamageSphereBeginOverlap(UPrimitiveComponent* a_overlappedComp,
		AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex,
		bool a_fromSweep, const FHitResult& a_sweepResult);

	//Called when the sphere stops overlapping with another actor End Overlap
	void OnDamageSphereEndOverlap(UPrimitiveComponent* a_overlappedComp,
		AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex);

	//Explode and Despawn
	void Explode();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* m_damageSphere;

	//Determines who it can attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_damageDefendingUnits = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<AActor*> m_actorsToDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_damage;
};
