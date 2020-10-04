// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRD_PERSON_SHOOTER_Shooter_generated_h
#error "Shooter.generated.h already included, missing '#pragma once' in Shooter.h"
#endif
#define THIRD_PERSON_SHOOTER_Shooter_generated_h

#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_SPARSE_DATA
#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDead);


#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDead);


#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooter(); \
	friend struct Z_Construct_UClass_AShooter_Statics; \
public: \
	DECLARE_CLASS(AShooter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Third_Person_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooter)


#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAShooter(); \
	friend struct Z_Construct_UClass_AShooter_Statics; \
public: \
	DECLARE_CLASS(AShooter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Third_Person_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AShooter)


#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter(AShooter&&); \
	NO_API AShooter(const AShooter&); \
public:


#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter(AShooter&&); \
	NO_API AShooter(const AShooter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooter)


#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RotationRate() { return STRUCT_OFFSET(AShooter, RotationRate); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AShooter, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AShooter, Health); } \
	FORCEINLINE static uint32 __PPO__GunClass() { return STRUCT_OFFSET(AShooter, GunClass); } \
	FORCEINLINE static uint32 __PPO__Gun() { return STRUCT_OFFSET(AShooter, Gun); }


#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_11_PROLOG
#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_PRIVATE_PROPERTY_OFFSET \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_SPARSE_DATA \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_RPC_WRAPPERS \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_INCLASS \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_PRIVATE_PROPERTY_OFFSET \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_SPARSE_DATA \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_INCLASS_NO_PURE_DECLS \
	Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRD_PERSON_SHOOTER_API UClass* StaticClass<class AShooter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Third_Person_Shooter_Source_Third_Person_Shooter_Shooter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
