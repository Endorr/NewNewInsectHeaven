// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Widget/Dialogue/IH_Widget_DialogueSelect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIH_Widget_DialogueSelect() {}
// Cross Module References
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueSelect_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget_DialogueSelect();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UIH_Widget();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UIH_Widget_DialogueSelect::execOnClickSelectButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClickSelectButton();
		P_NATIVE_END;
	}
	void UIH_Widget_DialogueSelect::StaticRegisterNativesUIH_Widget_DialogueSelect()
	{
		UClass* Class = UIH_Widget_DialogueSelect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickSelectButton", &UIH_Widget_DialogueSelect::execOnClickSelectButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIH_Widget_DialogueSelect_OnClickSelectButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIH_Widget_DialogueSelect_OnClickSelectButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueSelect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIH_Widget_DialogueSelect_OnClickSelectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIH_Widget_DialogueSelect, nullptr, "OnClickSelectButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIH_Widget_DialogueSelect_OnClickSelectButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIH_Widget_DialogueSelect_OnClickSelectButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIH_Widget_DialogueSelect_OnClickSelectButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIH_Widget_DialogueSelect_OnClickSelectButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIH_Widget_DialogueSelect_NoRegister()
	{
		return UIH_Widget_DialogueSelect::StaticClass();
	}
	struct Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Btn_Select_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Btn_Select;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPP_Txt_SelectDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CPP_Txt_SelectDesc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIH_Widget,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIH_Widget_DialogueSelect_OnClickSelectButton, "OnClickSelectButton" }, // 3766327161
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/Dialogue/IH_Widget_DialogueSelect.h" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueSelect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Btn_Select_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueSelect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Btn_Select = { "CPP_Btn_Select", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueSelect, CPP_Btn_Select), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Btn_Select_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Btn_Select_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Txt_SelectDesc_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget/Dialogue/IH_Widget_DialogueSelect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Txt_SelectDesc = { "CPP_Txt_SelectDesc", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIH_Widget_DialogueSelect, CPP_Txt_SelectDesc), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Txt_SelectDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Txt_SelectDesc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Btn_Select,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::NewProp_CPP_Txt_SelectDesc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIH_Widget_DialogueSelect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::ClassParams = {
		&UIH_Widget_DialogueSelect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIH_Widget_DialogueSelect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIH_Widget_DialogueSelect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIH_Widget_DialogueSelect, 2412022826);
	template<> INSECTHEAVEN_API UClass* StaticClass<UIH_Widget_DialogueSelect>()
	{
		return UIH_Widget_DialogueSelect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIH_Widget_DialogueSelect(Z_Construct_UClass_UIH_Widget_DialogueSelect, &UIH_Widget_DialogueSelect::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UIH_Widget_DialogueSelect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIH_Widget_DialogueSelect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
