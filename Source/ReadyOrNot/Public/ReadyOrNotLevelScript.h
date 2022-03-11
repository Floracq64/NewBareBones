// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "ReadyOrNotLevelScript.generated.h"

class UDataAsset;

/**
 * 
 */
UCLASS()
class READYORNOT_API AReadyOrNotLevelScript : public ALevelScriptActor
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	UDataAsset* ItemData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	UDataAsset* MusicData;

protected:

public:



};
