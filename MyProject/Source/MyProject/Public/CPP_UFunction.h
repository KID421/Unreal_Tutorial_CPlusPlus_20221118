#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_UFunction.generated.h"

UCLASS()
class MYPROJECT_API ACPP_UFunction : public AActor
{
	GENERATED_BODY()
	
public:	
	ACPP_UFunction();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "我的屬性|資料")
	float time;

	UFUNCTION(BlueprintCallable, Category = "我的函式")
	void TestFunc(int32 value);

	UFUNCTION(BlueprintPure, Category = "我的函式")
	int32 TestFuncPure();

	UFUNCTION(BlueprintPure, Category = "我的函式")
	int32 TestFuncPureConst() const;

	UFUNCTION(BlueprintImplementableEvent, Category = "我的函式")
	void TestImplementableFunc(int32 value);

	UFUNCTION(BlueprintNativeEvent, Category = "我的函式")
	void TestNativeFunc();
	void TestNativeFunc_Implementation();

	UFUNCTION(BlueprintCallable, Category = "我的函式")
	void TestInputOutput(int32 inValue, int32& outValue);

	UFUNCTION(BlueprintCallable, Category = "我的函式")
	void TestInputConstOutput(const int32 inValue, int32& outValue);

	UFUNCTION(BlueprintCallable, Category = "我的函式")
	void TestInputOutput_2(int32 inValue, int32& outValue, bool& outValueBool);

	UFUNCTION(BlueprintCallable, Category = "我的函式")
	void TestInputOutput_3(int32 inValue, FVector inVector, ACPP_UFunction* uFunctionIn, int32& outValue, bool& outValueBool, ACPP_UFunction*& uFunctionOut);

	UFUNCTION(BlueprintCallable, Category = "我的函式", meta = (HideSelfPin = "true", DisplayName = "我的測試函式", Tooltip = "我的測試函式說明文字。"))
	void TestMeta();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
