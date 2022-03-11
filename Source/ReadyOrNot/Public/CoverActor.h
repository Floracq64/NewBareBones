// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoverActor.generated.h"

UCLASS()
class READYORNOT_API ACoverActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoverActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class UBillboardComponent* billboard;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
