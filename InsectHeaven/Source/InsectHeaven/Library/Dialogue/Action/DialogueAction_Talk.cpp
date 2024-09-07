#include "DialogueAction_Talk.h"

#include "IH_TableManager.h"
#include "Dialogue/IH_DialoguePlayer.h"
#include "Dialogue/IH_Widget_DialogueScene.h"

void UDialogueAction_Talk::SaveToJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::SaveToJson(_JsonObject);
	
	_JsonObject->SetStringField(TEXT("ActorName"), ActorName.ToString());

	_JsonObject->SetStringField(TEXT("TalkString"), TalkString);

	_JsonObject->SetNumberField(TEXT("TextAppearDelay"), TextAppearDelay);
}

void UDialogueAction_Talk::LoadFromJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::LoadFromJson(_JsonObject);

	TalkString = FString(_JsonObject->GetStringField(TEXT("TalkString")));

	ActorName = FName(_JsonObject->GetStringField(TEXT("ActorName")));

	TextAppearDelay = _JsonObject->GetNumberField(TEXT("TextAppearDelay"));
}

FText UDialogueAction_Talk::Get_Name()
{
	return FText::FromString("Talk");
}

FText UDialogueAction_Talk::Get_Description()
{
	return FText::FromString(TalkString);
}

void UDialogueAction_Talk::Execute()
{
	Super::Execute();

	if(nullptr == pOwnerPlayer)
		return;
	
	LoadString = gTableMng.GetScript(TalkString).ToString();
	
	if(false == LoadString.IsEmpty())
	{
		TextLoading = true;
		CurrentDelay = 0.f;
		TextIndex = 1;

		FString CopyString = LoadString.Left(TextIndex++);
	
		UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget();
		pWidget->SetText(CopyString, true);
	}
	else
	{
		UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget();
		pWidget->SetText(LoadString, true);
	}
}

bool UDialogueAction_Talk::Progress(float _fDelta)
{
	if(true == TextLoading)
	{
		CurrentDelay += _fDelta;
		if(CurrentDelay >= TextAppearDelay)
		{
			CurrentDelay -= TextAppearDelay;

			if(LoadString.Len() > TextIndex)
			{
				FString CopyString = LoadString.Left(TextIndex++);
				
				UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget();
				pWidget->SetText(CopyString, true);
			}
			else
			{
				TextLoading = false;
			}
		}
	}
	return TextLoading;
}

void UDialogueAction_Talk::OnInput()
{
	if(eActionState == EActionStateType::InProgress)
	{
		UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget();
		pWidget->SetText(LoadString, true);
		TextLoading = false;
		eActionState = EActionStateType::WaitInput;
	}
	else if(eActionState == EActionStateType::WaitInput)
	{
		eActionState = EActionStateType::Finished;
		Finish();
	}
}
