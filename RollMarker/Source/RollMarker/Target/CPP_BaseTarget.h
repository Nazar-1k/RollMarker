// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_BaseTarget.generated.h"

UCLASS()
class ROLLMARKER_API ACPP_BaseTarget : public AActor
{
	GENERATED_BODY()

public:
	ACPP_BaseTarget();

	/** Get Square Static Mesh Component */
	FORCEINLINE UStaticMeshComponent* GetSquare() { return SquareStaticMeshComponent; }

	/** Get Material By Index */
	FORCEINLINE UMaterialInterface* GetMaterialByIndex(int Index) { return MaterialArray[Index]; }

	/** Checking if the target is marked */
	bool GetIsMark() { return IsMark; }

	/** Determines whether the target is marked and sets the material to it if the target is marked */
	virtual void SetMark(bool bMark);

	/** Get Hit Particle */
	class UParticleSystem* GetHitParticle() { return HitParticles; }

	/** Get HitSound */
	USoundBase* GetHitSound() { return HitSound; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Jump in a random direction */
	void RandomJump();

	/** Timer function to reset the jump */
	void ResetJumpTimer();

	/** Set Material By Index */
	void SetMaterialByIndex(int Index);

	/** Particle system to be played when the object is hit */
	UPROPERTY(EditAnywhere, Category = "Particle")
	class UParticleSystem* HitParticles;

	/** Particle system to be played when the object performs a jump action */
	UPROPERTY(EditAnywhere, Category = "Particle")
	class UParticleSystem* JumpParticles;

	/** Sound to be played when the object is hit */
	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundBase* HitSound;

	/** Sound to be played when the object performs a jump action */
	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundBase* JumpSound;

	/** Set Hit Sound */
	UFUNCTION(BlueprintCallable)
	void SetHitSound(USoundBase* NewHitSoud) { HitSound = NewHitSoud; }

	/** Set Jump Sound */
	UFUNCTION(BlueprintCallable)
	void SetJumpSound(USoundBase* NewJumpSound) { JumpSound = NewJumpSound; }

private:

	/** Target Sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* SquareStaticMeshComponent;

	/** Array Material */
	UPROPERTY(EditAnywhere, Category = "Material")
	TArray<UMaterialInterface*> MaterialArray;

	/** Jump Force */
	UPROPERTY(EditAnywhere, Category = "Settings")
	float JumpForce = 250.f;

	/** Interval of jumps Min for the timer */
	UPROPERTY(EditAnywhere, Category = "Settings")
	float JumpIntervalMin = 0.4f;

	/** Interval of jumps Max for the timer */
	UPROPERTY(EditAnywhere, Category = "Settings")
	float JumpIntervalMax = 2.0f;

	/** Timer handle */ 
	FTimerHandle JumpTimerHandle;

	/** Mark for the target */
	bool IsMark = false;
};
