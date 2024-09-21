// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Util/IH_RichTextInlineDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_RichTextInlineDecorator() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_RichTextInlineDecorator_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_RichTextInlineDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
// End Cross Module References
	void UIH_RichTextInlineDecorator::StaticRegisterNativesUIH_RichTextInlineDecorator()
	{
	}
	UClass* Z_Construct_UClass_UIH_RichTextInlineDecorator_NoRegister()
	{
		return UIH_RichTextInlineDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UIH_RichTextInlineDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_RichTextInlineDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_RichTextInlineDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/IH_RichTextInlineDecorator.h" },
		{ "ModuleRelativePath", "Util/IH_RichTextInlineDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_RichTextInlineDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_RichTextInlineDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_RichTextInlineDecorator_Statics::ClassParams = {
		&UIH_RichTextInlineDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_RichTextInlineDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_RichTextInlineDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_RichTextInlineDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_RichTextInlineDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_RichTextInlineDecorator, 2532445412);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_RichTextInlineDecorator>()
	{
		return UIH_RichTextInlineDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_RichTextInlineDecorator(Z_Construct_UClass_UIH_RichTextInlineDecorator, &UIH_RichTextInlineDecorator::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_RichTextInlineDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_RichTextInlineDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
