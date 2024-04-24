// Fill out your copyright notice in the Description page of Project Settings.
#include "Snake.h"
#include "SnakeElementBase.h"
#include "INTERACTABLE1.h"


// Sets default values
ASnake::ASnake()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementSize = 100.f;
	speed = 0.5f;
	LastMoveDirection = Movement::DOWN;
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
		FVector NewLocation(0,0,0);
		FTransform NewTransform(NewLocation);
		ASnakeElementBase* NewSnakeElements = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		NewSnakeElements->SnakeOwner = this;
		int32 ElemIndex = SnakeElements.Add(NewSnakeElements);
		if (ElemIndex == 0)
		{
			NewSnakeElements->SetFirstElementType();
		}
	}
}

void ASnake::Move()
{
	
	FVector MovementVector(FVector::ZeroVector);
		switch (LastMoveDirection)
			{
			case Movement::UP:
				MovementVector.X += ElementSize;
				break;
			case Movement::DOWN:
				MovementVector.X -= ElementSize;
				break;
			case Movement::LEFT:
				MovementVector.Y += ElementSize;
				break;
			case Movement::RIGHT:
				MovementVector.Y -= ElementSize;
				break;
			}

		SnakeElements[0]->ToggleCollision();


		for (int i = SnakeElements.Num() - 1; i > 0; i--)
		{
			auto CurrentElement = SnakeElements[i];
			auto PrevElement = SnakeElements[i - 1];
			FVector PrewLocation = PrevElement->GetActorLocation();
			CurrentElement->SetActorLocation(PrewLocation);
		}
		
		SnakeElements[0]->AddActorWorldOffset(MovementVector);
		SnakeElements[0]->ToggleCollision();
		b_Control = true;
}

void ASnake::SnakeElementOverlap(ASnakeElementBase* OverlappedElement, AActor* Other)
{
	if (IsValid(OverlappedElement))
	{
		int32 ElemIndex;
		SnakeElements.Find(OverlappedElement, ElemIndex);
		bool bIsFirst = ElemIndex == 0;
		IINTERACTABLE1* interactInterface = Cast<IINTERACTABLE1>(Other);
		if (interactInterface)
		{
			interactInterface->Interact(this, bIsFirst);
		}
	}
}

void ASnake::AddNewElements(int Elements)
{
	for (int i = 0; i < Elements; i++)
	{
		of = of + 1;
		FVector NewLocation(0, 0, 5000);
		FTransform NewTransform(NewLocation);
		ASnakeElementBase* NewSnakeElements = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		NewSnakeElements->SnakeOwner = this;
		int32 ElemIndex = SnakeElements.Add(NewSnakeElements);
		if (ElemIndex == 0)
		{
			NewSnakeElements->SetFirstElementType();
		}
		
		if (of == 5)
		{
			AddNewBonusElements();
		}
	}
}

void ASnake::AddNewBonusElements(int Elements)
{
	for (int i = 0; i < Elements; i++)
	{
		of = 0;
		FVector NewLocation(0, 0, 5000);
		FTransform NewTransform(NewLocation);
		ASnakeElementBase* NewSnakeElements = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		NewSnakeElements->SnakeOwner = this;
		int32 ElemIndex = SnakeElements.Add(NewSnakeElements);
		if (ElemIndex == 0)
		{
			NewSnakeElements->SetFirstElementType();
		}
	}
}