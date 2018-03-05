// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PlayerHUDWidget.h"
#include "MyCharacter.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerHUD.generated.h"

/**
 * 
 */
UCLASS()
class UITESTING_API APlayerHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UPlayerHUDWidget *GetHUDWidget();

	void UpdatePlayerHealth(float value);

protected:
	virtual void BeginPlay() override;

	void InitialiseHUDValues();

	// Widget class to use as the player HUD template
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player UI")
	TSubclassOf<UPlayerHUDWidget> PlayerHUDWidgetClass;

	// the actual instance of the player HUD to be used.
	UPROPERTY()
	UPlayerHUDWidget *HUDWidget;

	UPROPERTY(EditAnywhere, Category = "Player UI")
	class AMyCharacter *playerChar;


private:
	
};
