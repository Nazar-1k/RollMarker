// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_ClearTarget.h"
#include "CPP_CleanerTarget.h"

ACPP_ClearTarget::ACPP_ClearTarget()
{
}

void ACPP_ClearTarget::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NarmalImpuls, const FHitResult& Hit)
{
	//Set Mark
	ACPP_CleanerTarget* OtherCleanerTarget =  Cast<ACPP_CleanerTarget>(OtherActor);
	
	if(OtherCleanerTarget)
	{
		return;
	}

	SetMarkOnHit(OtherActor);
	
}

void ACPP_ClearTarget::SetMark(bool bMark)
{
	Super::SetMark(bMark);

	if (!bMark)
	{
		//Set Material for Clear Target
		SetMaterialByIndex(0);
	}
}

void ACPP_ClearTarget::BeginPlay()
{
	Super::BeginPlay();

	//Set Material for Clear Target
	SetMaterialByIndex(0);

	//Get Static Mesh for ClearTarget
	UStaticMeshComponent* Square = GetSquare();

	//Set Event On Hit
	Square->OnComponentHit.AddDynamic(this, &ACPP_ClearTarget::OnHit);
}