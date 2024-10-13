// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INSECTHEAVEN_DialogueAction_Talk_generated_h
#error "DialogueAction_Talk.generated.h already included, missing '#pragma once' in DialogueAction_Talk.h"
#endif
#define INSECTHEAVEN_DialogueAction_Talk_generated_h

#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_SPARSE_DATA
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_RPC_WRAPPERS
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueAction_Talk(); \
	friend struct Z_Construct_UClass_UDialogueAction_Talk_Statics; \
public: \
	DECLARE_CLASS(UDialogueAction_Talk, UDialogueAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UDialogueAction_Talk)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueAction_Talk(); \
	friend struct Z_Construct_UClass_UDialogueAction_Talk_Statics; \
public: \
	DECLARE_CLASS(UDialogueAction_Talk, UDialogueAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InsectHeaven"), NO_API) \
	DECLARE_SERIALIZER(UDialogueAction_Talk)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueAction_Talk(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueAction_Talk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueAction_Talk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueAction_Talk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueAction_Talk(UDialogueAction_Talk&&); \
	NO_API UDialogueAction_Talk(const UDialogueAction_Talk&); \
public:


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueAction_Talk(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueAction_Talk(UDialogueAction_Talk&&); \
	NO_API UDialogueAction_Talk(const UDialogueAction_Talk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueAction_Talk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueAction_Talk); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueAction_Talk)


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_PRIVATE_PROPERTY_OFFSET
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_30_PROLOG
#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_RPC_WRAPPERS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_INCLASS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_PRIVATE_PROPERTY_OFFSET \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_SPARSE_DATA \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_INCLASS_NO_PURE_DECLS \
	InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INSECTHEAVEN_API UClass* StaticClass<class UDialogueAction_Talk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InsectHeaven_Source_InsectHeaven_Library_Dialogue_Action_DialogueAction_Talk_h


#define FOREACH_ENUM_EDIMMEDTYPE(op) \
	op(EDimmedType::EDimmedType_None) \
	op(EDimmedType::EDimmedType_Both) \
	op(EDimmedType::EDimmedType_Left) \
	op(EDimmedType::EDimmedType_Right) \
	op(EDimmedType::EDimmedType_NoAction) 

enum class EDimmedType;
template<> INSECTHEAVEN_API UEnum* StaticEnum<EDimmedType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
