#include "CPP_UFunction.h"

ACPP_UFunction::ACPP_UFunction()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ACPP_UFunction::TestFunc(int32 value)
{
	UE_LOG(LogTemp, Warning, TEXT("測試函式被呼叫 %d"), value)
}

int32 ACPP_UFunction::TestFuncPure()
{
	return 777;
}

int32 ACPP_UFunction::TestFuncPureConst() const
{
	return 111;
}

void ACPP_UFunction::TestNativeFunc_Implementation()
{
	this->Destroy();
}

void ACPP_UFunction::TestInputOutput(int32 inValue, int32& outValue)
{
	inValue = 10;
}

void ACPP_UFunction::TestInputConstOutput(const int32 inValue, int32& outValue)
{
	// 無法修改常數參數
	// inValue = 10;
}

void ACPP_UFunction::TestInputOutput_2(int32 inValue, int32& outValue, bool& outValueBool)
{
}

void ACPP_UFunction::TestInputOutput_3(int32 inValue, FVector inVector, ACPP_UFunction* uFunctionIn, int32& outValue, bool& outValueBool, ACPP_UFunction*& uFunctionOut)
{
}

void ACPP_UFunction::TestMeta()
{
}

void ACPP_UFunction::BeginPlay()
{
	Super::BeginPlay();
	
	TestImplementableFunc(300);
}

// Called every frame
void ACPP_UFunction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	time += DeltaTime;
	// UE_LOG(LogTemp, Warning, TEXT("時間 %f"), time);

	if (time >= 10) 
	{
		TestNativeFunc();
		UE_LOG(LogTemp, Warning, TEXT("刪除"));
	}
}
 
