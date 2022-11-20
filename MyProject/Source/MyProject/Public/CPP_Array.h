#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Array.generated.h"

UCLASS()
class MYPROJECT_API ACPP_Array : public AActor
{
	GENERATED_BODY()
	
public:	
	ACPP_Array();

	UPROPERTY()
	TArray<FVector> arrayVector;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
