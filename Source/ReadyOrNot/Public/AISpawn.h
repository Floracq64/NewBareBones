// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "AISpawn.generated.h"

USTRUCT(BlueprintType)
struct FSpawnData
{
	GENERATED_USTRUCT_BODY()

	FSpawnData()
	{
		bEnabled = true;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	uint8 bEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning", meta = (EditCondition = "bEnabled"))
	FDataTableRowHandle SpawnedAI;
};

UCLASS()
class READYORNOT_API AAISpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAISpawn();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setup")
	FSpawnData SpawnData;

	UPROPERTY(EditAnywhere, Category = "Components")
	UBillboardComponent* BillboardComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
	class USceneComponent* DefaultScene = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
	class UArrowComponent* SpawnDirection = nullptr;

	UPROPERTY()
	class AAICharacter* SpawnedCharacterDeffered = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
