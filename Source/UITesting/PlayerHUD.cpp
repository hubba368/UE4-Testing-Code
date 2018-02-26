// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerHUD.h"


void APlayerHUD::BeginPlay() 
{
	Super::BeginPlay();

	playerChar = Cast<AMyCharacter>(GetParentActor());

	if (playerChar) 
	{
		// if hud widget is not null, create it and add it to the viewport
		if (PlayerHUDWidgetClass)
		{
			HUDWidget = CreateWidget<UPlayerHUDWidget>(GetWorld(), PlayerHUDWidgetClass);

			if (HUDWidget)
			{
				HUDWidget->AddToViewport();
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UI ERROR"));
		}
	}

	
}

