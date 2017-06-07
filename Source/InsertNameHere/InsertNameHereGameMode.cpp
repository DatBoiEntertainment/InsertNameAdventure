// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "InsertNameHereGameMode.h"
#include "InsertNameHereCharacter.h"

AInsertNameHereGameMode::AInsertNameHereGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AInsertNameHereCharacter::StaticClass();	
}
