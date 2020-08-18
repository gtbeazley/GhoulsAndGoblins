// Fill out your copyright notice in the Description page of Project Settings.


#include "DefendingUnit.h"

#include "ConstructorHelpers.h"
#include "Tile.h"
#include "LifeBar_W.h"
#include "UserWidget.h"
#include "Components/WidgetComponent.h"

// Sets default values
ADefendingUnit::ADefendingUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_rootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	RootComponent = m_rootSceneComponent;

	m_curHealth = m_fullHealth;

	m_lifeBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("LifeBar"));

	static ConstructorHelpers::FClassFinder<UUserWidget>l_lifeBarClass(TEXT("Class'/Game/TopDownCPP/Blueprints/Widgets/LifeBar_WBP.LifeBar_WBP_C'"));
	if (l_lifeBarClass.Succeeded())
	{m_lifeBarComponent->SetWidgetClass(l_lifeBarClass.Class);
	}
	m_lifeBarComponent->SetWidgetSpace(EWidgetSpace::Screen);
	ULifeBar_W* l_lifeBar = Cast<ULifeBar_W>(m_lifeBarComponent->GetUserWidgetObject());
	if (l_lifeBar)
	{
		l_lifeBar->m_curHealth = m_curHealth;
		l_lifeBar->m_fullHealth = m_fullHealth;
	}

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
		ULifeBar_W* l_lifeBar = Cast<ULifeBar_W>(m_lifeBarComponent->GetUserWidgetObject());
		if (l_lifeBar)
		{
			l_lifeBar->m_curHealth = m_curHealth;
			l_lifeBar->m_fullHealth = m_fullHealth;
		}
	}

	if (m_curHealth <= 0.0f)
	{
		Despawn();
	}
}

void ADefendingUnit::Despawn()
{
	Destroy();
}

