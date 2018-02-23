// Fill out your copyright notice in the Description page of Project Settings.

#include "GameDevUIGameModeBase.h"
#include "PlayerHUD.h"

void AGameDevUIGameModeBase::BeginPlay() 
{
	//UNREAL DOES NOT LIKE WHEN YOU DONT HAVE FUNCTION DECLARATIONS IN CPP FILES
	//NEED TO MAKE SURE I DECLARE FUNCTIONS BEFORE COMPILING

	Super::BeginPlay();


}


AGameDevUIGameModeBase::AGameDevUIGameModeBase()
	:Super()
{
	//HUDClass = APlayerHUD::StaticClass();
}

