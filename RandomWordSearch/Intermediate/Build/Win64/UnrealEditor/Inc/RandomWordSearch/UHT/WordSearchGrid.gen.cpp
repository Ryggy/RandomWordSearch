// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RandomWordSearch/WordSearchGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWordSearchGrid() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RANDOMWORDSEARCH_API UClass* Z_Construct_UClass_UWordSearchGrid();
	RANDOMWORDSEARCH_API UClass* Z_Construct_UClass_UWordSearchGrid_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RandomWordSearch();
// End Cross Module References
	DEFINE_FUNCTION(UWordSearchGrid::execFindWord)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Word);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindWord(Z_Param_Word);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWordSearchGrid::execPopulateGrid)
	{
		P_GET_TARRAY(FString,Z_Param_WordsToPlace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateGrid(Z_Param_WordsToPlace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWordSearchGrid::execInitialiseGrid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Rows);
		P_GET_PROPERTY(FIntProperty,Z_Param_Columns);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitialiseGrid(Z_Param_Rows,Z_Param_Columns);
		P_NATIVE_END;
	}
	void UWordSearchGrid::StaticRegisterNativesUWordSearchGrid()
	{
		UClass* Class = UWordSearchGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindWord", &UWordSearchGrid::execFindWord },
			{ "InitialiseGrid", &UWordSearchGrid::execInitialiseGrid },
			{ "PopulateGrid", &UWordSearchGrid::execPopulateGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics
	{
		struct WordSearchGrid_eventFindWord_Parms
		{
			FString Word;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Word_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Word;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::NewProp_Word_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::NewProp_Word = { "Word", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WordSearchGrid_eventFindWord_Parms, Word), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::NewProp_Word_MetaData), Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::NewProp_Word_MetaData) };
	void Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WordSearchGrid_eventFindWord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WordSearchGrid_eventFindWord_Parms), &Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::NewProp_Word,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordSearchGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWordSearchGrid, nullptr, "FindWord", nullptr, nullptr, Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::WordSearchGrid_eventFindWord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::WordSearchGrid_eventFindWord_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWordSearchGrid_FindWord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWordSearchGrid_FindWord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics
	{
		struct WordSearchGrid_eventInitialiseGrid_Parms
		{
			int32 Rows;
			int32 Columns;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rows;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Columns;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WordSearchGrid_eventInitialiseGrid_Parms, Rows), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WordSearchGrid_eventInitialiseGrid_Parms, Columns), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::NewProp_Rows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::NewProp_Columns,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordSearchGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWordSearchGrid, nullptr, "InitialiseGrid", nullptr, nullptr, Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::WordSearchGrid_eventInitialiseGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::WordSearchGrid_eventInitialiseGrid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics
	{
		struct WordSearchGrid_eventPopulateGrid_Parms
		{
			TArray<FString> WordsToPlace;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_WordsToPlace_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WordsToPlace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::NewProp_WordsToPlace_Inner = { "WordsToPlace", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::NewProp_WordsToPlace = { "WordsToPlace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WordSearchGrid_eventPopulateGrid_Parms, WordsToPlace), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::NewProp_WordsToPlace_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::NewProp_WordsToPlace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WordSearchGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWordSearchGrid, nullptr, "PopulateGrid", nullptr, nullptr, Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::WordSearchGrid_eventPopulateGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::WordSearchGrid_eventPopulateGrid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWordSearchGrid_PopulateGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWordSearchGrid_PopulateGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWordSearchGrid);
	UClass* Z_Construct_UClass_UWordSearchGrid_NoRegister()
	{
		return UWordSearchGrid::StaticClass();
	}
	struct Z_Construct_UClass_UWordSearchGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWordSearchGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RandomWordSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWordSearchGrid_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWordSearchGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWordSearchGrid_FindWord, "FindWord" }, // 3813617471
		{ &Z_Construct_UFunction_UWordSearchGrid_InitialiseGrid, "InitialiseGrid" }, // 4179386657
		{ &Z_Construct_UFunction_UWordSearchGrid_PopulateGrid, "PopulateGrid" }, // 3746309298
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWordSearchGrid_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWordSearchGrid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WordSearchGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "WordSearchGrid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWordSearchGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWordSearchGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWordSearchGrid_Statics::ClassParams = {
		&UWordSearchGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWordSearchGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UWordSearchGrid_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWordSearchGrid()
	{
		if (!Z_Registration_Info_UClass_UWordSearchGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWordSearchGrid.OuterSingleton, Z_Construct_UClass_UWordSearchGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWordSearchGrid.OuterSingleton;
	}
	template<> RANDOMWORDSEARCH_API UClass* StaticClass<UWordSearchGrid>()
	{
		return UWordSearchGrid::StaticClass();
	}
	UWordSearchGrid::UWordSearchGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWordSearchGrid);
	UWordSearchGrid::~UWordSearchGrid() {}
	struct Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWordSearchGrid, UWordSearchGrid::StaticClass, TEXT("UWordSearchGrid"), &Z_Registration_Info_UClass_UWordSearchGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWordSearchGrid), 3711774318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGrid_h_4027932820(TEXT("/Script/RandomWordSearch"),
		Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SchoolWork_RandomWordSearch_RandomWordSearch_Source_RandomWordSearch_WordSearchGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
