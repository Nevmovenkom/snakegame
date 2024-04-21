// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Snake.generated.h"

UENUM()
enum class Movement
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};
class ASnakeElementBase;

UCLASS()
class SNAKEGAME_API ASnake : public AActor
{
	GENERATED_BODY()
	
public:	


	// Sets default values for this actor's properties
	ASnake();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASnakeElementBase> SnakeElementClass;
	UPROPERTY()
	TArray<ASnakeElementBase*> SnakeElements;
	UPROPERTY(EditDefaultsOnly)
	float ElementSize;
	UPROPERTY()
	Movement LastMoveDirection;
	UPROPERTY(EditDefaultsOnly)
	float speed;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void AddSnakeElements(int ElementsNum = 1);
	UFUNCTION(BlueprintCallable)
	void Move();
	UFUNCTION()
	void SnakeElementOverlap(ASnakeElementBase* OverlappedElement, AActor* Other);

};
