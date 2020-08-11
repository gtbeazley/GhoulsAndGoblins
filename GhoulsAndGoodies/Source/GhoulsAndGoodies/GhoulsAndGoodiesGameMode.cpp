// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GhoulsAndGoodiesGameMode.h"
#include "GhoulsAndGoodiesPlayerController.h"
#include "GhoulsAndGoodiesCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GNGPawn.h"
#include "GNGPlayerController.h"

AGhoulsAndGoodiesGameMode::AGhoulsAndGoodiesGameMode()
{
	PlayerControllerClass = AGNGPlayerController::StaticClass();

	DefaultPawnClass = AGNGPawn::StaticClass();


}