// Fill out your copyright notice in the Description page of Project Settings.

#include "UITestingGameModeBase.h"

void AUITestingGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	ChangeMenuWidget(StartingWidgetClass);
}

void AUITestingGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass) 
{
	// remove the current menu widget if it exists.
	// then add a new widget to the viewport.
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}
	if (NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}