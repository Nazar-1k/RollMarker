// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CleanerTarget.h"
#include "CPP_ClearTarget.h"

ACPP_CleanerTarget::ACPP_CleanerTarget()
{
}

void ACPP_CleanerTarget::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NarmalImpuls, const FHitResult& Hit)
{
	
	if (GetIsMark()) // If the this->Target is marked
	{
		// Set Mark for OtherTarget  
		SetMarkOnHit(OtherActor);
	}
	else // If the this->Target isn't marked
	{
		ACPP_BaseTarget* OtherTarget = Cast<ACPP_BaseTarget>(OtherActor);

		if (OtherTarget)
		{
			// Clear Mark for OtherTarget
			OtherTarget->SetMark(false);
		}
	}
}

void ACPP_CleanerTarget::SetMark(bool bMark)
{
	Super::SetMark(bMark);

	if (!bMark)
	{
		//Set Material for Cleaner Target
		SetMaterialByIndex(1);
	}
}

void ACPP_CleanerTarget::BeginPlay()
{
	Super::BeginPlay();

	//Set Material for Cleaner Target
	SetMaterialByIndex(1);

	//Get Static Mesh for Cleaner Target
	UStaticMeshComponent* Square = GetSquare();

	//Set Event On Hit
	Square->OnComponentHit.AddDynamic(this, &ACPP_CleanerTarget::OnHit);
}
