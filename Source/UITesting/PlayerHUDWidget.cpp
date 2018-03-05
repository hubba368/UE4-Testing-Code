// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerHUDWidget.h"

void UPlayerHUDWidget::UpdateHealth(float value)
{
	CurrentHealth = value;
	UpdateHealth();
}

void UPlayerHUDWidget::InitialisePlayerHUD()
{
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
	InitialiseHUD();
}
