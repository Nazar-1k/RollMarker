// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CPP_HUD.generated.h"

UCLASS()
class ROLLMARKER_API UCPP_HUD : public UUserWidget
{
	GENERATED_BODY()

public:
	
	// Function that gets called when the widget is constructed
	void NativeConstruct() override;

	/** Get Game Mode */
	UFUNCTION(BlueprintCallable)
	class ACPP_RollPlayerGameModeBase* GetGameMode() { return GameMode; }

	/** Base Settings for Widget when Start Game */
	void StartGame();

	/** Base Settings for Widget when Game Lose/Win */
	void Gameover(bool bGameOver);

private:

	/** Horizontal Box for Timer */
	UPROPERTY(EditAnywhere, Category = "Widgets", meta = (BindWidget))
	class UHorizontalBox* Timer;

	/** Horizontal Box for countdown to the Start */
	UPROPERTY(EditAnywhere, Category = "Widgets", meta = (BindWidget))
	class UHorizontalBox* Start;

	/** Horizontal Box for Win/Lose condition */
	UPROPERTY(EditAnywhere, Category = "Widgets", meta = (BindWidget))
	class UHorizontalBox* GameOver;

	/** A vertical box for counting all Targets  */
	UPROPERTY(EditAnywhere, Category = "Widgets", meta = (BindWidget))
	class UVerticalBox* CounterTarget;

	/** A vertical box for counting Cleaner Targets  */
	UPROPERTY(EditAnywhere, Category = "Widgets", meta = (BindWidget))
	class UVerticalBox* CounterCleaner;

	/** TextBlock for displaying win/lose conditions. */
	UPROPERTY(EditAnywhere, Category = "Widgets", meta = (BindWidget))
	class UTextBlock* WinLoseCondition;

	/** Reference to the game mode. */
	class ACPP_RollPlayerGameModeBase* GameMode;
	
};
