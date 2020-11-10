// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Despawn_AnimNotify.generated.h"

/**
 * 
 */
UCLASS()
class GHOULSANDGOODIES_API UDespawn_AnimNotify : public UAnimNotify
{
	GENERATED_BODY()
public:	
	virtual void Notify(USkeletalMeshComponent* a_meshComp, UAnimSequenceBase* a_animation) override;

};