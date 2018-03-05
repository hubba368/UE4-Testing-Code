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

	void UpdateHealth(float healthValue);

	void InitialisePlayerHUD();
	
	UPROPERTY(BlueprintReadOnly, Category = "Player UI")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, Category = "Player UI")
	float MaxHealth;


protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player UI")
		void UpdateHealth();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player UI")
		void InitialiseHUD();
private:
	

};
