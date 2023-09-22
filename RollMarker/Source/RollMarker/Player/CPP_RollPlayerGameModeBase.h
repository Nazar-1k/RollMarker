// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPP_RollPlayerGameModeBase.generated.h"

class UCPP_HUD;

UCLASS()
class ROLLMARKER_API ACPP_RollPlayerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
		
	/** Base Settings for Start Game */
	void StartGame();

	/** Check or win the game */
	void IsWin();

	/** Setup to win if true or setup to lose if false */
	void GameOver(bool bGame);

	/** Start Delay */
	UFUNCTION(BlueprintCallable)
	int32 GetStartDelay(){ return StartDelay; }

	/** Start Delay */
	UFUNCTION(BlueprintCallable)
	int32 GetInitiaStartDelay() { return InitiaStartDelay; }
	
	/** Get minutes from the level timer  */
	UFUNCTION(BlueprintCallable)
	int32 GetMinutes() { return Minutes; }

	/** Get seconds from the level timer  */
	UFUNCTION(BlueprintCallable)
	int32 GetSeconds() { return Seconds; }

	/** Get Count Target  */
	UFUNCTION(BlueprintCallable)
	int32 GetCountTarget() { return CountAllTarget; }

	/** Get Count Cleaner Target  */
	UFUNCTION(BlueprintCallable)
	int32 GetCleanerTarget() { return CountCleanerTarget; }

	/** Get Targets that are marked */
	UFUNCTION(BlueprintCallable)
	int32 GetMarkTargetCount();

	/** Get Cleaner Targets that are marked */
	UFUNCTION(BlueprintCallable)
	int32 GetMarkCleanerTargetCount();

private:
	// Start Timer Functions
	FTimerHandle StartTimer;
	void GameStartTimer();
	void CountDownStartTimer();

	// Level Timer Functions
	FTimerHandle LevelTimer;
	void StartLevelTimer();
	void CountDownLevelTimer();

	/** Delay before starting the game */
	UPROPERTY(EditAnywhere, Category = "Start Game")
	int32 StartDelay = 5;
	int32 InitiaStartDelay;

	/** Minutes for Level Timer */
	UPROPERTY(EditAnywhere, Category = "Level Timer")
	int32 Minutes = 1;
	/** Seconds for Level Timer */
	UPROPERTY(EditAnywhere, Category = "Level Timer")
	int32 Seconds = 30;

	/** Number of All Targets */ 
	int32 CountAllTarget = 0;
	/** Number of marked targets */
	int32 CountMarkTarget = 0;

	/** Number of All Cleaner Targets */
	int32 CountCleanerTarget = 0;
	/** Number of marked Cleaner Targets */
	int32 CountMarkCleanerTarget = 0;

	// Reference to the PlayerPawn and PlayerController
	class ACPP_RollPlayer* Player;
	class APlayerController* PlayerController;

	/** The class of the HUD widget to create */ 
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UCPP_HUD> ClassHUD;

	/** The instance of the created HUD widget. */
	UPROPERTY()
	UCPP_HUD* HUDInstance;

	/** Function to create the HUD widget */
	void CreateHUD();

	// If We Lose Game we can`t Win
	bool bGameOver = false;
};
