// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InsectHeaven/Library/Dialogue/Action/DialogueAction_Talk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAction_Talk() {}
// Cross Module References
	INSECTHEAVEN_API UEnum* Z_Construct_UEnum_InsectHeaven_EDimmedType();
	UPackage* Z_Construct_UPackage__Script_InsectHeaven();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_Talk_NoRegister();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction_Talk();
	INSECTHEAVEN_API UClass* Z_Construct_UClass_UDialogueAction();
// End Cross Module References
	static UEnum* EDimmedType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InsectHeaven_EDimmedType, Z_Construct_UPackage__Script_InsectHeaven(), TEXT("EDimmedType"));
		}
		return Singleton;
	}
	template<> INSECTHEAVEN_API UEnum* StaticEnum<EDimmedType>()
	{
		return EDimmedType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDimmedType(EDimmedType_StaticEnum, TEXT("/Script/InsectHeaven"), TEXT("EDimmedType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InsectHeaven_EDimmedType_Hash() { return 1457507660U; }
	UEnum* Z_Construct_UEnum_InsectHeaven_EDimmedType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InsectHeaven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDimmedType"), 0, Get_Z_Construct_UEnum_InsectHeaven_EDimmedType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDimmedType::EDimmedType_None", (int64)EDimmedType::EDimmedType_None },
				{ "EDimmedType::EDimmedType_Both", (int64)EDimmedType::EDimmedType_Both },
				{ "EDimmedType::EDimmedType_Left", (int64)EDimmedType::EDimmedType_Left },
				{ "EDimmedType::EDimmedType_Right", (int64)EDimmedType::EDimmedType_Right },
				{ "EDimmedType::EDimmedType_NoAction", (int64)EDimmedType::EDimmedType_NoAction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EDimmedType_Both.Name", "EDimmedType::EDimmedType_Both" },
				{ "EDimmedType_Left.Name", "EDimmedType::EDimmedType_Left" },
				{ "EDimmedType_NoAction.Name", "EDimmedType::EDimmedType_NoAction" },
				{ "EDimmedType_None.Name", "EDimmedType::EDimmedType_None" },
				{ "EDimmedType_Right.Name", "EDimmedType::EDimmedType_Right" },
				{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InsectHeaven,
				nullptr,
				"EDimmedType",
				"EDimmedType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDialogueAction_Talk::StaticRegisterNativesUDialogueAction_Talk()
	{
	}
	UClass* Z_Construct_UClass_UDialogueAction_Talk_NoRegister()
	{
		return UDialogueAction_Talk::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueAction_Talk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TalkString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextAppearDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextAppearDelay;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DimmedType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DimmedType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DimmedType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueAction_Talk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDialogueAction,
		(UObject* (*)())Z_Construct_UPackage__Script_InsectHeaven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Talk_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_Talk, ActorName), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString = { "TalkString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_Talk, TalkString), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TextAppearDelay_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TextAppearDelay = { "TextAppearDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_Talk, TextAppearDelay), METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TextAppearDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TextAppearDelay_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_DimmedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_DimmedType_MetaData[] = {
		{ "Category", "UDialogueAction" },
		{ "ModuleRelativePath", "Library/Dialogue/Action/DialogueAction_Talk.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_DimmedType = { "DimmedType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueAction_Talk, DimmedType), Z_Construct_UEnum_InsectHeaven_EDimmedType, METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_DimmedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_DimmedType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueAction_Talk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_ActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TalkString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_TextAppearDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_DimmedType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueAction_Talk_Statics::NewProp_DimmedType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueAction_Talk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAction_Talk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAction_Talk_Statics::ClassParams = {
		&UDialogueAction_Talk::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueAction_Talk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueAction_Talk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAction_Talk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueAction_Talk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueAction_Talk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueAction_Talk, 2469990909);
	template<> INSECTHEAVEN_API UClass* StaticClass<UDialogueAction_Talk>()
	{
		return UDialogueAction_Talk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueAction_Talk(Z_Construct_UClass_UDialogueAction_Talk, &UDialogueAction_Talk::StaticClass, TEXT("/Script/InsectHeaven"), TEXT("UDialogueAction_Talk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAction_Talk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
