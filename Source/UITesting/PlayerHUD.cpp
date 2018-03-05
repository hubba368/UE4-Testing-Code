// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerHUD.h"


void APlayerHUD::BeginPlay() 
{
	Super::BeginPlay();

	// this only works for singleplayer - would need changing if multiplayer was implemented.
	APlayerController *test = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	if (test) 
	{
		// if hud widget is not null, create it and add it to the viewport
		if (PlayerHUDWidgetClass)
		{
			HUDWidget = CreateWidget<UPlayerHUDWidget>(GetWorld(), PlayerHUDWidgetClass);

			if (HUDWidget)
			{
				HUDWidget->AddToViewport();
				InitialiseHUDValues();
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UI ERROR"));
		}
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("PLAYER CHAR IS NULL ERROR"));
	}
}

void APlayerHUD::InitialiseHUDValues() 
{
	HUDWidget->InitialisePlayerHUD();
}

UPlayerHUDWidget *APlayerHUD::GetHUDWidget() 
{
	return HUDWidget;
}

void APlayerHUD::UpdatePlayerHealth(float value)
{

	HUDWidget->UpdateHealth(value);
}

