#include "CPP_Array.h"

ACPP_Array::ACPP_Array()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACPP_Array::BeginPlay()
{
	Super::BeginPlay();

	TArray<FVector> array;

	array.Add(FVector::ZeroVector);

	array.Insert(FVector::ZeroVector, 1);

	arrayVector.Append(array);

	const int32 elementsNum = arrayVector.Num();

	FVector& element = arrayVector[0];
	
	UE_LOG(LogTemp, Display, TEXT("陣列長度： %d"), elementsNum);
	
	for (int32 i = 0; i < elementsNum; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("陣列： %s"), *arrayVector[i].ToString());
	}
}

void ACPP_Array::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

