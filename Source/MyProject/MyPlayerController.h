#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

UCLASS()
class MYPROJECT_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this empty's properties
	AMyPlayerController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupInputComponent() override;
};
