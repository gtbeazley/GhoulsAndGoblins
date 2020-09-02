// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GNGGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API UGNGGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadwrite)
		bool m_loadGame = false;
};
