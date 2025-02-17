// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileDefenceType.h"
#include "Tile.generated.h"

class AGhoulsAndGoodiesGameMode;
class UPrimitiveComponent;
class ADefendingUnit;
class ATile;
class UMaterial;

UCLASS()
class GHOULSANDGOODIES_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//Static mesh of the tile
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* m_mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_highlightedMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UMaterial* m_unhighlightedMaterial;

public:	
	//Adds a_neighbour to the neighbour list
	void AddNeighbour(ATile* a_neighbour);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Spawns Defending Unit
	void SetupDefUnit();

	//Sets the material of the tile according to the defence unit type
	UFUNCTION(BlueprintCallable)
	void SetupTileMaterial();

	//Type to determine which unit to spawn and whether to add to the path
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ETileDefenceType> m_defType = ETileDefenceType::DEF_None;


	//Type to determine which unit to spawn and whether to add to the path
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<ETileDefenceType> m_lastDefType;

	UPROPERTY(EditAnywhere)
	//List of neighbours for the ai traverse through
	TArray<ATile*> m_neighbours;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AGhoulsAndGoodiesGameMode* m_gNGGameMode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool m_plannedToDeploy = false;

	UFUNCTION(BlueprintCallable)
	//Sets the defence unit type according to whats on the tile
	void SetDefenceUnitType(TEnumAsByte<ETileDefenceType> a_defType);
	
	UFUNCTION()
		void MeshOnBeginHover(UPrimitiveComponent* a_primCom);

	UFUNCTION()
		void MeshOnEndHover(UPrimitiveComponent* a_primCom);

	UFUNCTION()
		void MeshOnClick(UPrimitiveComponent* a_primCom, FKey a_inKey);

	UFUNCTION(BlueprintCallable)
	UStaticMeshComponent* GetStaticMeshComponent();
};
