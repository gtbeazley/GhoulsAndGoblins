// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <TileDefenceType.generated.h>

UENUM(BlueprintType)
enum ETileDefenceType
{
	DEF_None UMETA(DisplayName = "None"),
	DEF_Base UMETA(DisplayName = "Base"),
	DEF_Tiffany UMETA(DisplayName = "Tiffany"),
	DEF_Jimmy UMETA(DisplayName = "Jimmy"),
	DEF_Garry UMETA(DisplayName = "Garry"),
};
