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

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);

	void MouseX(float AxisValue);
	void MouseY(float AxisValue);

private:

	/** Player Sphere */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Components", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* SphereStaticMeshComponent;

	/** Camera boom */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Components | Camera", meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Components | Camera", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* CameraComponent;

	/** Speed Sphere */
	UPROPERTY(EditAnywhere, Category = "Settings")
		float SpeedSphere = 1000.f;
};
