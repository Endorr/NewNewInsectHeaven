// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueAction_FadeText.h"

#include "IH_TableManager.h"
#include "Dialogue/IH_DialoguePlayer.h"
#include "Dialogue/IH_Widget_DialogueScene.h"

void UDialogueAction_FadeText::SaveToJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::SaveToJson(_JsonObject);

	_JsonObject->SetStringField(TEXT("TalkString"), TalkString);

	_JsonObject->SetNumberField(TEXT("AppearTime"), AppearTime);
}

void UDialogueAction_FadeText::LoadFromJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::LoadFromJson(_JsonObject);

	TalkString = FString(_JsonObject->GetStringField(TEXT("TalkString")));

	AppearTime = _JsonObject->GetNumberField(TEXT("AppearTime"));
}

FText UDialogueAction_FadeText::Get_Name()
{
	return FText::FromString("Fade Text");
}

FSlateColor UDialogueAction_FadeText::Get_Color()
{
	FSlateColor FadeTextColor = FSlateColor(FLinearColor(FVector(0.2f, 1.f, 0.36f)));
	return FadeTextColor;
}

FText UDialogueAction_FadeText::Get_Description()
{
	return FText::AsNumber(AppearTime);
}

void UDialogueAction_FadeText::Execute()
{
	Super::Execute();

	ActionExcute = true;

	if(nullptr == pOwnerPlayer)
		return;
	
	FText FadeText = gTableMng.GetScript(TalkString);

	if(UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget())
	{
		pWidget->SetFadeText(FadeText.ToString());
		FadeRemain = AppearTime + 1.0f/*Appear Animation Time*/;
		pWidget->PlayAnimationByName("FadeTextAppear");
	}
}

bool UDialogueAction_FadeText::Progress(float _fDelta)
{
	if(true == ActionExcute)
	{
		if(FadeRemain <= ExcuteTimer)
		{
			if(UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget())
				pWidget->PlayAnimationByName("FadeTextDisappear");
			FadeRemain = ExcuteTimer = 0.0f;
			return false; 
		}
		else
		{
			ExcuteTimer += _fDelta;
		}
	}
	
	return true;
}
