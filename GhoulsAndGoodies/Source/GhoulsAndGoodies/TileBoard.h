// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileBoard.generated.h"

class ATile;
class USceneComponent;

UCLASS()
class GHOULSANDGOODIES_API ATileBoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATileBoard();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Sets the board according to its values
	void SetUpBoard();
public:	

	//The amount of rows in the tile board
	UPROPERTY(EditAnywhere)
		int m_rows = 10;

	//The amount of coloumns in the tile board
	UPROPERTY(EditAnywhere)
		int m_columns = 10;

	//The size of the tiles to be spawned
	UPROPERTY(EditAnywhere)
		float m_tileSize = 100;

	//Default Scene Component
	UPROPERTY(EditAnywhere)
		USceneComponent* SceneComponent;


	//The list of the tiles
	TArray<ATile*> m_tileList;
};
