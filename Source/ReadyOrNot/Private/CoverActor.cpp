// Fill out your copyright notice in the Description page of Project Settings.


#include "CoverActor.h"
#include "Components/BillboardComponent.h"

// Sets default values
ACoverActor::ACoverActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	RootComponent = billboard;

}

// Called when the game starts or when spawned
void ACoverActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACoverActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

