// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_BaseTarget.h"

ACPP_BaseTarget::ACPP_BaseTarget()
{
    //Create Square
    SquareStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Square"));
    SquareStaticMeshComponent->SetupAttachment(RootComponent);
    SquareStaticMeshComponent->SetSimulatePhysics(true);
    SquareStaticMeshComponent->SetNotifyRigidBodyCollision(true);

    //Add Material in Array
    UMaterialInterface* Material1 = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Material/EnemyMaterials/M_ClearTarget.M_ClearTarget"));
    UMaterialInterface* Material2 = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Material/EnemyMaterials/M_Cleaner.M_Cleaner"));
    UMaterialInterface* Material3 = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Material/PlayerMaterial/M_Player.M_Player"));

    MaterialArray.Add(Material1);
    MaterialArray.Add(Material2);
    MaterialArray.Add(Material3);
}

void ACPP_BaseTarget::SetMark(bool bMark)
{
    IsMark = bMark;

    if (bMark)
    {
        SetMaterialByIndex(2);
    }
}

void ACPP_BaseTarget::SetMarkOnHit(AActor* OtherActor)
{
    if (GetIsMark())
    {
        ACPP_BaseTarget* OtherClearTarget = Cast<ACPP_BaseTarget>(OtherActor);

        if (OtherClearTarget && OtherClearTarget != this && !OtherClearTarget->GetIsMark())
        {
            OtherClearTarget->SetMark(true);
        }
    }
}

void ACPP_BaseTarget::BeginPlay()
{
    Super::BeginPlay();

    RandomJump();
}

void ACPP_BaseTarget::RandomJump()
{
    FVector UpVector = FVector::UpVector;

    // Generate a random rotation around the up vector
    FRotator RandomRotation = FRotator(0, FMath::RandRange(0.0f, 360.0f), 0);

    // Apply the random rotation to the up vector to get the jump direction
    FVector JumpDirection = RandomRotation.Vector() + UpVector;

    // Apply the jump impulse with the specified force
    FVector Impulse = JumpDirection * JumpForce;

    //Adds momentum to the SquareStaticMeshComponent the impulse is applied instantly
    SquareStaticMeshComponent->AddImpulse(Impulse, NAME_None, true);

    //Reset Jump
    ResetJumpTimer();
}

void ACPP_BaseTarget::ResetJumpTimer()
{
    // Generate a random interval between JumpIntervalMin and JumpIntervalMax
    float RandomInterval = FMath::RandRange(JumpIntervalMin, JumpIntervalMax);

    // Set the timer to call RandomJump after the random interval
    GetWorldTimerManager().SetTimer(JumpTimerHandle, this, &ACPP_BaseTarget::RandomJump, RandomInterval, false);
}

void ACPP_BaseTarget::SetMaterialByIndex(int Index)
{
    //Get Material in Array
    UMaterialInterface* Material = GetMaterialByIndex(Index);

    if (SquareStaticMeshComponent && Material != nullptr)
    {
        //Set Material
        SquareStaticMeshComponent->SetMaterial(0, Material);
    }
}
