// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterMode.h"
#include "kismet/GameplayStatics.h"
#include "Gameplay/Turret.h"

void AShooterMode::BeginPlay()
{
	//Super::BeginPlay();

	Scores = 0;
	TArray<AActor *> turretActors;
	UGameplayStatics::GetAllActorsOfClass(this, ATurret::StaticClass(), turretActors);
	for (AActor* turretActors : turretActors)
	{
		ATurret * turret = Cast<ATurret>(turretActors);
		if (turret)
		{
			turret->OnTurredKilled.AddUFunction(this, "OnTurretKilled");
		}
	}

}

void AShooterMode::OnTurretKilled()
{
	Scores += 20;
	UE_LOG(LogTemp, Warning, TEXT("Scores %f - "), Scores);
}

AShooterMode::AShooterMode()
{
	
}
	
	
		
