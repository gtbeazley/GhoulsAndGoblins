// Fill out your copyright notice in the Description page of Project Settings.


#include "DefendingUnit.h"

#include "ConstructorHelpers.h"
#include "Tile.h"
#include "LifeBar_W.h"
#include "UserWidget.h"


#include "Components/SkeletalMeshComponent.h"
#include"Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADefendingUnit::ADefendingUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true; 
	

	
	m_detectionSphere = CreateDefaultSubobject<USphereComponent>("Detection Sphere");
	SetRootComponent(m_detectionSphere);
	m_detectionSphere->InitSphereRadius(600);
	m_detectionSphere->SetCollisionObjectType(ECC_GameTraceChannel1);
	m_detectionSphere->SetCollisionProfileName("Detect");
	m_detectionSphere->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Ignore);
	//m_detectionSphere->bHiddenInGame = false;

	m_mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	m_mesh->SetGenerateOverlapEvents(true);
	GetMesh()->SetupAttachment(RootComponent);
	GetMesh()->SetRelativeRotation(FRotator(0, 0, 0));
	GetMesh()->SetRelativeLocation(FVector(0, -88, 0));
	

	m_curHealth = m_fullHealth;

	m_lifeBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("LifeBar"));
	m_lifeBarComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FClassFinder<UUserWidget>l_lifeBarClass(TEXT("Class'/Game/TopDownCPP/Blueprints/Widgets/LifeBar_WBP.LifeBar_WBP_C'"));
	if (l_lifeBarClass.Succeeded())
	{
		m_lifeBarComponent->SetWidgetClass(l_lifeBarClass.Class);
	}
	m_lifeBarComponent->SetWidgetSpace(EWidgetSpace::World);
	ULifeBar_W* l_lifeBar = Cast<ULifeBar_W>(m_lifeBarComponent->GetUserWidgetObject());
	if (l_lifeBar)
	{
		l_lifeBar->m_curHealth = m_curHealth;
		l_lifeBar->m_fullHealth = m_fullHealth;
	}

	m_lifeBarComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 200.0f));
}

// Called when the game starts or when spawned
void ADefendingUnit::BeginPlay()
{
	Super::BeginPlay();

	m_curHealth = m_fullHealth;
}

// Called every frame
void ADefendingUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (IsValid(m_lifeBarComponent))
	{
		m_lifeBarComponent->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(m_lifeBarComponent->GetComponentLocation(),	UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraLocation()));
		ULifeBar_W* l_lifeBar = Cast<ULifeBar_W>(m_lifeBarComponent->GetUserWidgetObject());
		if (l_lifeBar)
		{
			l_lifeBar->m_curHealth = m_curHealth;
			l_lifeBar->m_fullHealth = m_fullHealth;
			l_lifeBar->m_progressColour = m_lifeBarColour;
		}
	}

	if (m_curHealth <= 0.0f)
	{
		m_owningTile->DespawnUnit();
	}
}

void ADefendingUnit::Despawn()
{
	Destroy(true, true);
}

void ADefendingUnit::DealDamage()
{
}

USkeletalMeshComponent* ADefendingUnit::GetMesh()
{
	return m_mesh;
}

