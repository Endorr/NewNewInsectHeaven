// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Table/DataStruct/BasePath_Dialogue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePath_Dialogue() {}
// Cross Module References
	INSECTHEAVEN_API UScriptStruct* Z_Construct_UScriptStruct_FBasePath_Dialogue();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FBasePath_Dialogue>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBasePath_Dialogue cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FBasePath_Dialogue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INSECTHEAVEN_API uint32 Get_Z_Construct_UScriptStruct_FBasePath_Dialogue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasePath_Dialogue, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("BasePath_Dialogue"), sizeof(FBasePath_Dialogue), Get_Z_Construct_UScriptStruct_FBasePath_Dialogue_Hash());
	}
	return Singleton;
}
template<> INSECTHEAVEN_API UScriptStruct* StaticStruct<FBasePath_Dialogue>()
{
	return FBasePath_Dialogue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBasePath_Dialogue(FBasePath_Dialogue::StaticStruct, TEXT("/Script/InsectHeaven"), TEXT("BasePath_Dialogue"), false, nullptr, nullptr);
static struct FScriptStruct_InsectHeaven_StaticRegisterNativesFBasePath_Dialogue
{
	FScriptStruct_InsectHeaven_StaticRegisterNativesFBasePath_Dialogue()
	{
		UScriptStruct::DeferCppStructOps<FBasePath_Dialogue>(FName(TEXT("BasePath_Dialogue")));
	}
} ScriptStruct_InsectHeaven_StaticRegisterNativesFBasePath_Dialogue;
	struct Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Table/DataStruct/BasePath_Dialogue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasePath_Dialogue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "BasePath_Dialogue" },
		{ "ModuleRelativePath", "Table/DataStruct/BasePath_Dialogue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasePath_Dialogue, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BasePath_Dialogue",
		sizeof(FBasePath_Dialogue),
		alignof(FBasePath_Dialogue),
		Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBasePath_Dialogue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBasePath_Dialogue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BasePath_Dialogue"), sizeof(FBasePath_Dialogue), Get_Z_Construct_UScriptStruct_FBasePath_Dialogue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBasePath_Dialogue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBasePath_Dialogue_Hash() { return 216683467U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
