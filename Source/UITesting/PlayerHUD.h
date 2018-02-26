// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PlayerHUDWidget.h"
#include "MyCharacter.h"
#include "PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class UITESTING_API APlayerHUD : public AHUD
{
	GENERATED_BODY()
	
public:


protected:
	virtual void BeginPlay() override;

	// Widget class to use as the player HUD template
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player UI")
	TSubclassOf<UPlayerHUDWidget> PlayerHUDWidgetClass;

	// the actual instance of the player HUD to be used.
	UPROPERTY()
	UPlayerHUDWidget *HUDWidget;

	UPROPERTY(EditAnywhere, Category = "Player UI")
	AMyCharacter *playerChar;


private:
	
};
