// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomWordSearch/FDictionaryStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFDictionaryStruct() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	RANDOMWORDSEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FDictionaryStruct();
	UPackage* Z_Construct_UPackage__Script_RandomWordSearch();
// End Cross Module References

static_assert(std::is_polymorphic<FDictionaryStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDictionaryStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DictionaryStruct;
class UScriptStruct* FDictionaryStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DictionaryStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DictionaryStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDictionaryStruct, (UObject*)Z_Construct_UPackage__Script_RandomWordSearch(), TEXT("DictionaryStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DictionaryStruct.OuterSingleton;
}
template<> RANDOMWORDSEARCH_API UScriptStruct* StaticStruct<FDictionaryStruct>()
{
	return FDictionaryStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDictionaryStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Word_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDictionaryStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FDictionaryStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDictionaryStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDictionaryStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDictionaryStruct_Statics::NewProp_Word_MetaData[] = {
		{ "Category", "DictionaryStruct" },
		{ "ModuleRelativePath", "FDictionaryStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDictionaryStruct_Statics::NewProp_Word = { "Word", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDictionaryStruct, Word), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDictionaryStruct_Statics::NewProp_Word_MetaData), Z_Construct_UScriptStruct_FDictionaryStruct_Statics::NewProp_Word_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDictionaryStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDictionaryStruct_Statics::NewProp_Word,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDictionaryStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RandomWordSearch,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DictionaryStruct",
		Z_Construct_UScriptStruct_FDictionaryStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDictionaryStruct_Statics::PropPointers),
		sizeof(FDictionaryStruct),
		alignof(FDictionaryStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDictionaryStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDictionaryStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDictionaryStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDictionaryStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DictionaryStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DictionaryStruct.InnerSingleton, Z_Construct_UScriptStruct_FDictionaryStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DictionaryStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_FDictionaryStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_FDictionaryStruct_h_Statics::ScriptStructInfo[] = {
		{ FDictionaryStruct::StaticStruct, Z_Construct_UScriptStruct_FDictionaryStruct_Statics::NewStructOps, TEXT("DictionaryStruct"), &Z_Registration_Info_UScriptStruct_DictionaryStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDictionaryStruct), 2878393532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_FDictionaryStruct_h_2354095669(TEXT("/Script/RandomWordSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_FDictionaryStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_FDictionaryStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
