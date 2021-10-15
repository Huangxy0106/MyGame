// Copyright Epic Games, Inc. All Rights Reserved.

#include "StartUpGameMode.h"
#include "StartUpBall.h"

AStartUpGameMode::AStartUpGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AStartUpBall::StaticClass();
}
