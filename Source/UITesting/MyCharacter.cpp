// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	playerHUD = Cast<APlayerHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD());
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AMyCharacter::UpdateCurrentHealth(float value)
{
	playerHUD->GetHUDWidget()->UpdateHealth(value);
}

float AMyCharacter::GetInitialHealth()
{
	return InitialHealth;
}

float AMyCharacter::GetCurrentHealth()
{
	return CurrentHealth;
}