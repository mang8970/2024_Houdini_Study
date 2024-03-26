// Copyright Epic Games, Inc. All Rights Reserved.

#include "Houdini_StudyGameMode.h"
#include "Houdini_StudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHoudini_StudyGameMode::AHoudini_StudyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
