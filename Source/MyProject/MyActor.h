#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MYPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void NotifyActorOnClicked(FKey PressedButton = EKeys::LeftMouseButton) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComponent{ nullptr };

	// Used for overlay material
	UMaterial* MyMaterial{ nullptr };
};
