// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacter.h"
#include <Animation/AnimBlueprint.h>
#include <Components/SkeletalMeshComponent.h>
#include <Materials/MaterialInstanceDynamic.h>
#include <Materials/Material.h>

#include <ConstructorHelpers.h>
#include <EnemyAIController.h>

// Sets default values
AAICharacter::AAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	const ConstructorHelpers::FObjectFinder<UAnimBlueprint> l_AnimClass(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Esqueleto.Esqueleto'"));
	const ConstructorHelpers::FObjectFinder<USkeletalMesh> l_SkeletalMesh(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/Esqueleto/Anim_Esqueleto.Anim_Esqueleto'"));
	const ConstructorHelpers::FObjectFinder<UMaterial> l_materialObject(TEXT("Material'/Game/TopDownCPP/ASSETS/MATERIAL/M_Esqueleto.M_Esqueleto'"));

	GetMesh()->SetMaterial(0, l_materialObject.Object);

	GetMesh()->SetSkeletalMesh(l_SkeletalMesh.Object);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -88.0f));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));
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

