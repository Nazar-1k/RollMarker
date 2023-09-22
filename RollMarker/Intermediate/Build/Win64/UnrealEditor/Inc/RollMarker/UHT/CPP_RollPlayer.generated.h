// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CPP_RollPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ROLLMARKER_CPP_RollPlayer_generated_h
#error "CPP_RollPlayer.generated.h already included, missing '#pragma once' in CPP_RollPlayer.h"
#endif
#define ROLLMARKER_CPP_RollPlayer_generated_h

#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_SPARSE_DATA
#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_ACCESSORS
#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_RollPlayer(); \
	friend struct Z_Construct_UClass_ACPP_RollPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPP_RollPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollMarker"), NO_API) \
	DECLARE_SERIALIZER(ACPP_RollPlayer)


#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACPP_RollPlayer(); \
	friend struct Z_Construct_UClass_ACPP_RollPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPP_RollPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollMarker"), NO_API) \
	DECLARE_SERIALIZER(ACPP_RollPlayer)


#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_RollPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_RollPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_RollPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_RollPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_RollPlayer(ACPP_RollPlayer&&); \
	NO_API ACPP_RollPlayer(const ACPP_RollPlayer&); \
public: \
	NO_API virtual ~ACPP_RollPlayer();


#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_RollPlayer(ACPP_RollPlayer&&); \
	NO_API ACPP_RollPlayer(const ACPP_RollPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_RollPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_RollPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_RollPlayer) \
	NO_API virtual ~ACPP_RollPlayer();


#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_9_PROLOG
#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_SPARSE_DATA \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_RPC_WRAPPERS \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_ACCESSORS \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_INCLASS \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_SPARSE_DATA \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_ACCESSORS \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLLMARKER_API UClass* StaticClass<class ACPP_RollPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Xiaomi_Desktop_AlphaNova_0__Test_task_RollMarker_RollMarker_Source_RollMarker_Player_CPP_RollPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
