// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/AudioVolume.h"
#include "ReadyOrNotAudioVolume.generated.h"

/**
 * 
 */
UCLASS()
class READYORNOT_API AReadyOrNotAudioVolume : public AVolume
{
    GENERATED_BODY()

        // Sets default values for this actor's properties
        AReadyOrNotAudioVolume();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

    UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Billboard, meta = (AllowPrivateAccess = "true"))
        UBillboardComponent* BillboardComponent;
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<UFMODEvent*> ReverbEvents;

    UPROPERTY()
        TArray<FFMODEventInstance> EventInstances;

    UPROPERTY()
        bool bReverbActivated = false;

    UPROPERTY()
        TArray<UFMODAudioComponent*> AttachedAudioComponents;

    bool IsAnotherVolumeActivatedAndPlayingEvent(UFMODEvent* Event, FFMODEventInstance& EventInstance);
    bool IsAnotherVolumeActivatedAndPlayingEventInst(FFMODEventInstance EventInst);

public:
    bool IsReverbVolumeActivated();
    TArray<UFMODEvent*> GetReverbEvents();
    TArray<FFMODEventInstance> GetReverbEventInstances();

};