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

	UFUNCTION(BlueprintCallable, Category = "Player UI")
	void UpdateHealth(float healthValue);

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Player UI")
	float GetInitialHealth();

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Player UI")
	float GetCurrentHealth();

protected:

private:
	
	UPROPERTY(EditAnywhere, Category = "Player UI")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, Category = "Player UI")
	float InitialHealth;
};
