// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterProjectGameMode.h"
#include "ShooterProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShooterProjectGameMode::AShooterProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
