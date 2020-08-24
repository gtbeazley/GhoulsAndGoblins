// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DefendingUnit.h"
#include "Jimmy.generated.h"


class USkeletalMeshComponent;
/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API AJimmy : public ADefendingUnit
{
	GENERATED_BODY()
public:
	//Constructor
	AJimmy();

	//Destructor
	~AJimmy();

	virtual void BeginPlay();
protected:
	UPROPERTY(EditAnywhere)
		USkeletalMeshComponent* m_mesh;

};
