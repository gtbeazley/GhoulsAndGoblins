// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DefendingUnit.h"
#include "Tiffany.generated.h"

class USkeletalMeshComponent;
class USphereComponent;
/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API ATiffany : public ADefendingUnit
{
	GENERATED_BODY()
public:
	ATiffany();
	~ATiffany();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* m_mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* m_detectionSphere;
};
