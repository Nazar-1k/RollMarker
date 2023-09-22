// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_TargetSpawner.h"


#include "../CPP_CleanerTarget.h"
#include "../CPP_ClearTarget.h"

#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACPP_TargetSpawner::ACPP_TargetSpawner()
{
    // Create a component of the rectangular spawning zone
    SpawnZone = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnZone"));
    RootComponent = SpawnZone;

    // Set Size Spawning zone
    SpawnZone->SetBoxExtent(FVector(998.0f, 998.0f, 998.0f));
}

// Called when the game starts or when spawned
void ACPP_TargetSpawner::BeginPlay()
{
    Super::BeginPlay();

    SpawnActor();
}

void ACPP_TargetSpawner::SpawnActor()
{
    if (ActorToSpawnCleanerTarget)
    {
        for (int32 i = 0; i < CountCleanerTarget; i++)
        {
            // Generate a random position within the spawn zone
            FVector SpawnLocation = UKismetMathLibrary::RandomPointInBoundingBox(GetActorLocation(), SpawnZone->GetScaledBoxExtent());

            // Spawn the CleanerTarget in a random position
            ACPP_CleanerTarget* SpawnedActor = GetWorld()->SpawnActor<ACPP_CleanerTarget>(ActorToSpawnCleanerTarget, SpawnLocation, FRotator::ZeroRotator);

        }
    }

    if (ActorToSpawnClearTarget)
    {
        for (int32 i = 0; i < CountClearTarget; i++)
        {
            // Generate a random position within the spawn zone
            FVector SpawnLocation = UKismetMathLibrary::RandomPointInBoundingBox(GetActorLocation(), SpawnZone->GetScaledBoxExtent());

            // Spawn the ClearTarget in a random position
            ACPP_ClearTarget* SpawnedActor = GetWorld()->SpawnActor<ACPP_ClearTarget>(ActorToSpawnClearTarget, SpawnLocation, FRotator::ZeroRotator);

        }
    }
}

