#include "MyActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true; 
	
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMeshComponent;
		
	static FString Path = TEXT("/Game/M_Overlay");
	//static FString Path = TEXT("/Game/M_Outline");
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(*Path);

	MyMaterial = Material.Object;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyActor::NotifyActorOnClicked(FKey PressedButton)
{
	UE_LOG(LogTemp, Log, TEXT("NotifyActorOnClicked %s"), *GetName());

	TArray<AActor*> MyActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMyActor::StaticClass(), MyActors);

	for (auto Actor : MyActors)
	{
		AMyActor* MyActor = Cast<AMyActor>(Actor);
		if (MyActor != this)
		{
			MyActor->StaticMeshComponent->SetOverlayMaterial(nullptr);
		}
		else
		{
			MyActor->StaticMeshComponent->SetOverlayMaterial(MyMaterial);
		}
	}
}