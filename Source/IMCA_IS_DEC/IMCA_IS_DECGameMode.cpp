// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "IMCA_IS_DECGameMode.h"
#include "IMCA_IS_DECHUD.h"
#include "IMCA_IS_DECCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIMCA_IS_DECGameMode::AIMCA_IS_DECGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AIMCA_IS_DECHUD::StaticClass();
}
