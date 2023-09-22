// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollMarker/Player/CPP_RollPlayer.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_RollPlayer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_RollPlayer();
	ROLLMARKER_API UClass* Z_Construct_UClass_ACPP_RollPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RollMarker();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_RollPlayer::execOnHit)
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
	void ACPP_RollPlayer::StaticRegisterNativesACPP_RollPlayer()
	{
		UClass* Class = ACPP_RollPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &ACPP_RollPlayer::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics
	{
		struct CPP_RollPlayer_eventOnHit_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_RollPlayer_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_RollPlayer_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_RollPlayer_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_NarmalImpuls = { "NarmalImpuls", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_RollPlayer_eventOnHit_Parms, NarmalImpuls), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_RollPlayer_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_NarmalImpuls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set  Mark for Target on Hit */" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Set  Mark for Target on Hit" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_RollPlayer, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::CPP_RollPlayer_eventOnHit_Parms), Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_RollPlayer_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_RollPlayer_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_RollPlayer);
	UClass* Z_Construct_UClass_ACPP_RollPlayer_NoRegister()
	{
		return ACPP_RollPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_RollPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereStaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereStaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedSphere_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowHeightAboveBall_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowHeightAboveBall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxArrowLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArrowLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinArrowLenght_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinArrowLenght;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_RollPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RollMarker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_RollPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_RollPlayer_OnHit, "OnHit" }, // 3011507223
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/CPP_RollPlayer.h" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SphereStaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Components" },
		{ "Comment", "/** Player Sphere */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Player Sphere" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SphereStaticMeshComponent = { "SphereStaticMeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_RollPlayer, SphereStaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SphereStaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SphereStaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Components" },
		{ "Comment", "/** Player Arrow */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Player Arrow" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_RollPlayer, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Components | Camera" },
		{ "Comment", "/** Camera boom */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Camera boom" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_RollPlayer, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Components | Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_RollPlayer, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SpeedSphere_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Speed Sphere */" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Speed Sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SpeedSphere = { "SpeedSphere", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_RollPlayer, SpeedSphere), METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SpeedSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SpeedSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowHeightAboveBall_MetaData[] = {
		{ "Category", "Settings | Arrow" },
		{ "Comment", "/** Height above the ball */" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Height above the ball" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowHeightAboveBall = { "ArrowHeightAboveBall", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_RollPlayer, ArrowHeightAboveBall), METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowHeightAboveBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowHeightAboveBall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Settings | Arrow" },
		{ "Comment", "/** Maximum Speed */" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Maximum Speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_RollPlayer, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxArrowLength_MetaData[] = {
		{ "Category", "Settings | Arrow" },
		{ "Comment", "/** Maximum Arrow Length */" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Maximum Arrow Length" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxArrowLength = { "MaxArrowLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_RollPlayer, MaxArrowLength), METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxArrowLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxArrowLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MinArrowLenght_MetaData[] = {
		{ "Category", "Settings | Arrow" },
		{ "Comment", "/** Minimum Arrow Length */" },
		{ "ModuleRelativePath", "Player/CPP_RollPlayer.h" },
		{ "ToolTip", "Minimum Arrow Length" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MinArrowLenght = { "MinArrowLenght", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_RollPlayer, MinArrowLenght), METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MinArrowLenght_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MinArrowLenght_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_RollPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SphereStaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_SpeedSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_ArrowHeightAboveBall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MaxArrowLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RollPlayer_Statics::NewProp_MinArrowLenght,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_RollPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_RollPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_RollPlayer_Statics::ClassParams = {
		&ACPP_RollPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_RollPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_RollPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RollPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_RollPlayer()
	{
		if (!Z_Registration_Info_UClass_ACPP_RollPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_RollPlayer.OuterSingleton, Z_Construct_UClass_ACPP_RollPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_RollPlayer.OuterSingleton;
	}
	template<> ROLLMARKER_API UClass* StaticClass<ACPP_RollPlayer>()
	{
		return ACPP_RollPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_RollPlayer);
	ACPP_RollPlayer::~ACPP_RollPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_RollPlayer, ACPP_RollPlayer::StaticClass, TEXT("ACPP_RollPlayer"), &Z_Registration_Info_UClass_ACPP_RollPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_RollPlayer), 920412911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_3981249871(TEXT("/Script/RollMarker"),
		Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
