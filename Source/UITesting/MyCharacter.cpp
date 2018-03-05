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

	testing = (UGameplayStatics::GetPlayerController(GetWorld(), 0));
	//CurrentHealth = 1.0f;
	//UpdateCurrentHealth(CurrentHealth);
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (testing->WasInputKeyJustPressed(EKeys::F)) 
	{
		CurrentHealth = 100.0f;
		UpdateCurrentHealth(CurrentHealth);
	}
	if (testing->WasInputKeyJustPressed(EKeys::G))
	{
		CurrentHealth = 50.0f;
		UpdateCurrentHealth(CurrentHealth);
	}
	if (testing->WasInputKeyJustPressed(EKeys::H))
	{
		CurrentHealth = 25.0f;
		UpdateCurrentHealth(CurrentHealth);
	}
	if (testing->WasInputKeyJustPressed(EKeys::J))
	{
		CurrentHealth = 0.0f;
		UpdateCurrentHealth(CurrentHealth);
	}
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AMyCharacter::UpdateCurrentHealth(float value)
{
	// should change this to stop circular dependency.
	//value = value + -GetWorld()->GetDeltaSeconds() * 0.01f;
	playerHUD->UpdatePlayerHealth(value);
}

float AMyCharacter::GetMaximumHealth()
{
	return MaximumHealth;
}

float AMyCharacter::GetCurrentHealth()
{
	return CurrentHealth;
}