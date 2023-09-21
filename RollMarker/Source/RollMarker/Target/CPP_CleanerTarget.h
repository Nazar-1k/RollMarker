// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_BaseTarget.h"
#include "CPP_CleanerTarget.generated.h"

/**
 * 
 */
UCLASS()
class ROLLMARKER_API ACPP_CleanerTarget : public ACPP_BaseTarget
{
	GENERATED_BODY()

public:

	ACPP_CleanerTarget();

	/** 
	* Set Mark on hit for OtherActor if this->Target is marked 
	* or clear OtherTarget if this->Target isn't marked
	*/
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NarmalImpuls, const FHitResult& Hit);

	/** Overloaded function that sets the grade and material for CleanerTarget */
	virtual void SetMark(bool bMark) override;

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
