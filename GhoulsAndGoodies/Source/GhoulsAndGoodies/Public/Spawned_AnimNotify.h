// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Spawned_AnimNotify.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API USpawned_AnimNotify : public UAnimNotify
{
	GENERATED_BODY() 


		virtual void Notify(USkeletalMeshComponent* a_meshComp, UAnimSequenceBase* a_animsequence) override;
};
