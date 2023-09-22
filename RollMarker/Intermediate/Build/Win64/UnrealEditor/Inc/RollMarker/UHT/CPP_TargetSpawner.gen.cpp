// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollMarker/Target/Spawner/CPP_TargetSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_TargetSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_CleanerTarget_NoRegister();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_ClearTarget_NoRegister();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_TargetSpawner();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_TargetSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RollMarker();
// End Cross Module References
	void ACPP_TargetSpawner::StaticRegisterNativesACPP_TargetSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_TargetSpawner);
	UClass* Z_Construct_UClass_ACPP_TargetSpawner_NoRegister()
	{
		return ACPP_TargetSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_TargetSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnZone_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawnCleanerTarget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawnCleanerTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawnClearTarget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawnClearTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountCleanerTarget_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountCleanerTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountClearTarget_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountClearTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_TargetSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RollMarker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TargetSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Target/Spawner/CPP_TargetSpawner.h" },
		{ "ModuleRelativePath", "Target/Spawner/CPP_TargetSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_SpawnZone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Components | Camera" },
		{ "Comment", "/** Spawn Zone */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Target/Spawner/CPP_TargetSpawner.h" },
		{ "ToolTip", "Spawn Zone" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_SpawnZone = { "SpawnZone", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TargetSpawner, SpawnZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_SpawnZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_SpawnZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnCleanerTarget_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Target/Spawner/CPP_TargetSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnCleanerTarget = { "ActorToSpawnCleanerTarget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TargetSpawner, ActorToSpawnCleanerTarget), Z_Construct_UClass_UClass, Z_Construct_UClass_ACPP_CleanerTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnCleanerTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnCleanerTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnClearTarget_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Target/Spawner/CPP_TargetSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnClearTarget = { "ActorToSpawnClearTarget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TargetSpawner, ActorToSpawnClearTarget), Z_Construct_UClass_UClass, Z_Construct_UClass_ACPP_ClearTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnClearTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnClearTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountCleanerTarget_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Target/Spawner/CPP_TargetSpawner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountCleanerTarget = { "CountCleanerTarget", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TargetSpawner, CountCleanerTarget), METADATA_PARAMS(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountCleanerTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountCleanerTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountClearTarget_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Target/Spawner/CPP_TargetSpawner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountClearTarget = { "CountClearTarget", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_TargetSpawner, CountClearTarget), METADATA_PARAMS(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountClearTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountClearTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_TargetSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_SpawnZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnCleanerTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_ActorToSpawnClearTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountCleanerTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_TargetSpawner_Statics::NewProp_CountClearTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_TargetSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_TargetSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_TargetSpawner_Statics::ClassParams = {
		&ACPP_TargetSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_TargetSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TargetSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_TargetSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_TargetSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_TargetSpawner()
	{
		if (!Z_Registration_Info_UClass_ACPP_TargetSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_TargetSpawner.OuterSingleton, Z_Construct_UClass_ACPP_TargetSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_TargetSpawner.OuterSingleton;
	}
	template<> ROLLMARKER_API UClass* StaticClass<ACPP_TargetSpawner>()
	{
		return ACPP_TargetSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_TargetSpawner);
	ACPP_TargetSpawner::~ACPP_TargetSpawner() {}
	struct Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_Spawner_CPP_TargetSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_Spawner_CPP_TargetSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_TargetSpawner, ACPP_TargetSpawner::StaticClass, TEXT("ACPP_TargetSpawner"), &Z_Registration_Info_UClass_ACPP_TargetSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_TargetSpawner), 1535646073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_Spawner_CPP_TargetSpawner_h_2452968084(TEXT("/Script/RollMarker"),
		Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_Spawner_CPP_TargetSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Target_Spawner_CPP_TargetSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
