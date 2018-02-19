// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BasePlayerUI.generated.h"

/**
 * 
 */
UCLASS()
class UITESTING_API UBasePlayerUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "UI")
		void AddItemToUI();

protected:


private:
	
};
