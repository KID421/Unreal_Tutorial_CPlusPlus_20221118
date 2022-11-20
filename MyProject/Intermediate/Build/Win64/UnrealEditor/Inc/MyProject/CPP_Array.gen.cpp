// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/CPP_Array.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Array() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ACPP_Array_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ACPP_Array();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ACPP_Array::StaticRegisterNativesACPP_Array()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Array);
	UClass* Z_Construct_UClass_ACPP_Array_NoRegister()
	{
		return ACPP_Array::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Array_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_arrayVector_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_arrayVector_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_arrayVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Array_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Array_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Array.h" },
		{ "ModuleRelativePath", "Public/CPP_Array.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_Array_Statics::NewProp_arrayVector_Inner = { "arrayVector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Array_Statics::NewProp_arrayVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPP_Array.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_Array_Statics::NewProp_arrayVector = { "arrayVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Array, arrayVector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_Array_Statics::NewProp_arrayVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Array_Statics::NewProp_arrayVector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Array_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Array_Statics::NewProp_arrayVector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Array_Statics::NewProp_arrayVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Array_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Array>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Array_Statics::ClassParams = {
		&ACPP_Array::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_Array_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Array_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Array_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Array_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Array()
	{
		if (!Z_Registration_Info_UClass_ACPP_Array.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Array.OuterSingleton, Z_Construct_UClass_ACPP_Array_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Array.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ACPP_Array>()
	{
		return ACPP_Array::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Array);
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_Array_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_Array_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Array, ACPP_Array::StaticClass, TEXT("ACPP_Array"), &Z_Registration_Info_UClass_ACPP_Array, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Array), 2684255965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_Array_h_191251168(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_Array_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_Array_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
