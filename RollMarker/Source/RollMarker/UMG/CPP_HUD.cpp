// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_HUD.h"

#include "Components/VerticalBox.h"   
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"

#include "Kismet/GameplayStatics.h"

#include "../Player/CPP_RollPlayerGameModeBase.h"



void UCPP_HUD::NativeConstruct()
{
	// Take Game Mode Instance
	GameMode = Cast<ACPP_RollPlayerGameModeBase>(UGameplayStatics::GetGameMode(this));

	// Start Game
	StartGame();
}

void UCPP_HUD::StartGame()
{	
	// Hide all elements except the timer for the start
	Timer->SetVisibility(ESlateVisibility::Hidden);
	GameOver->SetVisibility(ESlateVisibility::Hidden);
	CounterTarget->SetVisibility(ESlateVisibility::Hidden);
	CounterCleaner->SetVisibility(ESlateVisibility::Hidden);
	
	// Timer Settings
	FTimerHandle TimerHandle;
	float TimerDelay = GameMode->GetStartDelay();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
	{
		// Hide Start Timer
		Start->SetVisibility(ESlateVisibility::Hidden);

		// Show All HUD
		Timer->SetVisibility(ESlateVisibility::Visible);
		CounterTarget->SetVisibility(ESlateVisibility::Visible);
		CounterCleaner->SetVisibility(ESlateVisibility::Visible);

		// Base Settings for Start Game
		GameMode->StartGame();

	}, TimerDelay, false);
}

void UCPP_HUD::Gameover(bool bGameOver)
{	
	
	if (bGameOver)
	{
		// If the game is over, set the text in the `WinLoseCondition` TextBlock to "You Win :)"
		WinLoseCondition->SetText(FText::FromString("You Win :)"));
	}
	else
	{
		// If the game is not over, set the text in the `WinLoseCondition` TextBlock to "Game Over :("
		WinLoseCondition->SetText(FText::FromString("Game Over :("));
	}

	// Show the Game Over element
	GameOver->SetVisibility(ESlateVisibility::Visible);

	// Hide other HUD elements (Timer, CounterTarget, CounterCleaner, Start)
	Timer->SetVisibility(ESlateVisibility::Hidden);
	CounterTarget->SetVisibility(ESlateVisibility::Hidden);
	CounterCleaner->SetVisibility(ESlateVisibility::Hidden);
	Start->SetVisibility(ESlateVisibility::Hidden);
}
