// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "pzc3GameMode.h"
#include "pzc3HUD.h"
#include "pzc3Character.h"
#include "UObject/ConstructorHelpers.h"

Apzc3GameMode::Apzc3GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Apzc3HUD::StaticClass();
}
