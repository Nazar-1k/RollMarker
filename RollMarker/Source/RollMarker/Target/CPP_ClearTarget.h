// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_BaseTarget.h"
#include "CPP_ClearTarget.generated.h"

/**
 * 
 */
UCLASS()
class ROLLMARKER_API ACPP_ClearTarget : public ACPP_BaseTarget
{
	GENERATED_BODY()

public:

	// Sets default values for this Actor properties
	ACPP_ClearTarget();

	/** Set mark on Hit */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NarmalImpuls, const FHitResult& Hit);

	/** Overloaded function that sets the grade and material for ClearTarget */
	virtual void SetMark(bool bMark) override;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
