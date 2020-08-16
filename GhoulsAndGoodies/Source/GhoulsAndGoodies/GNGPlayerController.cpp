// Fill out your copyright notice in the Description page of Project Settings.


#include "GNGPlayerController.h"
#include <Kismet/GameplayStatics.h>
#include <Kismet/KismetSystemLibrary.h>
#include <Camera/CameraActor.h>
#include <Components/InputComponent.h>

#include <GameFramework/Pawn.h>

AGNGPlayerController::AGNGPlayerController()
{
	m_inputGameandUIMode = FInputModeGameAndUI();
}

void AGNGPlayerController::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> l_outActors;

	UGameplayStatics::GetAllActorsOfClass(this, ACameraActor::StaticClass(), l_outActors);

	for (AActor* l_camActor : l_outActors)
	{
		if (Cast<ACameraActor>(l_camActor))
		{
			m_camActors.Add(Cast<ACameraActor>(l_camActor));

		}

		SetViewTargetWithBlend(m_camActors[0]);
		int m_camTraversal = 0;

	}

	//SetInputMode(m_inputGameandUIMode);

}

void AGNGPlayerController::NextCamera()
{
	m_camTraversal++;
	
	if (m_camTraversal >= m_camActors.Num())
		m_camTraversal = 0;

	SetViewTargetWithBlend(m_camActors[m_camTraversal]);

	
}

void AGNGPlayerController::PrevCamera()
{
	m_camTraversal--;

	if (m_camTraversal <= 0)
		m_camTraversal = m_camActors.Num() - 1;

	SetViewTargetWithBlend(m_camActors[m_camTraversal]);


}
