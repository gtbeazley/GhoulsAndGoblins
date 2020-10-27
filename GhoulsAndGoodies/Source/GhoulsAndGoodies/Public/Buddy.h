// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyUnit.h"
#include "Buddy.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API ABuddy : public AEnemyUnit
{
	GENERATED_BODY()
	
public:
	//Constructor
	ABuddy();
	//Destructor
	virtual ~ABuddy();

	//Called at the beginning of play
	virtual void BeginPlay() override;
	//Called every frame
	virtual void Tick(float a_deltaTime) override;


};
