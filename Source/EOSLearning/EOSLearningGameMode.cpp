// Copyright Epic Games, Inc. All Rights Reserved.

#include "EOSLearningGameMode.h"
#include "EOSLearningCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEOSLearningGameMode::AEOSLearningGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
