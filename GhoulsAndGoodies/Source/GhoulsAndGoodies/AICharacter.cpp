// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacter.h"
#include <Components/SkeletalMeshComponent.h>
#include <Animation/AnimBlueprint.h>
#include <ConstructorHelpers.h>
#include <EnemyAIController.h>

// Sets default values
AAICharacter::AAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	const ConstructorHelpers::FObjectFinder<UAnimBlueprint> l_AnimClass(TEXT("AnimBlueprint'/Game/Mannequin/Animations/ThirdPerson_AnimBP.ThirdPerson_AnimBP'"));
	const ConstructorHelpers::FObjectFinder<USkeletalMesh> l_SkeletalMesh(TEXT("'/Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin'"));

	GetMesh()->SetSkeletalMesh(l_SkeletalMesh.Object);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -88.0f));
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimClass(l_AnimClass.Object->GeneratedClass);
	AIControllerClass = AEnemyAIController::StaticClass();
}

// Called when the game starts or when spawned
void AAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

