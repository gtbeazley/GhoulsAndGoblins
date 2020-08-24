// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GNGGameState.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum EGNGGameState 
{
    STATE_Plan UMETA(DisplayName = "Plan"),
    STATE_Defend UMETA(DisplayName = "Defend")
};
