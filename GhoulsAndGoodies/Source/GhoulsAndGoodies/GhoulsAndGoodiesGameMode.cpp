// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GhoulsAndGoodiesGameMode.h"
#include "GhoulsAndGoodiesPlayerController.h"
#include "GhoulsAndGoodiesCharacter.h"
#include "GNGPawn.h"
#include "GNGPlayerController.h"
#include "TileBoard.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

AGhoulsAndGoodiesGameMode::AGhoulsAndGoodiesGameMode()
{
	PlayerControllerClass = AGNGPlayerController::StaticClass();

	DefaultPawnClass = AGNGPawn::StaticClass();

	m_mainTileBoard = Cast<ATileBoard>(UGameplayStatics::GetActorOfClass(this, ATileBoard::StaticClass()));
}

void AGhoulsAndGoodiesGameMode::NextWave()
{
	m_wave++;
}
