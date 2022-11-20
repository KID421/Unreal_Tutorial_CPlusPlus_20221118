#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_ConeMove.generated.h"

UCLASS()
class MYPROJECT_API ACPP_ConeMove : public AActor
{
	GENERATED_BODY()
	
public:	
	ACPP_ConeMove();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Components")
	USceneComponent* Scene;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Components")
	UStaticMeshComponent* ConeMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="ConeActor")
	bool isUp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="ConeActor")
	float minHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="ConeActor")
	float maxHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConeActor")
	float max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ConeActor")
	float speed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="ConeActor")
	float currentHeight;

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
