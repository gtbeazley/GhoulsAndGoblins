// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DefendingUnit.generated.h"

class USkeletalMeshComponent;
class USphereComponent;
class UWidgetComponent;
class ATile;

UCLASS()
class GHOULSANDGOODIES_API ADefendingUnit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefendingUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable)
	virtual void Despawn();

	UFUNCTION(BlueprintCallable)
	virtual void DealDamage();

	UFUNCTION(BlueprintCallable)
		USkeletalMeshComponent* GetMesh();

	UFUNCTION(BlueprintCallable)
		virtual void PlaySpawnAnim();

	UFUNCTION(BlueprintCallable)
		virtual void PlayDespawnAnim();
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* m_detectionSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector4 m_lifeBarColour = FVector4(0, 1, .5f, 1);

	UPROPERTY(EditAnywhere)
		UWidgetComponent* m_lifeBarComponent;

	UPROPERTY(EditAnywhere)
		USkeletalMeshComponent* m_mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_fullHealth = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_curHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UAnimSequence* m_spawnAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAnimSequence* m_despawnAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_despawnQueued = false;

	ATile* m_owningTile;


};
