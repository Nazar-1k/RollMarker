// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollMarker/Player/CPP_RollPlayerGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_RollPlayerGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_RollPlayerGameModeBase();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_RollPlayerGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RollMarker();
// End Cross Module References
	void ACPP_RollPlayerGameModeBase::StaticRegisterNativesACPP_RollPlayerGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_RollPlayerGameModeBase);
	UClass* Z_Construct_UClass_ACPP_RollPlayerGameModeBase_NoRegister()
	{
		return ACPP_RollPlayerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_RollPlayerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_RollPlayerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RollMarker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/CPP_RollPlayerGameModeBase.h" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_RollPlayerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_RollPlayerGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_RollPlayerGameModeBase_Statics::ClassParams = {
		&ACPP_RollPlayerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_RollPlayerGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACPP_RollPlayerGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_RollPlayerGameModeBase.OuterSingleton, Z_Construct_UClass_ACPP_RollPlayerGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_RollPlayerGameModeBase.OuterSingleton;
	}
	template<> ROLLMARKER_API UClass* StaticClass<ACPP_RollPlayerGameModeBase>()
	{
		return ACPP_RollPlayerGameModeBase::StaticClass();
	}
	ACPP_RollPlayerGameModeBase::ACPP_RollPlayerGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_RollPlayerGameModeBase);
	ACPP_RollPlayerGameModeBase::~ACPP_RollPlayerGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayerGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayerGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_RollPlayerGameModeBase, ACPP_RollPlayerGameModeBase::StaticClass, TEXT("ACPP_RollPlayerGameModeBase"), &Z_Registration_Info_UClass_ACPP_RollPlayerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_RollPlayerGameModeBase), 4036190422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayerGameModeBase_h_958097572(TEXT("/Script/RollMarker"),
		Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayerGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayerGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
