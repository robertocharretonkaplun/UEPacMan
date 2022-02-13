// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class PelletType : uint8;
#ifdef UEPACMAN_Pellet_generated_h
#error "Pellet.generated.h already included, missing '#pragma once' in Pellet.h"
#endif
#define UEPACMAN_Pellet_generated_h

#define UEPacman_Source_UEPacman_Pellet_h_17_DELEGATE \
struct _Script_UEPacman_eventPelletEatenEvent_Parms \
{ \
	PelletType pelletType; \
}; \
static inline void FPelletEatenEvent_DelegateWrapper(const FMulticastScriptDelegate& PelletEatenEvent, PelletType pelletType) \
{ \
	_Script_UEPacman_eventPelletEatenEvent_Parms Parms; \
	Parms.pelletType=pelletType; \
	PelletEatenEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UEPacman_Source_UEPacman_Pellet_h_22_SPARSE_DATA
#define UEPacman_Source_UEPacman_Pellet_h_22_RPC_WRAPPERS
#define UEPacman_Source_UEPacman_Pellet_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define UEPacman_Source_UEPacman_Pellet_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPellet(); \
	friend struct Z_Construct_UClass_APellet_Statics; \
public: \
	DECLARE_CLASS(APellet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEPacman"), NO_API) \
	DECLARE_SERIALIZER(APellet)


#define UEPacman_Source_UEPacman_Pellet_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAPellet(); \
	friend struct Z_Construct_UClass_APellet_Statics; \
public: \
	DECLARE_CLASS(APellet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UEPacman"), NO_API) \
	DECLARE_SERIALIZER(APellet)


#define UEPacman_Source_UEPacman_Pellet_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APellet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APellet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APellet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APellet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APellet(APellet&&); \
	NO_API APellet(const APellet&); \
public:


#define UEPacman_Source_UEPacman_Pellet_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APellet(APellet&&); \
	NO_API APellet(const APellet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APellet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APellet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APellet)


#define UEPacman_Source_UEPacman_Pellet_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__eatSound() { return STRUCT_OFFSET(APellet, eatSound); }


#define UEPacman_Source_UEPacman_Pellet_h_19_PROLOG
#define UEPacman_Source_UEPacman_Pellet_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEPacman_Source_UEPacman_Pellet_h_22_PRIVATE_PROPERTY_OFFSET \
	UEPacman_Source_UEPacman_Pellet_h_22_SPARSE_DATA \
	UEPacman_Source_UEPacman_Pellet_h_22_RPC_WRAPPERS \
	UEPacman_Source_UEPacman_Pellet_h_22_INCLASS \
	UEPacman_Source_UEPacman_Pellet_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UEPacman_Source_UEPacman_Pellet_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UEPacman_Source_UEPacman_Pellet_h_22_PRIVATE_PROPERTY_OFFSET \
	UEPacman_Source_UEPacman_Pellet_h_22_SPARSE_DATA \
	UEPacman_Source_UEPacman_Pellet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UEPacman_Source_UEPacman_Pellet_h_22_INCLASS_NO_PURE_DECLS \
	UEPacman_Source_UEPacman_Pellet_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UEPACMAN_API UClass* StaticClass<class APellet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UEPacman_Source_UEPacman_Pellet_h


#define FOREACH_ENUM_PELLETTYPE(op) \
	op(PelletType::NORMAL) \
	op(PelletType::SPECIAL) 

enum class PelletType : uint8;
template<> UEPACMAN_API UEnum* StaticEnum<PelletType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
