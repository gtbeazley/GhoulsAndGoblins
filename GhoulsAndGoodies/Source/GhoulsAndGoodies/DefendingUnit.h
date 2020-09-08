// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DefendingUnit.generated.h"

class USkeletalMeshComponent;
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

	virtual void Despawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector4 m_lifeBarColour = FVector4(0, 1, .5f, 1);

	UPROPERTY(EditAnywhere)
		UWidgetComponent* m_lifeBarComponent;

	UPROPERTY(EditAnywhere)
		USkeletalMeshComponent* m_mesh;

	float m_fullHealth = 100.0f, 
		m_curHealth = 100.0f;

	ATile* m_owningTile;
};
