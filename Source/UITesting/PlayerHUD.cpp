// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerHUD.h"


void APlayerHUD::BeginPlay() 
{
	Super::BeginPlay();

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

