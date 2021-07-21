// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestGitGameMode.h"
#include "TestGitCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestGitGameMode::ATestGitGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
