<<<<<<< HEAD
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class UITESTING_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
=======
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerHUDWidget.h"
#include "MyCharacter.generated.h"

UCLASS()
class UITESTING_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Widget class to use as the player HUD template
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player UI")
	TSubclassOf<UPlayerHUDWidget> PlayerHUDWidgetClass;

	// the actual instance of the player HUD to be used.
	UPROPERTY()
	UPlayerHUDWidget *HUDWidget;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void UpdateHealth();
	
};
>>>>>>> 634b726ab9877c424be7bde86a44d40fc1d02649
