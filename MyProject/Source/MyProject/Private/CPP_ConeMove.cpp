#include "CPP_ConeMove.h"

ACPP_ConeMove::ACPP_ConeMove()
{
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	ConeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	Scene->SetupAttachment(GetRootComponent());
	ConeMesh->SetupAttachment(Scene);

	speed = 150;
	max = 200;
}

void ACPP_ConeMove::BeginPlay()
{
	Super::BeginPlay();
	
	const FVector location = GetActorLocation();
	currentHeight = location.Z;
	minHeight = location.Z;
	maxHeight = location.Z + max;
	isUp = true;
}

void ACPP_ConeMove::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float value = DeltaTime * speed;

	if (isUp)
	{
		currentHeight += value;
	}
	else 
	{
		currentHeight -= value;
	}

	FVector location = GetActorLocation();
	location.Z = currentHeight;

	SetActorLocation(location);

	if (currentHeight > maxHeight)
	{
		isUp = false;
	}
	else if (currentHeight < minHeight)
	{
		isUp = true;
	}
}
