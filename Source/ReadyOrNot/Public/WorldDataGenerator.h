// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "WorldDataGenerator.generated.h"

/**
 * 
 */
UCLASS()
class READYORNOT_API AWorldDataGenerator : public AInfo
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = Data)
	void RegenerateThreatAwarenessPoints();

protected:



private:



};
