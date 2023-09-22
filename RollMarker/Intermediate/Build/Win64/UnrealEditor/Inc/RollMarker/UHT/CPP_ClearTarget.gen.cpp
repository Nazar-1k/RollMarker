// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollMarker/Target/CPP_ClearTarget.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_ClearTarget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_BaseTarget();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_ClearTarget();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_ClearTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RollMarker();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_ClearTarget::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NarmalImpuls);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NarmalImpuls,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ACPP_ClearTarget::StaticRegisterNativesACPP_ClearTarget()
	{
		UClass* Class = ACPP_ClearTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ACPP_ClearTarget::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics
	{
		struct CPP_ClearTarget_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NarmalImpuls;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NarmalImpuls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_ClearTarget_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_ClearTarget_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_ClearTarget_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_NarmalImpuls = { "NarmalImpuls", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_ClearTarget_eventOnHit_Parms, NarmalImpuls), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_ClearTarget_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_NarmalImpuls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set mark on Hit */" },
		{ "ModuleRelativePath", "Target/CPP_ClearTarget.h" },
		{ "ToolTip", "Set mark on Hit" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_ClearTarget, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::CPP_ClearTarget_eventOnHit_Parms), Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_ClearTarget_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_ClearTarget_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_ClearTarget);
	UClass* Z_Construct_UClass_ACPP_ClearTarget_NoRegister()
	{
		return ACPP_ClearTarget::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_ClearTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_ClearTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACPP_BaseTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_RollMarker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_ClearTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_ClearTarget_OnHit, "OnHit" }, // 4202251228
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_ClearTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Target/CPP_ClearTarget.h" },
		{ "ModuleRelativePath", "Target/CPP_ClearTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_ClearTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_ClearTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_ClearTarget_Statics::ClassParams = {
		&ACPP_ClearTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_ClearTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_ClearTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_ClearTarget()
	{
		if (!Z_Registration_Info_UClass_ACPP_ClearTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_ClearTarget.OuterSingleton, Z_Construct_UClass_ACPP_ClearTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_ClearTarget.OuterSingleton;
	}
	template<> ROLLMARKER_API UClass* StaticClass<ACPP_ClearTarget>()
	{
		return ACPP_ClearTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_ClearTarget);
	ACPP_ClearTarget::~ACPP_ClearTarget() {}
	struct Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_ClearTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_ClearTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_ClearTarget, ACPP_ClearTarget::StaticClass, TEXT("ACPP_ClearTarget"), &Z_Registration_Info_UClass_ACPP_ClearTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_ClearTarget), 2711811706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_ClearTarget_h_3178921757(TEXT("/Script/RollMarker"),
		Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_ClearTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_ClearTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
