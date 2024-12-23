// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/Action/DialogueAction_Fade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAction_Fade() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_Fade_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_Fade();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UDialogueAction_Fade::StaticRegisterNativesUDialogueAction_Fade()
	{
	}
	UClass* Z_Construct_UClass_UDialogueAction_Fade_NoRegister()
	{
		return UDialogueAction_Fade::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAction_Fade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFadeOut_MetaData[];
#endif
		static void NewProp_IsFadeOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFadeOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAction_Fade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueAction,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Fade_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/Dialogue/Action/DialogueAction_Fade.h" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Fade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Fade_Statics::NewProp_IsFadeOut_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Fade.h" },
		{ "MultiLine", "true" },
	};
#endif
	void Z_Construct_UClass_UDialogueAction_Fade_Statics::NewProp_IsFadeOut_SetBit(void* Obj)
	{
		((UDialogueAction_Fade*)Obj)->IsFadeOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueAction_Fade_Statics::NewProp_IsFadeOut = { "IsFadeOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogueAction_Fade), &Z_Construct_UClass_UDialogueAction_Fade_Statics::NewProp_IsFadeOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Fade_Statics::NewProp_IsFadeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Fade_Statics::NewProp_IsFadeOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAction_Fade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Fade_Statics::NewProp_IsFadeOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAction_Fade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAction_Fade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAction_Fade_Statics::ClassParams = {
		&UDialogueAction_Fade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAction_Fade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Fade_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Fade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Fade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueAction_Fade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueAction_Fade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueAction_Fade, 2132697520);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueAction_Fade>()
	{
		return UDialogueAction_Fade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueAction_Fade(Z_Construct_UClass_UDialogueAction_Fade, &UDialogueAction_Fade::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueAction_Fade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAction_Fade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
