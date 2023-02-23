// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyProjectGameModeBase.h"
#include "MyPlayerController.h"

AMyProjectGameModeBase::AMyProjectGameModeBase()
{
	//tell your custom game mode to use your custom player controller
	PlayerControllerClass = AMyPlayerController::StaticClass();

	//you can set whatever (if any) other default framework classes
	//you wish for this game mode as well
	//DefaultPawnClass = AMyPawn::StaticClass();
	//GameStateClass = AMyGameState::StaticClass();
	//HUDClass = AMyGameHUD::StaticClass();
	//ReplaySpectatorPlayerControllerClass = AMyReplaySpectatorPlayerController::StaticClass();
	//SpectatorClass = AMySpectatorClass::StaticClass();
}