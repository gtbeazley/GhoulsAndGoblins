// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LifeBar_W.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API ULifeBar_W : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_fullHealth = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float m_curHealth = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector4 m_progressColour = FVector4(1, 0, 0, 1);
};
