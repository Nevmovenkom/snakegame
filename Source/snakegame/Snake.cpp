// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakeElementBase.h"
#include "Snake.h"

// Sets default values
ASnake::ASnake()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementSize = 100.f;
	speed = 0.5f;
	LastMoveDirection = Movement::UP;
}

// Called when the game starts or when spawned
void ASnake::BeginPlay()
{
	Super::BeginPlay();
	SetActorTickInterval(speed);
	AddSnakeElements(5);
	
}

// Called every frame
void ASnake::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
}

void ASnake::AddSnakeElements(int ElementsNum)
{
	for (int i = 0; i < ElementsNum; i++)
	{
		FVector NewLocation(SnakeElements.Num() * ElementSize, 0, 0);
		FTransform NewTransform(NewLocation);
		ASnakeElementBase* NewSnakeElements = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		int32 ElemIndex = SnakeElements.Add(NewSnakeElements);
		if (ElemIndex == 0)
		{
			NewSnakeElements->SetFirstElementType();
		}
	}
}

void ASnake::Move()
{
	FVector MovementVector;
	float  MovementSpeed = ElementSize;
		switch (LastMoveDirection)
			{
			case Movement::UP:
				MovementVector.X += MovementSpeed;
				break;
			case Movement::DOWN:
				MovementVector.X -= MovementSpeed;
				break;
			case Movement::LEFT:
				MovementVector.Y += MovementSpeed;
				break;
			case Movement::RIGHT:
				MovementVector.Y -= MovementSpeed;
				break;
			}
		for (int i = SnakeElements.Num() - 1; i > 0; i--)
		{
			auto CurrentElement = SnakeElements[i];
			auto PrevElement = SnakeElements[i - 1];
			FVector PrewLocation = PrevElement->GetActorLocation();
			CurrentElement->SetActorLocation(PrewLocation);
		}
		SnakeElements[0]->AddActorWorldOffset(MovementVector);

}

