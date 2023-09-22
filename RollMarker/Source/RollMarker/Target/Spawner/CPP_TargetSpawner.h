// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_TargetSpawner.generated.h"

UCLASS()
class ROLLMARKER_API ACPP_TargetSpawner : public AActor
{
	GENERATED_BODY()
	
public:

	// Sets default values for this actor's properties
	ACPP_TargetSpawner();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Spawn all Target in random position on spawn zone  */
	void SpawnActor();

private:

	/** Spawn Zone */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Components | Camera", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* SpawnZone;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class ACPP_CleanerTarget> ActorToSpawnCleanerTarget;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class ACPP_ClearTarget> ActorToSpawnClearTarget;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	int32 CountCleanerTarget = 5;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	int32 CountClearTarget = 10;
};
