// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawnBase.h"
#include "Engine/Classes/Camera/CameraComponent.h"
#include "Snake.h"
#include "Components/InputComponent.h"

// Sets default values
APlayerPawnBase::APlayerPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	RootComponent = PawnCamera;
	
	
}

// Called when the game starts or when spawned
void APlayerPawnBase::BeginPlay()
{
	Super::BeginPlay();
	SetActorRotation(FRotator(-90, 0, 0));

	CreateSnakeActor();
}


// Called to bind functionality to input
void APlayerPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Vertical", this, &APlayerPawnBase::HandlePlayerVerticalInput);

	PlayerInputComponent->BindAxis("Horizontal", this, &APlayerPawnBase::HandlePlayerHorizontalPlayer);
}

void APlayerPawnBase::CreateSnakeActor()
{
	SnakeActor = GetWorld()->SpawnActor<ASnake>(SnakeActorClass, FTransform());
}

void APlayerPawnBase::HandlePlayerVerticalInput(float value)	
{
	if (IsValid(SnakeActor))
	{
		if (value > 0 && SnakeActor->LastMoveDirection != Movement::DOWN && SnakeActor->b_Control)
		{
			SnakeActor->LastMoveDirection = Movement::UP;

			SnakeActor->b_Control = false;
		}
		else if (value < 0 && SnakeActor->LastMoveDirection != Movement::UP && SnakeActor->b_Control)
		{
			SnakeActor->LastMoveDirection = Movement::DOWN;

			SnakeActor->b_Control = false;
		}
	}
}

void APlayerPawnBase::HandlePlayerHorizontalPlayer(float value)
{
	if (IsValid(SnakeActor))
	{
		if (value > 0 && SnakeActor->LastMoveDirection != Movement::LEFT && SnakeActor->b_Control)
		{
			SnakeActor->LastMoveDirection = Movement::RIGHT;

			SnakeActor->b_Control = false;
		}
		else if (value < 0 && SnakeActor->LastMoveDirection != Movement::RIGHT && SnakeActor->b_Control)
		{
			SnakeActor->LastMoveDirection = Movement::LEFT;

			SnakeActor->b_Control = false;
		}
	}
}



