// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "INTERACTABLE1.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UINTERACTABLE1 : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SNAKEGAME_API IINTERACTABLE1
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION()
	virtual void Interact(AActor* IINTERACTABLE1, bool bIsHead);

};
