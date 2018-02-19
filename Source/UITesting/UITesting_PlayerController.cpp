// Fill out your copyright notice in the Description page of Project Settings.

#include "UITesting_PlayerController.h"

void AUITesting_PlayerController::BeginPlay() 
{
	Super::BeginPlay();
	SetInputMode(FInputModeGameAndUI());
}



