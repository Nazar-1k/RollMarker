// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CPP_RollPlayer.generated.h"

UCLASS()
class ROLLMARKER_API ACPP_RollPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_RollPlayer();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Set  Mark for Target on Hit */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NarmalImpuls, const FHitResult& Hit);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Move the character forward based on the input AxisValue.
	void MoveForward(float AxisValue);

	// Move the character right based on the input AxisValue.
	void MoveRight(float AxisValue);

	// Handle mouse input for horizontal camera movement.
	void MouseX(float AxisValue);

	// Handle mouse input for vertical camera movement.
	void MouseY(float AxisValue);

	// Update the arrow's properties and location based on the character's state.
	void UpdateArrow();

	// Set the arrow's rotation based on the given Velocity vector.
	void SetArrowRotation(FVector Velocity);

	// Set the arrow's location based on the given Velocity vector.
	void SetArrowLocation(FVector Velocity);

	// Set the arrow's length based on the given Velocity vector.
	void SetArrowLength(FVector Velocity);

private:

	/** Player Sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* SphereStaticMeshComponent;


	/** Player Arrow */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Components", meta = (AllowPrivateAccess = "true"))
	class UArrowComponent* ArrowComponent;

	/** Camera boom */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Components | Camera", meta = (AllowPrivateAccess = "true"))		class USpringArmComponent* CameraBoom;

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Components | Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	/** Speed Sphere */
	UPROPERTY(EditAnywhere, Category = "Settings")
	float SpeedSphere = 1000.f;

	/** Height above the ball */
	UPROPERTY(EditAnywhere, Category = "Settings | Arrow")
	float ArrowHeightAboveBall = 50.f;

	/** Maximum Speed */
	UPROPERTY(EditAnywhere, Category = "Settings | Arrow")
	float MaxSpeed = 700.0f;

	/** Maximum Arrow Length */
	UPROPERTY(EditAnywhere, Category = "Settings | Arrow")
	float MaxArrowLength = 100.0f;

	/** Minimum Arrow Length */
	UPROPERTY(EditAnywhere, Category = "Settings | Arrow")
	float MinArrowLenght = 20;
};
