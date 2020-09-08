// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyUnit.h"

#include "ConstructorHelpers.h"
#include "LifeBar_W.h"
#include "tile.h"
#include "UserWidget.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include <Components/WidgetComponent.h> 
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AEnemyUnit::AEnemyUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	SetRootComponent(m_mesh);

	m_lifeBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Life Bar"));
	m_lifeBarComponent->SetupAttachment(m_mesh);

	static ConstructorHelpers::FClassFinder<UUserWidget> l_lifeBarClass(TEXT("Class'/Game/TopDownCPP/Blueprints/Widgets/LifeBar_WBP.LifeBar_WBP_C'"));
	if (l_lifeBarClass.Succeeded())
		m_lifeBarComponent->SetWidgetClass(l_lifeBarClass.Class);
	m_lifeBarComponent->SetWidgetSpace(EWidgetSpace::World);

	m_lifeBarWidgetObject = Cast <ULifeBar_W>(m_lifeBarComponent->GetUserWidgetObject());

	m_lifeBarComponent->SetRelativeLocation(FVector(0, 0, 200.0f));

	m_detectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Detection Sphere"));
	m_detectionSphere->SetupAttachment(m_mesh);

	m_curHealth = m_fullHealth;

}

// Called when the game starts or when spawned
void AEnemyUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateLifeBar();
}

void AEnemyUnit::Despawn()
{
	SetLifeSpan(.01);
}

void AEnemyUnit::UpdateLifeBar()
{
	if (m_lifeBarWidgetObject)
	{
		m_lifeBarComponent->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(m_lifeBarComponent->GetComponentLocation(), UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraLocation()));

		m_lifeBarWidgetObject->m_curHealth = m_curHealth;
		m_lifeBarWidgetObject->m_fullHealth = m_fullHealth;

	}
}

