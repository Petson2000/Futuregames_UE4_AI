// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_AIGameMode.h"
#include "UE4_AICharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_AIGameMode::AUE4_AIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
