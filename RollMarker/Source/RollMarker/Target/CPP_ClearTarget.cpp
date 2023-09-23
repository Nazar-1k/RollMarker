// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_ClearTarget.h"
#include "CPP_CleanerTarget.h"

#include "Kismet/GameplayStatics.h"
#include "../Player/CPP_RollPlayerGameModeBase.h"

ACPP_ClearTarget::ACPP_ClearTarget()
{
}

void ACPP_ClearTarget::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NarmalImpuls, const FHitResult& Hit)
{
	// Set Mark
	ACPP_CleanerTarget* OtherCleanerTarget =  Cast<ACPP_CleanerTarget>(OtherActor);
	
	if(OtherCleanerTarget)
	{
		return;
	}

	// If Target Is Marked
	if (GetIsMark())
	{
		ACPP_BaseTarget* OtherTarget = Cast<ACPP_BaseTarget>(OtherActor);

		if (OtherTarget && OtherTarget != this && !OtherTarget->GetIsMark())
		{
			OtherTarget->SetMark(true);

			// Check if Win
			ACPP_RollPlayerGameModeBase* GameMode = Cast<ACPP_RollPlayerGameModeBase>(UGameplayStatics::GetGameMode(this));
			GameMode->IsWin();

			// Play Hit Sound
		/*	if (HitSound)
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), HitSound, GetActorLocation());
			}*/

			// Reproduce particles at the point of collision
			if (HitParticles)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticles, Hit.Location, FRotator::ZeroRotator);
			}
		}
	}
	
}

void ACPP_ClearTarget::SetMark(bool bMark)
{
	Super::SetMark(bMark);

	if (!bMark)
	{
		// Set Material for Clear Target
		SetMaterialByIndex(0);
	}
}

void ACPP_ClearTarget::BeginPlay()
{
	Super::BeginPlay();

	// Set Material for Clear Target
	SetMaterialByIndex(0);

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
			Square->OnComponentHit.AddDynamic(this, &ACPP_ClearTarget::OnHit);

		}, TimerDelay, false);
}