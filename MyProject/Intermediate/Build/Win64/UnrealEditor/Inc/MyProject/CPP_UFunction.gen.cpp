// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/CPP_UFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_UFunction() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ACPP_UFunction_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ACPP_UFunction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_UFunction::execTestMeta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestMeta();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_UFunction::execTestInputOutput_3)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inValue);
		P_GET_STRUCT(FVector,Z_Param_inVector);
		P_GET_OBJECT(ACPP_UFunction,Z_Param_uFunctionIn);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outValue);
		P_GET_UBOOL_REF(Z_Param_Out_outValueBool);
		P_GET_OBJECT_REF(ACPP_UFunction,Z_Param_Out_uFunctionOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestInputOutput_3(Z_Param_inValue,Z_Param_inVector,Z_Param_uFunctionIn,Z_Param_Out_outValue,Z_Param_Out_outValueBool,Z_Param_Out_uFunctionOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_UFunction::execTestInputOutput_2)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outValue);
		P_GET_UBOOL_REF(Z_Param_Out_outValueBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestInputOutput_2(Z_Param_inValue,Z_Param_Out_outValue,Z_Param_Out_outValueBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_UFunction::execTestInputConstOutput)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestInputConstOutput(Z_Param_inValue,Z_Param_Out_outValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_UFunction::execTestInputOutput)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestInputOutput(Z_Param_inValue,Z_Param_Out_outValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_UFunction::execTestNativeFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestNativeFunc_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_UFunction::execTestFuncPureConst)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->TestFuncPureConst();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_UFunction::execTestFuncPure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->TestFuncPure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_UFunction::execTestFunc)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestFunc(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_ACPP_UFunction_TestImplementableFunc = FName(TEXT("TestImplementableFunc"));
	void ACPP_UFunction::TestImplementableFunc(int32 value)
	{
		CPP_UFunction_eventTestImplementableFunc_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_UFunction_TestImplementableFunc),&Parms);
	}
	static FName NAME_ACPP_UFunction_TestNativeFunc = FName(TEXT("TestNativeFunc"));
	void ACPP_UFunction::TestNativeFunc()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACPP_UFunction_TestNativeFunc),NULL);
	}
	void ACPP_UFunction::StaticRegisterNativesACPP_UFunction()
	{
		UClass* Class = ACPP_UFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestFunc", &ACPP_UFunction::execTestFunc },
			{ "TestFuncPure", &ACPP_UFunction::execTestFuncPure },
			{ "TestFuncPureConst", &ACPP_UFunction::execTestFuncPureConst },
			{ "TestInputConstOutput", &ACPP_UFunction::execTestInputConstOutput },
			{ "TestInputOutput", &ACPP_UFunction::execTestInputOutput },
			{ "TestInputOutput_2", &ACPP_UFunction::execTestInputOutput_2 },
			{ "TestInputOutput_3", &ACPP_UFunction::execTestInputOutput_3 },
			{ "TestMeta", &ACPP_UFunction::execTestMeta },
			{ "TestNativeFunc", &ACPP_UFunction::execTestNativeFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics
	{
		struct CPP_UFunction_eventTestFunc_Parms
		{
			int32 value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestFunc_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::CPP_UFunction_eventTestFunc_Parms), Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics
	{
		struct CPP_UFunction_eventTestFuncPure_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestFuncPure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestFuncPure", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::CPP_UFunction_eventTestFuncPure_Parms), Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestFuncPure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestFuncPure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics
	{
		struct CPP_UFunction_eventTestFuncPureConst_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestFuncPureConst_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestFuncPureConst", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::CPP_UFunction_eventTestFuncPureConst_Parms), Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestImplementableFunc_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestImplementableFunc", nullptr, nullptr, sizeof(CPP_UFunction_eventTestImplementableFunc_Parms), Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics
	{
		struct CPP_UFunction_eventTestInputConstOutput_Parms
		{
			int32 inValue;
			int32 outValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_inValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_outValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::NewProp_inValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::NewProp_inValue = { "inValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputConstOutput_Parms, inValue), METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::NewProp_inValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::NewProp_inValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::NewProp_outValue = { "outValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputConstOutput_Parms, outValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::NewProp_inValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::NewProp_outValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestInputConstOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::CPP_UFunction_eventTestInputConstOutput_Parms), Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics
	{
		struct CPP_UFunction_eventTestInputOutput_Parms
		{
			int32 inValue;
			int32 outValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_inValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_outValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::NewProp_inValue = { "inValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputOutput_Parms, inValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::NewProp_outValue = { "outValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputOutput_Parms, outValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::NewProp_inValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::NewProp_outValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestInputOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::CPP_UFunction_eventTestInputOutput_Parms), Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestInputOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics
	{
		struct CPP_UFunction_eventTestInputOutput_2_Parms
		{
			int32 inValue;
			int32 outValue;
			bool outValueBool;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_inValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_outValue;
		static void NewProp_outValueBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_outValueBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::NewProp_inValue = { "inValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputOutput_2_Parms, inValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::NewProp_outValue = { "outValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputOutput_2_Parms, outValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::NewProp_outValueBool_SetBit(void* Obj)
	{
		((CPP_UFunction_eventTestInputOutput_2_Parms*)Obj)->outValueBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::NewProp_outValueBool = { "outValueBool", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPP_UFunction_eventTestInputOutput_2_Parms), &Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::NewProp_outValueBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::NewProp_inValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::NewProp_outValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::NewProp_outValueBool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestInputOutput_2", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::CPP_UFunction_eventTestInputOutput_2_Parms), Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics
	{
		struct CPP_UFunction_eventTestInputOutput_3_Parms
		{
			int32 inValue;
			FVector inVector;
			ACPP_UFunction* uFunctionIn;
			int32 outValue;
			bool outValueBool;
			ACPP_UFunction* uFunctionOut;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_inValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_inVector;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_uFunctionIn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_outValue;
		static void NewProp_outValueBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_outValueBool;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_uFunctionOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_inValue = { "inValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputOutput_3_Parms, inValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_inVector = { "inVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputOutput_3_Parms, inVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_uFunctionIn = { "uFunctionIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputOutput_3_Parms, uFunctionIn), Z_Construct_UClass_ACPP_UFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_outValue = { "outValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputOutput_3_Parms, outValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_outValueBool_SetBit(void* Obj)
	{
		((CPP_UFunction_eventTestInputOutput_3_Parms*)Obj)->outValueBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_outValueBool = { "outValueBool", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPP_UFunction_eventTestInputOutput_3_Parms), &Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_outValueBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_uFunctionOut = { "uFunctionOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_UFunction_eventTestInputOutput_3_Parms, uFunctionOut), Z_Construct_UClass_ACPP_UFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_inValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_inVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_uFunctionIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_outValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_outValueBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::NewProp_uFunctionOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestInputOutput_3", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::CPP_UFunction_eventTestInputOutput_3_Parms), Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestMeta_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "DisplayName", "\xe6\x88\x91\xe7\x9a\x84\xe6\xb8\xac\xe8\xa9\xa6\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
		{ "Tooltip", "\xe6\x88\x91\xe7\x9a\x84\xe6\xb8\xac\xe8\xa9\xa6\xe5\x87\xbd\xe5\xbc\x8f\xe8\xaa\xaa\xe6\x98\x8e\xe6\x96\x87\xe5\xad\x97\xe3\x80\x82" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestMeta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestMeta", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestMeta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestMeta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestMeta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestMeta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_UFunction_TestNativeFunc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_UFunction_TestNativeFunc_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\x87\xbd\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_UFunction_TestNativeFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_UFunction, nullptr, "TestNativeFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_UFunction_TestNativeFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_UFunction_TestNativeFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_UFunction_TestNativeFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_UFunction_TestNativeFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_UFunction);
	UClass* Z_Construct_UClass_ACPP_UFunction_NoRegister()
	{
		return ACPP_UFunction::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_UFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_UFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_UFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_UFunction_TestFunc, "TestFunc" }, // 177361447
		{ &Z_Construct_UFunction_ACPP_UFunction_TestFuncPure, "TestFuncPure" }, // 168884753
		{ &Z_Construct_UFunction_ACPP_UFunction_TestFuncPureConst, "TestFuncPureConst" }, // 875145219
		{ &Z_Construct_UFunction_ACPP_UFunction_TestImplementableFunc, "TestImplementableFunc" }, // 1396105883
		{ &Z_Construct_UFunction_ACPP_UFunction_TestInputConstOutput, "TestInputConstOutput" }, // 221826260
		{ &Z_Construct_UFunction_ACPP_UFunction_TestInputOutput, "TestInputOutput" }, // 212676548
		{ &Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_2, "TestInputOutput_2" }, // 3056427988
		{ &Z_Construct_UFunction_ACPP_UFunction_TestInputOutput_3, "TestInputOutput_3" }, // 1916389736
		{ &Z_Construct_UFunction_ACPP_UFunction_TestMeta, "TestMeta" }, // 2185642424
		{ &Z_Construct_UFunction_ACPP_UFunction_TestNativeFunc, "TestNativeFunc" }, // 1282954730
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_UFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_UFunction.h" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_UFunction_Statics::NewProp_time_MetaData[] = {
		{ "Category", "\xe6\x88\x91\xe7\x9a\x84\xe5\xb1\xac\xe6\x80\xa7|\xe8\xb3\x87\xe6\x96\x99" },
		{ "ModuleRelativePath", "Public/CPP_UFunction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_UFunction_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_UFunction, time), METADATA_PARAMS(Z_Construct_UClass_ACPP_UFunction_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_UFunction_Statics::NewProp_time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_UFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_UFunction_Statics::NewProp_time,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_UFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_UFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_UFunction_Statics::ClassParams = {
		&ACPP_UFunction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_UFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_UFunction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_UFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_UFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_UFunction()
	{
		if (!Z_Registration_Info_UClass_ACPP_UFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_UFunction.OuterSingleton, Z_Construct_UClass_ACPP_UFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_UFunction.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ACPP_UFunction>()
	{
		return ACPP_UFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_UFunction);
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_UFunction, ACPP_UFunction::StaticClass, TEXT("ACPP_UFunction"), &Z_Registration_Info_UClass_ACPP_UFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_UFunction), 2734759861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_3201517602(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
