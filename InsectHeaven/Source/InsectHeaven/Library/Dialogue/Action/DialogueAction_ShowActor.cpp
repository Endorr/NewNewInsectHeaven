﻿#include "DialogueAction_ShowActor.h"

#include "Dialogue/IH_DialoguePlayer.h"
#include "Dialogue/IH_Widget_DialogueScene.h"

void UDialogueAction_ShowActor::SaveToJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::SaveToJson(_JsonObject);

	_JsonObject->SetNumberField(TEXT("ActorID"), ActorID);
	_JsonObject->SetBoolField(TEXT("IsLeft"), IsLeft);
	_JsonObject->SetBoolField(TEXT("IsDimmed"), IsDimmed);
}

void UDialogueAction_ShowActor::LoadFromJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::LoadFromJson(_JsonObject);

	ActorID = _JsonObject->GetNumberField(TEXT("ActorID"));
	IsLeft = _JsonObject->GetBoolField(TEXT("IsLeft"));
	IsDimmed = _JsonObject->GetBoolField(TEXT("IsDimmed"));
}

FText UDialogueAction_ShowActor::Get_Name()
{
	return FText::FromString("ShowActor");
}

FSlateColor UDialogueAction_ShowActor::Get_Color()
{
	FSlateColor ShowActorColor = FSlateColor(FLinearColor(FVector(0.2f, 1.f, 0.92f)));
	return ShowActorColor;
}

FText UDialogueAction_ShowActor::Get_Description()
{
	return FText::AsNumber(ActorID);
}

void UDialogueAction_ShowActor::Execute()
{
	Super::Execute();

	if(pOwnerPlayer)
	{
		if(UIH_Widget_DialogueScene* DialogueScene = pOwnerPlayer->GetDialogueWidget())
		{
			DialogueScene->SetCharacter(ActorID, IsLeft);
			DialogueScene->SetCharacterDimmed(IsLeft, IsDimmed);
		}
	}
}
