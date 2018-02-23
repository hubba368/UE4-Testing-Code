// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUDWidget.generated.h"

/**
 * 
 */
UCLASS(ABSTRACT)
class UITESTING_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	void SetHealth(float healthValue);

protected:

	UFUNCTION(BlueprintCallable, Category = "Player UI")
	void SetHealth();



private:
	
};
