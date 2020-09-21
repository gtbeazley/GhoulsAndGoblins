// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EnemyState.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum EEnemyState {
    ENEMYSTATE_Move UMETA(DisplayName = "Move"), 
    ENEMYSTATE_Attack UMETA(DisplayName = "Attack")
};