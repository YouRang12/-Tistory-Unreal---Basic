// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "test_cppGameMode.h"
#include "test_cppHUD.h"
#include "test_cppCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atest_cppGameMode::Atest_cppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Atest_cppHUD::StaticClass();
}
