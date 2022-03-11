// Fill out your copyright notice in the Description page of Project Settings.


#include "AISpawn.h"
#include "Components/BillboardComponent.h"

// Sets default values
AAISpawn::AAISpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
	RootComponent = DefaultScene;

	BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
	BillboardComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AAISpawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAISpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

