// Fill out your copyright notice in the Description page of Project Settings.


#include "Tiffany.h"

#include "ConstructorHelpers.h"
#include "EnemyUnit.h"


#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"

ATiffany::ATiffany()
{  
	m_attackInterval = .02f;
	m_attackDamage = 10.0f;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> l_meshAsset(TEXT("SkeletalMesh'/Game/TopDownCPP/ASSETS/ANIMATION/TIFFANY/TIFFANY_IDLE.TIFFANY_IDLE'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_spawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/TIFFANY/Anim_Tiffany_Spawn_Anim.Anim_Tiffany_Spawn_Anim'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> l_despawnAnim(TEXT("AnimSequence'/Game/TopDownCPP/ASSETS/ANIMATION/TIFFANY/Anim_Tiffany_Death_Anim.Anim_Tiffany_Death_Anim'"));
	static ConstructorHelpers::FObjectFinder<UClass> l_animBlueprint(TEXT("AnimBlueprint'/Game/TopDownCPP/Blueprints/Tiffany_AnimBP.Tiffany_AnimBP_C'"));

	m_despawnAnim = l_despawnAnim.Object;

	m_spawnAnim = l_spawnAnim.Object;

	GetMesh()->SetSkeletalMesh(l_meshAsset.Object);
	GetMesh()->SetAnimClass(l_animBlueprint.Object);

	m_detectionSphere->InitSphereRadius(300);

}

ATiffany::~ATiffany()
{
	
}

void ATiffany::Tick(float a_deltaTime)
{
	Super::Tick(a_deltaTime);


}


void ATiffany::DealDamage() {
	if (m_detectedEnemies.Num() > 0)
		if (m_detectedEnemies[0])
			m_detectedEnemies[0]->m_curHealth -= m_attackDamage;

}
