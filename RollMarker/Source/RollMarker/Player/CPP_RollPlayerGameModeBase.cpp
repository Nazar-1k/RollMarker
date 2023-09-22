// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_RollPlayerGameModeBase.h"

#include "Kismet/GameplayStatics.h"

#include "CPP_RollPlayer.h"
#include "../Target/CPP_CleanerTarget.h" 
#include "../Target/CPP_CleanerTarget.h"

#include "../UMG/CPP_HUD.h"

void ACPP_RollPlayerGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	
	// Set Player and PlayerControler
	Player = Cast<ACPP_RollPlayer>(UGameplayStatics::GetPlayerPawn(this, 0));
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	// Disabling input for the player character through the player controller.
	Player->DisableInput(PlayerController);
	
	// Set Initial Start Delay
	InitiaStartDelay = StartDelay;

	// Set Start Timer
	GameStartTimer();

	// Create HUD
	CreateHUD();

}

void ACPP_RollPlayerGameModeBase::IsWin()
{
	if (!bGameOver)
	{
		// Update the CountMarkTarget variable
		GetMarkTargetCount();

		// If the total number of targets is equal to number the marked targets
		if (CountAllTarget == CountMarkTarget)
		{
			//Win Game
			GameOver(true);
		}
	}
	
}

void ACPP_RollPlayerGameModeBase::StartGame()
{
	// Player Can Move
	Player->EnableInput(PlayerController);

	// Count All Targets 
	TArray<AActor*> Targets;
	UGameplayStatics::GetAllActorsOfClass(this, ACPP_BaseTarget::StaticClass(), Targets);
	CountAllTarget = Targets.Num();

	// Count All Clean Targets 
	TArray<AActor*> CleanerTargets;
	UGameplayStatics::GetAllActorsOfClass(this, ACPP_CleanerTarget::StaticClass(), CleanerTargets);
	CountCleanerTarget = CleanerTargets.Num();

	// Start Level Timer
	StartLevelTimer();

}

void ACPP_RollPlayerGameModeBase::GameOver(bool bGame)
{
	bGameOver = true;

	// Set HUD for win or lose condition
	HUDInstance->Gameover(bGame);

	// Disabling input for the player character through the player controller.
	Player->DisableInput(PlayerController);
	
	// Stop Level Timer
	GetWorld()->GetTimerManager().ClearTimer(LevelTimer);

	// Timer Settings
	FTimerHandle TimerHandle;
	float TimerDelay = 5.f;

	// Restart Game
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
		{
			UGameplayStatics::OpenLevel(GetWorld(), "MainLevel");
		}
	, TimerDelay, false);

}

int32 ACPP_RollPlayerGameModeBase::GetMarkTargetCount()
{
	// Count All Targets
	TArray<AActor*> Targets;
	UGameplayStatics::GetAllActorsOfClass(this, ACPP_BaseTarget::StaticClass(), Targets);

	// Count All marked Targets
	int TargetCount = 0;
	for (AActor* Actor : Targets)
	{
		ACPP_BaseTarget* Target =  Cast<ACPP_BaseTarget>(Actor);
		if (Target && Target->GetIsMark())
		{
			TargetCount++;
		}
	}

	// Assign the number of marked targets
	CountMarkTarget = TargetCount;

	return TargetCount;
}
int32 ACPP_RollPlayerGameModeBase::GetMarkCleanerTargetCount()
{
	// Count All Cleaner Targets
	TArray<AActor*> CleanerTargets;
	UGameplayStatics::GetAllActorsOfClass(this, ACPP_CleanerTarget::StaticClass(), CleanerTargets);

	int TargetCount = 0;
	for (AActor* Actor : CleanerTargets)
	{
		ACPP_CleanerTarget* Target = Cast<ACPP_CleanerTarget>(Actor);

		if (Target && !Target->GetIsMark())
		{
			TargetCount++;
		}
	}

	// Assign the number of marked  Cleaner targets
	CountMarkCleanerTarget = TargetCount;

	return TargetCount;
}

void ACPP_RollPlayerGameModeBase::GameStartTimer()
{
	// Set Timer for Start Game
	GetWorld()->GetTimerManager().SetTimer(StartTimer, this, &ACPP_RollPlayerGameModeBase::CountDownStartTimer, 1, true, 0.0);
}
void ACPP_RollPlayerGameModeBase::CountDownStartTimer()
{
	if (StartDelay != 0)
	{
		StartDelay--;
	}
	else if (StartDelay == 0)
	{
		// Enables the player input
		Player->EnableInput(PlayerController);
	}
}

void ACPP_RollPlayerGameModeBase::StartLevelTimer()
{
	// Set Timer for level timer
	GetWorld()->GetTimerManager().SetTimer(LevelTimer, this, &ACPP_RollPlayerGameModeBase::CountDownLevelTimer, 1, true, 0.0);
}
void ACPP_RollPlayerGameModeBase::CountDownLevelTimer()
{
	if (Seconds != 0)
	{
		Seconds--;

	}
	else if(Minutes >= 1)
	{
		Minutes--;
		Seconds = 59;
	}
	else if (Minutes == 0 && Seconds == 0)
	{
		// Game Over
		GameOver(false);
	}
	
}


void ACPP_RollPlayerGameModeBase::CreateHUD()
{
	if (ClassHUD)
	{
		// Create a new instance of UCPP_HUD with 'this' as the owner
		HUDInstance = NewObject<UCPP_HUD>(this, ClassHUD);

		// Check if the instance was created successfully
		if (HUDInstance)
		{
			// Add the HUD instance to the screen (Viewport)
			HUDInstance->AddToViewport();
		}
	}
}
