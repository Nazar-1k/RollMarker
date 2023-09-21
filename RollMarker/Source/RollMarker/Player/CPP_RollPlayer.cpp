// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_RollPlayer.h"

#include "../Target/CPP_BaseTarget.h"

#include "Components/ArrowComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"

ACPP_RollPlayer::ACPP_RollPlayer()
{

	//Create Sphere
	SphereStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	SphereStaticMeshComponent->SetupAttachment(RootComponent);

	//Create Arrow
	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	ArrowComponent->bHiddenInGame = false;

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

	//Set Event On Hit for Sphere
	SphereStaticMeshComponent->OnComponentHit.AddDynamic(this, &ACPP_RollPlayer::OnHit);
}

void ACPP_RollPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateArrow();
}

void ACPP_RollPlayer::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NarmalImpuls, const FHitResult& Hit)
{
	ACPP_BaseTarget* Target = Cast<ACPP_BaseTarget>(OtherActor);

	if (Target && !Target->GetIsMark())
	{	
		//Set Target Mark
		Target->SetMark(true);
	}
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

		// A power that we add to the Sphere that will be applied instantly
		SphereStaticMeshComponent->AddForce(Force, FName("None"), true);
	}
}
void ACPP_RollPlayer::MoveRight(float AxisValue)
{
	if (this != nullptr && AxisValue != 0.0f)
	{
		FVector CameraForward = CameraComponent->GetRightVector();
		FVector Force = CameraForward * AxisValue * SpeedSphere;

		// A power that we add to the Sphere that will be applied instantly
		SphereStaticMeshComponent->AddForce(Force, FName("None"), true);
	}
}

void ACPP_RollPlayer::MouseX(float AxisValue)
{
	//X-axis camera control
	AddControllerYawInput(AxisValue);
}
void ACPP_RollPlayer::MouseY(float AxisValue)
{
	//Y-axis camera control
	AddControllerPitchInput(-AxisValue);
}

void ACPP_RollPlayer::UpdateArrow()
{
	FVector Velosity = SphereStaticMeshComponent->GetPhysicsLinearVelocity();

	SetArrowRotation(Velosity);
	SetArrowLength(Velosity);
	SetArrowLocation(Velosity);
}

void ACPP_RollPlayer::SetArrowRotation(FVector Velocity)
{
	// Find the rotation pointing forward and parallel to the ground plane
	FRotator TargetArrowRotation = Velocity.Rotation();
	TargetArrowRotation.Pitch = 0;
	TargetArrowRotation.Normalize();

	float InterpSpeed = 5.f;

	// Applies interpolation between the ArrowComponent's current rotation and the desired TargetArrowRotation
	FRotator ArrowRotation = FMath::RInterpTo(ArrowComponent->GetRelativeTransform().Rotator(), TargetArrowRotation, UGameplayStatics::GetWorldDeltaSeconds(this), InterpSpeed);
	
	ArrowComponent->SetRelativeRotation(ArrowRotation);
}

void ACPP_RollPlayer::SetArrowLocation(FVector Velocity)
{
	// Get the current location of the SphereStaticMeshComponent 
	FVector BallLocation = SphereStaticMeshComponent->GetComponentLocation();

	// Normalize the velocity vector and set its Z component to zero for 2D movement.
	Velocity.Normalize();
	Velocity.Z = 0;

	// Set the world location of the ArrowComponent to the calculated ArrowLocation.
	FVector ArrowLocation = BallLocation + FVector(0.f, 0.f, ArrowHeightAboveBall)/*- Velocity * ArrowLength*/;
	ArrowComponent->SetWorldLocation(ArrowLocation);
}

void ACPP_RollPlayer::SetArrowLength(FVector Velocity)
{
	// Calculate the speed magnitude from the Velocity vector.
	float Speed = Velocity.Size();

	// Calculate the ArrowLength based on the speed relative to MaxSpeed.
	float ArrowLength = (Speed / MaxSpeed) * MaxArrowLength;

	// Ensure ArrowLength doesn't go below MinArrowLength.
	if (ArrowLength <= MinArrowLenght)
	{
		ArrowLength = MinArrowLenght;
	}

	// Set the ArrowComponent's arrow length to the calculated ArrowLength.
	ArrowComponent->SetArrowLength(ArrowLength);

	/*SetArrowLocation(Velocity, ArrowLength);*/
}
