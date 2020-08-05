// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GhoulsAndGoodiesGameMode.h"
#include "GhoulsAndGoodiesPlayerController.h"
#include "GhoulsAndGoodiesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGhoulsAndGoodiesGameMode::AGhoulsAndGoodiesGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGhoulsAndGoodiesPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}