// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomWordSearch/WordSearchGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWordSearchGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RANDOMWORDSEARCH_API UClass* Z_Construct_UClass_AWordSearchGameMode();
	RANDOMWORDSEARCH_API UClass* Z_Construct_UClass_AWordSearchGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RandomWordSearch();
// End Cross Module References
	void AWordSearchGameMode::StaticRegisterNativesAWordSearchGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWordSearchGameMode);
	UClass* Z_Construct_UClass_AWordSearchGameMode_NoRegister()
	{
		return AWordSearchGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWordSearchGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWordSearchGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomWordSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWordSearchGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWordSearchGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WordSearchGameMode.h" },
		{ "ModuleRelativePath", "WordSearchGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWordSearchGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWordSearchGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWordSearchGameMode_Statics::ClassParams = {
		&AWordSearchGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWordSearchGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWordSearchGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWordSearchGameMode()
	{
		if (!Z_Registration_Info_UClass_AWordSearchGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWordSearchGameMode.OuterSingleton, Z_Construct_UClass_AWordSearchGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWordSearchGameMode.OuterSingleton;
	}
	template<> RANDOMWORDSEARCH_API UClass* StaticClass<AWordSearchGameMode>()
	{
		return AWordSearchGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWordSearchGameMode);
	AWordSearchGameMode::~AWordSearchGameMode() {}
	struct Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWordSearchGameMode, AWordSearchGameMode::StaticClass, TEXT("AWordSearchGameMode"), &Z_Registration_Info_UClass_AWordSearchGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWordSearchGameMode), 1739887753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGameMode_h_1154954983(TEXT("/Script/RandomWordSearch"),
		Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
