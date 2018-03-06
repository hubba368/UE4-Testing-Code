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
	// Change the current player's health on the health bar
	void UpdateHealth(float healthValue);

	// Initialises UI with initial values
	void InitialisePlayerHUD();

	
	UPROPERTY(BlueprintReadOnly, Category = "Player UI")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, Category = "Player UI")
	float MaxHealth;

	// 'Delayed' health value so the health bar can interpolate to current health
	// should add editable interp speed value - e.g. health pickups would need quick filling
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player UI")
	float DisplayHealth;


protected:
	//BP Events
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player UI")
		void UpdateHealth();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player UI")
		void InitialiseHUD();

private:
	

};
