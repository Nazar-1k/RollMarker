// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollMarker/Target/CPP_BaseTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_BaseTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_BaseTarget();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_BaseTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RollMarker();
// End Cross Module References
	void ACPP_BaseTarget::StaticRegisterNativesACPP_BaseTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_BaseTarget);
	UClass* Z_Construct_UClass_ACPP_BaseTarget_NoRegister()
	{
		return ACPP_BaseTarget::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_BaseTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SquareStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SquareStaticMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpIntervalMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpIntervalMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpIntervalMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpIntervalMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_BaseTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RollMarker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BaseTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Target/CPP_BaseTarget.h" },
		{ "ModuleRelativePath", "Target/CPP_BaseTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_SquareStaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "/** Target Sphere */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Target/CPP_BaseTarget.h" },
		{ "ToolTip", "Target Sphere" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_SquareStaticMeshComponent = { "SquareStaticMeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_BaseTarget, SquareStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_SquareStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_SquareStaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_MaterialArray_Inner = { "MaterialArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_MaterialArray_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Array Material */" },
		{ "ModuleRelativePath", "Target/CPP_BaseTarget.h" },
		{ "ToolTip", "Array Material" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_MaterialArray = { "MaterialArray", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_BaseTarget, MaterialArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_MaterialArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_MaterialArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpForce_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Jump Force */" },
		{ "ModuleRelativePath", "Target/CPP_BaseTarget.h" },
		{ "ToolTip", "Jump Force" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_BaseTarget, JumpForce), METADATA_PARAMS(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Interval of jumps Min for the timer */" },
		{ "ModuleRelativePath", "Target/CPP_BaseTarget.h" },
		{ "ToolTip", "Interval of jumps Min for the timer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMin = { "JumpIntervalMin", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_BaseTarget, JumpIntervalMin), METADATA_PARAMS(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Interval of jumps Max for the timer */" },
		{ "ModuleRelativePath", "Target/CPP_BaseTarget.h" },
		{ "ToolTip", "Interval of jumps Max for the timer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMax = { "JumpIntervalMax", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_BaseTarget, JumpIntervalMax), METADATA_PARAMS(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_BaseTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_SquareStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_MaterialArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_MaterialArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_BaseTarget_Statics::NewProp_JumpIntervalMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_BaseTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_BaseTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_BaseTarget_Statics::ClassParams = {
		&ACPP_BaseTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_BaseTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseTarget_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_BaseTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_BaseTarget()
	{
		if (!Z_Registration_Info_UClass_ACPP_BaseTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_BaseTarget.OuterSingleton, Z_Construct_UClass_ACPP_BaseTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_BaseTarget.OuterSingleton;
	}
	template<> ROLLMARKER_API UClass* StaticClass<ACPP_BaseTarget>()
	{
		return ACPP_BaseTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_BaseTarget);
	ACPP_BaseTarget::~ACPP_BaseTarget() {}
	struct Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_BaseTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_BaseTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_BaseTarget, ACPP_BaseTarget::StaticClass, TEXT("ACPP_BaseTarget"), &Z_Registration_Info_UClass_ACPP_BaseTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_BaseTarget), 956942039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_BaseTarget_h_3855253195(TEXT("/Script/RollMarker"),
		Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_BaseTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_CPP_BaseTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
