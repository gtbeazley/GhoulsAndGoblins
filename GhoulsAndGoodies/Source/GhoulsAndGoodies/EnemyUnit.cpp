// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyUnit.h"

#include "ConstructorHelpers.h"
#include "EnemyAIController.h"
#include "EnemyState.h"
#include "DefendingUnit.h"
#include "GhoulsAndGoodiesGameMode.h"
#include "LifeBar_W.h"
#include "tile.h"
#include "UserWidget.h"

#include "Animation/AnimSequence.h"
#include "Components/CapsuleComponent.h"
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

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

	GetMesh()->SetSimulatePhysics(false);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetMesh()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Ignore);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -88.0f));
	GetMesh()->SetRelativeRotation(FRotator(0, -90.0f, 0));
	GetMesh()->SetCustomDepthStencilValue(4);
	GetMesh()->SetRenderCustomDepth(true);

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
	//m_detectionSphere->bHiddenInGame = false;

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
	if (m_targetList.Num() <= 0)
	{

		Cast<AEnemyAIController>(GetController())->m_state = ENEMYSTATE_Move;
	}
	else
		Cast<AEnemyAIController>(GetController())->m_state = ENEMYSTATE_Attack;


	UpdateLifeBar();
	if (m_curHealth <= 0)
	{
		PlayDespawnAnimation();
	}


	if (Cast<AEnemyAIController>(GetController()))
		if (Cast<AEnemyAIController>(GetController())->m_state == ENEMYSTATE_Attack)
		{
			if (m_targetList.Num() > 0)
			{
				m_facingTarget = m_targetList[0]->GetActorLocation();
				FRotator m_faceRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), m_facingTarget);
				GetMesh()->SetWorldRotation(FRotator(GetActorRotation().Pitch, m_faceRotation.Yaw - 90, GetActorRotation().Roll));
			}
		}

	m_targetToRemove.Empty();

	for (ADefendingUnit* l_target : m_targetList)
		if (Cast<ADefendingUnit>(l_target)->m_despawnQueued)
			m_targetToRemove.Add(Cast<ADefendingUnit>(l_target));

	for (ADefendingUnit* l_targetToRemove : m_targetToRemove)
	{
		m_targetList.Remove(Cast<ADefendingUnit>(l_targetToRemove));
		UE_LOG(LogTemp, Log, TEXT("Targets Left  : %d"), m_targetList.Num());
		FString l_name = l_targetToRemove->GetName();
		UE_LOG(LogTemp, Log, TEXT("Target Removed  : %s"), *l_name);

	}
}

void AEnemyUnit::Despawn()
{
	Cast<AGhoulsAndGoodiesGameMode>(UGameplayStatics::GetGameMode(this))->m_enemiesDestroyed++;
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
		if (Cast<USkeletalMeshComponent>(a_otherComp) && !Cast<ADefendingUnit>(a_otherActor)->m_despawnQueued)
		{
			m_targetList.AddUnique(Cast<ADefendingUnit>(a_otherActor));
			GetController()->StopMovement();
			Cast<AEnemyAIController>(GetController())->m_state = ENEMYSTATE_Attack; 

			//UE_LOG(LogTemp, Log, TEXT("Defending unit entered"));
		}
	}
}

void AEnemyUnit::OnDetectionSphereOverlapEnd(UPrimitiveComponent* a_overlappedComp, AActor* a_otherActor, UPrimitiveComponent* a_otherComp, int32 a_otherBodyIndex)
{
	//if (Cast<ADefendingUnit>(a_otherActor))
	//{ 
	//	UE_LOG(LogTemp, Log, TEXT("Defending unit exited by component"));
	//	m_targetList.Remove(Cast<ADefendingUnit>(a_otherActor)); 
	//	//FString l_componentName = a_otherComp->GetFName().ToString();
	//	//UE_LOG(LogTemp, Log, TEXT("Defending unit exited by component : %s"), l_componentName);
	//	FName MyName = a_otherComp->GetFName();
	//	UE_LOG(LogTemp, Warning, TEXT("My Name: %s"), *MyName.ToString());
	//}
}


void AEnemyUnit::DealDamage()
{
}

void AEnemyUnit::PlayDespawnAnimation()
{
	if (!m_despawnQueued)
	{
		GetMesh()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
		if (m_despawnAnim)
		{
			m_despawnQueued = true;
			GetMesh()->PlayAnimation(m_despawnAnim, false);
		}
		else
		{
			m_despawnQueued = true;
			Despawn();
		}
	}
}

