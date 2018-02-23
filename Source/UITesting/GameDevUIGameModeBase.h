// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlayerHUDWidget.h"
#include "GameDevUIGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UITESTING_API AGameDevUIGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:


protected:
	// Called when game starts
	virtual void BeginPlay() override;

	// Widget class to use as the player HUD
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player UI")
	TSubclassOf<UPlayerHUDWidget> PlayerHUDWidgetClass;

	// the actual instance of the player HUD to be used.
	UPROPERTY()
	UPlayerHUDWidget *HUDWidget;

private:
	
};
