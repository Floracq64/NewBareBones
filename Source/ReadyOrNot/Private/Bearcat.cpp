// Fill out your copyright notice in the Description page of Project Settings.


#include "Bearcat.h"
#include "Components/BillboardComponent.h"

// Sets default values
ABearcat::ABearcat()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	RootComponent = billboard;

}

// Called when the game starts or when spawned
void ABearcat::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABearcat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

