// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACPP_UFunction;
#ifdef MYPROJECT_CPP_UFunction_generated_h
#error "CPP_UFunction.generated.h already included, missing '#pragma once' in CPP_UFunction.h"
#endif
#define MYPROJECT_CPP_UFunction_generated_h

#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_SPARSE_DATA
#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_RPC_WRAPPERS \
	virtual void TestNativeFunc_Implementation(); \
 \
	DECLARE_FUNCTION(execTestMeta); \
	DECLARE_FUNCTION(execTestInputOutput_3); \
	DECLARE_FUNCTION(execTestInputOutput_2); \
	DECLARE_FUNCTION(execTestInputConstOutput); \
	DECLARE_FUNCTION(execTestInputOutput); \
	DECLARE_FUNCTION(execTestNativeFunc); \
	DECLARE_FUNCTION(execTestFuncPureConst); \
	DECLARE_FUNCTION(execTestFuncPure); \
	DECLARE_FUNCTION(execTestFunc);


#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestMeta); \
	DECLARE_FUNCTION(execTestInputOutput_3); \
	DECLARE_FUNCTION(execTestInputOutput_2); \
	DECLARE_FUNCTION(execTestInputConstOutput); \
	DECLARE_FUNCTION(execTestInputOutput); \
	DECLARE_FUNCTION(execTestNativeFunc); \
	DECLARE_FUNCTION(execTestFuncPureConst); \
	DECLARE_FUNCTION(execTestFuncPure); \
	DECLARE_FUNCTION(execTestFunc);


#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_EVENT_PARMS \
	struct CPP_UFunction_eventTestImplementableFunc_Parms \
	{ \
		int32 value; \
	};


#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_CALLBACK_WRAPPERS
#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_UFunction(); \
	friend struct Z_Construct_UClass_ACPP_UFunction_Statics; \
public: \
	DECLARE_CLASS(ACPP_UFunction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ACPP_UFunction)


#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACPP_UFunction(); \
	friend struct Z_Construct_UClass_ACPP_UFunction_Statics; \
public: \
	DECLARE_CLASS(ACPP_UFunction, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ACPP_UFunction)


#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_UFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_UFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_UFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_UFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_UFunction(ACPP_UFunction&&); \
	NO_API ACPP_UFunction(const ACPP_UFunction&); \
public:


#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_UFunction(ACPP_UFunction&&); \
	NO_API ACPP_UFunction(const ACPP_UFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_UFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_UFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_UFunction)


#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_7_PROLOG \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_EVENT_PARMS


#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_RPC_WRAPPERS \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_CALLBACK_WRAPPERS \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_INCLASS \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_SPARSE_DATA \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_CALLBACK_WRAPPERS \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Source_MyProject_Public_CPP_UFunction_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ACPP_UFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Source_MyProject_Public_CPP_UFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
