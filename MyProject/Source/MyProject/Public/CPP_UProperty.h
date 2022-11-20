#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_UProperty.generated.h"

UCLASS()
class MYPROJECT_API ACPP_UProperty : public AActor
{
	GENERATED_BODY()
	
public:	
	ACPP_UProperty();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	float propertyFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	double propertyDouble;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	uint8 propertyUint8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	int32 propertyInt32;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	bool propertyBool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	FName propertyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	FString propertyString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	FVector propertyVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	FRotator propertyRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	FTransform propertyTransform;

	// 編輯權限
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "我的屬性|編輯")
	int32 intEditAnywhere;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "我的屬性|編輯")
	int32 intEditDefaultsOnly;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "我的屬性|編輯")
	int32 intEditInstanceOnly;

	// 能見設定
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "我的屬性|能見度")
	int32 intVisibleAnywhere = 100;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "我的屬性|能見度")
	int32 intVisibleDefaultsOnly = 100;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "我的屬性|能見度")
	int32 intVisibleInstanceOnly = 100;

	// 名稱、提示、範圍以及私人
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "我的屬性|相關資料", Meta = (DisplayName = "測試顯示名稱"))
	bool boolDisplayName = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "我的屬性|相關資料", Meta = (DisplayName = "有提示", Tooltip = "我是提示文字。"))
	bool boolTooltip = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "我的屬性|相關資料", Meta = (DisplayName = "數值範圍", ClampMin = "100", ClampMax = "1000"))
	int32 intClamp = 500;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "我的屬性|相關資料", Meta = (DisplayName = "私人為是", AllowPrivateAccess = "true"))
	int32 intPrivateTrue = 777;

	// UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "我的屬性", Meta = (DisplayName = "私人為否", AllowPrivateAccess = "false"))
	// int32 intPrivateFalse = 999;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
