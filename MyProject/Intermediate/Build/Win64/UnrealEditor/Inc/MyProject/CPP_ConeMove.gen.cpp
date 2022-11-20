// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/CPP_ConeMove.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_ConeMove() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ACPP_ConeMove_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ACPP_ConeMove();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACPP_ConeMove::StaticRegisterNativesACPP_ConeMove()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_ConeMove);
	UClass* Z_Construct_UClass_ACPP_ConeMove_NoRegister()
	{
		return ACPP_ConeMove::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_ConeMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isUp_MetaData[];
#endif
		static void NewProp_isUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_ConeMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_ConeMove.h" },
		{ "ModuleRelativePath", "Public/CPP_ConeMove.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_ConeMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_ConeMesh = { "ConeMesh", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, ConeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_ConeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_ConeMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_MetaData[] = {
		{ "Category", "ConeActor" },
		{ "ModuleRelativePath", "Public/CPP_ConeMove.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_SetBit(void* Obj)
	{
		((ACPP_ConeMove*)Obj)->isUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp = { "isUp", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_ConeMove), &Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_minHeight_MetaData[] = {
		{ "Category", "ConeActor" },
		{ "ModuleRelativePath", "Public/CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_minHeight = { "minHeight", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, minHeight), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_minHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_minHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_maxHeight_MetaData[] = {
		{ "Category", "ConeActor" },
		{ "ModuleRelativePath", "Public/CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_maxHeight = { "maxHeight", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, maxHeight), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_maxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_maxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_max_MetaData[] = {
		{ "Category", "ConeActor" },
		{ "ModuleRelativePath", "Public/CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, max), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "ConeActor" },
		{ "ModuleRelativePath", "Public/CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, speed), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_currentHeight_MetaData[] = {
		{ "Category", "ConeActor" },
		{ "ModuleRelativePath", "Public/CPP_ConeMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_currentHeight = { "currentHeight", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_ConeMove, currentHeight), METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_currentHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_currentHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_ConeMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_ConeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_isUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_minHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_maxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_ConeMove_Statics::NewProp_currentHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_ConeMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ConeMove>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ConeMove_Statics::ClassParams = {
		&ACPP_ConeMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_ConeMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_ConeMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ConeMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_ConeMove()
	{
		if (!Z_Registration_Info_UClass_ACPP_ConeMove.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_ConeMove.OuterSingleton, Z_Construct_UClass_ACPP_ConeMove_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_ConeMove.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ACPP_ConeMove>()
	{
		return ACPP_ConeMove::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ConeMove);
	struct Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_ConeMove_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_ConeMove_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_ConeMove, ACPP_ConeMove::StaticClass, TEXT("ACPP_ConeMove"), &Z_Registration_Info_UClass_ACPP_ConeMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_ConeMove), 3905433776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_ConeMove_h_1553692892(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_ConeMove_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Source_MyProject_Public_CPP_ConeMove_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
