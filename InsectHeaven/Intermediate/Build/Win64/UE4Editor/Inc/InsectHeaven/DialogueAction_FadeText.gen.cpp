// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/Action/DialogueAction_FadeText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAction_FadeText() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_FadeText_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_FadeText();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UDialogueAction_FadeText::StaticRegisterNativesUDialogueAction_FadeText()
	{
	}
	UClass* Z_Construct_UClass_UDialogueAction_FadeText_NoRegister()
	{
		return UDialogueAction_FadeText::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAction_FadeText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TalkString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppearTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AppearTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAction_FadeText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueAction,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_FadeText_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Library/Dialogue/Action/DialogueAction_FadeText.h" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_FadeText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_TalkString_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_FadeText.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_TalkString = { "TalkString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_FadeText, TalkString), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_TalkString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_TalkString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_AppearTime_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_FadeText.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_AppearTime = { "AppearTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_FadeText, AppearTime), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_AppearTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_AppearTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAction_FadeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_TalkString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_FadeText_Statics::NewProp_AppearTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAction_FadeText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAction_FadeText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAction_FadeText_Statics::ClassParams = {
		&UDialogueAction_FadeText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAction_FadeText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_FadeText_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_FadeText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_FadeText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueAction_FadeText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueAction_FadeText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueAction_FadeText, 2539580064);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueAction_FadeText>()
	{
		return UDialogueAction_FadeText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueAction_FadeText(Z_Construct_UClass_UDialogueAction_FadeText, &UDialogueAction_FadeText::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueAction_FadeText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAction_FadeText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
