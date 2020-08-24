// Fill out your copyright notice in the Description page of Project Settings.


#include "Tiffany.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

ATiffany::ATiffany()
{
	m_mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh");

	m_detectionSphere = CreateDefaultSubobject<USphereComponent>("DetectionSphere");
}

ATiffany::~ATiffany()
{
	
}

