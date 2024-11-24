// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/Action/DialogueAction_SelectCase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAction_SelectCase() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_SelectCase_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_SelectCase();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UDialogueAction_SelectCase::StaticRegisterNativesUDialogueAction_SelectCase()
	{
	}
	UClass* Z_Construct_UClass_UDialogueAction_SelectCase_NoRegister()
	{
		return UDialogueAction_SelectCase::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAction_SelectCase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NickName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NickName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectCaseIDArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectCaseIDArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectCaseIDArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextDialogueFileIDArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextDialogueFileIDArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NextDialogueFileIDArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAction_SelectCase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueAction,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_SelectCase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/Dialogue/Action/DialogueAction_SelectCase.h" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_SelectCase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NickName_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_SelectCase.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NickName = { "NickName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_SelectCase, NickName), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NickName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NickName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_SelectCaseIDArray_Inner = { "SelectCaseIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_SelectCaseIDArray_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_SelectCase.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_SelectCaseIDArray = { "SelectCaseIDArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_SelectCase, SelectCaseIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_SelectCaseIDArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_SelectCaseIDArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NextDialogueFileIDArray_Inner = { "NextDialogueFileIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NextDialogueFileIDArray_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_SelectCase.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NextDialogueFileIDArray = { "NextDialogueFileIDArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_SelectCase, NextDialogueFileIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NextDialogueFileIDArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NextDialogueFileIDArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAction_SelectCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NickName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_SelectCaseIDArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_SelectCaseIDArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NextDialogueFileIDArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_SelectCase_Statics::NewProp_NextDialogueFileIDArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAction_SelectCase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAction_SelectCase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAction_SelectCase_Statics::ClassParams = {
		&UDialogueAction_SelectCase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAction_SelectCase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_SelectCase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_SelectCase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_SelectCase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueAction_SelectCase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueAction_SelectCase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueAction_SelectCase, 3945316811);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueAction_SelectCase>()
	{
		return UDialogueAction_SelectCase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueAction_SelectCase(Z_Construct_UClass_UDialogueAction_SelectCase, &UDialogueAction_SelectCase::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueAction_SelectCase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAction_SelectCase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
