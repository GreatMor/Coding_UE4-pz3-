// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Gameplay/Turret.h"
#include "ShooterMode.generated.h"

/**
 * 
 */
UCLASS()
class PZC3_API AShooterMode : public AGameModeBase
{
	GENERATED_BODY()

	 

public:

	
	virtual void BeginPlay();

	UPROPERTY(EditAnywhere)
		float Scores;


	UFUNCTION()
		void OnTurretKilled();

	AShooterMode();	
	
};
