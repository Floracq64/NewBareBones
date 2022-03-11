// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AISpawn.h"
#include "WorldBuildingPlacementActor.generated.h"

UCLASS()
class READYORNOT_API AWorldBuildingPlacementActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldBuildingPlacementActor();

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
    USceneComponent* DefaultScene = nullptr;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Components")
    UBillboardComponent* BillboardComponent = nullptr;

    UPROPERTY(EditAnywhere, Category = "Setup")
    TSubclassOf<class UWorldBuildingActivity> Activity;

    UPROPERTY(EditAnywhere, Category = "Setup")
    bool bDropGunBeforeActivity = false;

    UPROPERTY(EditAnywhere, Category = "Setup")
    bool bReturnToOriginalSpot = false;

    UPROPERTY(EditAnywhere, Category = "Links")
    AAISpawn* LinkedToSpawner = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
