// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UEPacman/UEPacmanGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEPacmanGameModeBase() {}
// Cross Module References
	UEPACMAN_API UClass* Z_Construct_UClass_AUEPacmanGameModeBase_NoRegister();
	UEPACMAN_API UClass* Z_Construct_UClass_AUEPacmanGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UEPacman();
// End Cross Module References
	void AUEPacmanGameModeBase::StaticRegisterNativesAUEPacmanGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUEPacmanGameModeBase_NoRegister()
	{
		return AUEPacmanGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUEPacmanGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUEPacmanGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UEPacman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUEPacmanGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UEPacmanGameModeBase.h" },
		{ "ModuleRelativePath", "UEPacmanGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUEPacmanGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUEPacmanGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUEPacmanGameModeBase_Statics::ClassParams = {
		&AUEPacmanGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUEPacmanGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUEPacmanGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUEPacmanGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUEPacmanGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUEPacmanGameModeBase, 1268489283);
	template<> UEPACMAN_API UClass* StaticClass<AUEPacmanGameModeBase>()
	{
		return AUEPacmanGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUEPacmanGameModeBase(Z_Construct_UClass_AUEPacmanGameModeBase, &AUEPacmanGameModeBase::StaticClass, TEXT("/Script/UEPacman"), TEXT("AUEPacmanGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUEPacmanGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
