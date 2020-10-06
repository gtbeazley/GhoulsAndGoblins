// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyUnit.h"

#include "ConstructorHelpers.h"
#include "EnemyAIController.h"
#include "EnemyState.h"
#include "DefendingUnit.h"
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

	GetMesh()->SetSimulatePhysics(false);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetMesh()->SetCollisionObjectType(ECC_WorldDynamic);
	GetMesh()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -88.0f));
	GetMesh()->SetRelativeRotation(FRotator(0, -90.0f, 0));

	m_lifeBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Life Bar"));
	m_lifeBarComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FClassFinder<UUserWidget> l_lifeBarClass(TEXT("Class'/Game/TopDownCPP/Blueprints/Widgets/LifeBar_WBP.LifeBar_WBP_C'"));
	if (l_lifeBarClass.Succeeded())
		m_lifeBarComponent->SetWidgetClass(l_lifeBarClass.Class);
	m_lifeBarComponent->SetWidgetSpace(EWidgetSpace::World);
	m_lifeBarComponent->SetRelativeLocation(FVector(0, 0, 200.0f));

	m_lifeBarWidgetObject = Cast <ULifeBar_W>(m_lifeBarComponent->GetUserWidgetObject());


	m_detectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Detection Sphere"));
	m_detectionSphere->SetupAttachment(GetMesh());
	m_detectionSphere->InitSphereRadius(200);
	m_detectionSphere->OnComponentBeginOverlap.AddDynamic(this, &AEnemyUnit::OnDetectionSphereOverlapBegin);
	m_detectionSphere->OnComponentEndOverlap.AddDynamic(this, &AEnemyUnit::OnDetectionSphereOverlapEnd);
	m_detectionSphere->SetCollisionObjectType(ECC_GameTraceChannel1);
	m_detectionSphere->SetCollisionProfileName("Detect");
	m_detectionSphere->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Ignore);
	m_detectionSphere->bHiddenInGame = false;

	m_curHealth = m_fullHealth;
	
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = AEnemyAIController::StaticClass();
	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = true;
	bUseControllerRotationRoll = true;
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
	if(m_targetList.Num() <= 0)
		Cast<AEnemyAIController>(GetController())->m_state = ENEMYSTATE_Move;
	else 	  
		Cast<AEnemyAIController>(GetController())->m_state = ENEMYSTATE_Attack;


	UpdateLifeBar();
	if (m_curHealth <= 0)
	{
		Despawn();
	}
}

void AEnemyUnit::Despawn()
{
	Destroy(true, true);
}

void AEnemyUnit::UpdateLifeBar()
{		
	m_lifeBarComponent->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(m_lifeBarComponent->GetComponentLocation(), UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraLocation()));

	ULifeBar_W* l_lifeBar = Cast<ULifeBar_W>(m_lifeBarComponent->GetUserWidgetObject());
	if (l_lifeBar)
	{
		l_lifeBar->m_curHealth = m_curHealth;
		l_lifeBar->m_fullHealth = m_fullHealth;
		l_lifeBar->m_progressColour = m_lifeBarColour;
	}
}

void AEnemyUnit::OnDetectionSphereOverlapBegin(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex, bool a_fromSweep, const FHitResult& a_sweepResult)
{
	if (Cast<ADefendingUnit>(a_otherActor))
	{
		m_targetList.AddUnique(Cast<ADefendingUnit>(a_otherActor));
		GetController()->StopMovement();
	}
}

void AEnemyUnit::OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex)
{
	if (Cast<ADefendingUnit>(a_otherActor))
	{
		m_targetList.RemoveSingle(Cast<ADefendingUnit>(a_otherActor));
	}
}

void AEnemyUnit::Attack()
{
}

