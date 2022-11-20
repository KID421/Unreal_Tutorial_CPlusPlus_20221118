#include "CPP_UProperty.h"

ACPP_UProperty::ACPP_UProperty()
{
	PrimaryActorTick.bCanEverTick = true;

	propertyFloat = 100;
}

void ACPP_UProperty::BeginPlay()
{
	Super::BeginPlay();
}

void ACPP_UProperty::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

