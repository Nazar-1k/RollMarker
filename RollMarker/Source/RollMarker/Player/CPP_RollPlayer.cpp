// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_RollPlayer.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"

ACPP_RollPlayer::ACPP_RollPlayer()
{

	//Create Sphere
	SphereStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	SphereStaticMeshComponent->SetupAttachment(RootComponent);

	// Create a camera booms
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(SphereStaticMeshComponent);
	CameraBoom->TargetArmLength = 300.f;
	CameraBoom->bUsePawnControlRotation = true;

	// Create a camera
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = true; // Camera does not rotate relative to arm

	PrimaryActorTick.bCanEverTick = true;
}

void ACPP_RollPlayer::BeginPlay()
{
	Super::BeginPlay();

}

void ACPP_RollPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_RollPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Keybord Control
	InputComponent->BindAxis("MoveRight", this, &ACPP_RollPlayer::MoveRight);
	InputComponent->BindAxis("MoveForward", this, &ACPP_RollPlayer::MoveForward);

	//Mouse Control
	InputComponent->BindAxis("MouseX", this, &ACPP_RollPlayer::MouseX);
	InputComponent->BindAxis("MouseY", this, &ACPP_RollPlayer::MouseY);
}

void ACPP_RollPlayer::MoveForward(float AxisValue)
{
	if (this != nullptr && AxisValue != 0.0f)
	{
		FVector CameraForward = CameraComponent->GetForwardVector();
		FVector Force = CameraForward * AxisValue * SpeedSphere;

		SphereStaticMeshComponent->AddForce(Force, FName("None"), true);
	}
}
void ACPP_RollPlayer::MoveRight(float AxisValue)
{
	if (this != nullptr && AxisValue != 0.0f)
	{
		FVector CameraForward = CameraComponent->GetRightVector();
		FVector Force = CameraForward * AxisValue * SpeedSphere;

		SphereStaticMeshComponent->AddForce(Force, FName("None"), true);
	}
}

void ACPP_RollPlayer::MouseX(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}
void ACPP_RollPlayer::MouseY(float AxisValue)
{
	AddControllerPitchInput(-AxisValue);
}