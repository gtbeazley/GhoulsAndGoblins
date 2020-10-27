// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EnemyUnitType.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum EEnemyUnitType
{
    ATT_Marvin UMETA(DisplayName = "Marvin"),
    ATT_Grace UMETA(DisplayName = "Grace"),
    ATT_Esqueleto UMETA(DisplayName = "Esqueleto"),
    ATT_Buddy UMETA(DisplayName = "Buddy")

};