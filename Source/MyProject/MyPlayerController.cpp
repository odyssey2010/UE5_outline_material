#include "MyPlayerController.h"

// Sets default values
AMyPlayerController::AMyPlayerController()
{
	// Set this empty to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}

// Called when the game starts or when spawned
void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}