// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CleanerTarget.h"
#include "CPP_ClearTarget.h"

#include "Kismet/GameplayStatics.h"
#include "../Player/CPP_RollPlayerGameModeBase.h"

ACPP_CleanerTarget::ACPP_CleanerTarget()
{
}

void ACPP_CleanerTarget::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NarmalImpuls, const FHitResult& Hit)
{
	ACPP_BaseTarget* OtherTarget = Cast<ACPP_BaseTarget>(OtherActor);

	if (OtherTarget)
	{
		if (!GetIsMark() && OtherTarget->GetIsMark()) // If the this->Target is marked
		{
			// Clear Mark for OtherTarget
			OtherTarget->SetMark(false);
			
		}
		else if(GetIsMark()) // If the this->Target isn't marked
		{
			ACPP_ClearTarget* OtherClearTarget = Cast<ACPP_ClearTarget>(OtherTarget);

			// Cleaner can mark onle clear Target
			if (OtherClearTarget && !OtherClearTarget->GetIsMark())
			{
				// Set Mark for OtherTarget 
				OtherClearTarget->SetMark(true);
			}
		}

		// Check if Win
		ACPP_RollPlayerGameModeBase* GameMode = Cast<ACPP_RollPlayerGameModeBase>(UGameplayStatics::GetGameMode(this));
		GameMode->IsWin();

	}
}

void ACPP_CleanerTarget::SetMark(bool bMark)
{
	Super::SetMark(bMark);

	if (!bMark)
	{
		// Set Material for Cleaner Target
		SetMaterialByIndex(1);
	}
}

void ACPP_CleanerTarget::BeginPlay()
{
	Super::BeginPlay();

	// Set Material for Cleaner Target
	SetMaterialByIndex(1);

	// Get Game Mode
	ACPP_RollPlayerGameModeBase* GameMode = Cast<ACPP_RollPlayerGameModeBase>(UGameplayStatics::GetGameMode(this));

	// Timer Settings
	FTimerHandle TimerHandle;
	float TimerDelay = GameMode->GetStartDelay();
	
	// Set Event On Hit after timer
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
	{
		// Get Static Mesh for Cleaner Target
		UStaticMeshComponent* Square = GetSquare();

		// Set Event On Hit
		Square->OnComponentHit.AddDynamic(this, &ACPP_CleanerTarget::OnHit);

	}, TimerDelay, false);

	
}
