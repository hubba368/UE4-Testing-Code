// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UITesting_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UITESTING_API AUITesting_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

protected:

private:
	
	
};
