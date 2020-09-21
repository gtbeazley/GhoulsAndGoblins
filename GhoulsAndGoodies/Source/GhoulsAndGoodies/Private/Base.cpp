// Fill out your copyright notice in the Description page of Project Settings.


#include "Base.h"
#include "ConstructorHelpers.h"

#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"

ABase::ABase()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> l_baseMeshObject (TEXT("StaticMesh'/Game/TopDownCPP/ASSETS/SM_BASE.SM_BASE'"));

	m_baseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));

	SetRootComponent(m_baseMesh);
	m_baseMesh->SetRelativeLocation(FVector(0, 0, 260));
	m_baseMesh->SetStaticMesh(l_baseMeshObject.Object);
	m_baseMesh->SetRelativeScale3D(FVector(.5, .5, .5));

	m_lifeBarComponent->SetupAttachment(m_baseMesh);
}

ABase::~ABase()
{

}