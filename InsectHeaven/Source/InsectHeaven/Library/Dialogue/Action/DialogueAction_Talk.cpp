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

	LoadString = GetDecoratorPos(LoadString, DecoPosList, DecoIndexList);
	
	if(false == LoadString.IsEmpty())
	{
		TextLoading = true;
		CurrentDelay = 0.f;
		TextIndex = 1;

		FString CopyString = GetDecoratedString(TextIndex);
		++TextIndex;
	
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
				FString CopyString = GetDecoratedString(TextIndex);
				++TextIndex;
				
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

FString UDialogueAction_Talk::GetDecoratorPos(FString _TargetString, TArray<FDecoratorPos>& _DecoPosList, TArray<int32>& _DecoIndexList)
{
	bool DecoDetect = false;
	bool RecordDeco = false;
	TPair<int32, int32> PreDecoPos = TPair<int32, int32>(0, 0);
	FString PreDeco = "";
	TPair<int32, int32> PostDecoPos = TPair<int32, int32>(0, 0);
	FString PostDeco = "";
	FString PureString = "";
	
	for(int32 StringIndex = 0; StringIndex < _TargetString.Len(); ++StringIndex)
	{
		wchar_t TargetCharacter = _TargetString[StringIndex];
		if('<' == TargetCharacter)
		{
			if(false == DecoDetect)
			{
				DecoDetect = true;
				RecordDeco = true;

				PreDecoPos.Key = StringIndex;
				PreDeco += TargetCharacter;
			}
			else
			{
				RecordDeco = true;
				PostDecoPos.Key = StringIndex;
				PostDeco += TargetCharacter;
			}
		}
		else if('>' == TargetCharacter)
		{
			if(true == DecoDetect)
			{
				if(0 == PreDecoPos.Value)
				{
					RecordDeco = false;
					PreDecoPos.Value = StringIndex;
					PreDeco += TargetCharacter;
				}
				else if(0 == PostDecoPos.Value)
				{
					DecoDetect = false;
					RecordDeco = false;
					PostDecoPos.Value = StringIndex;
					PostDeco += TargetCharacter;

					FDecoratorPos NewDecoratorPos = FDecoratorPos();
					NewDecoratorPos.PreDecoStart = PreDecoPos.Key;
					NewDecoratorPos.PreDecoFinish = PreDecoPos.Value;
					NewDecoratorPos.PostDecoStart = PostDecoPos.Key;
					NewDecoratorPos.PostDecoFinish = PostDecoPos.Value;
					NewDecoratorPos.PreDeco = PreDeco;
					NewDecoratorPos.PostDeco = PostDeco;
					_DecoPosList.Emplace(NewDecoratorPos);

					PreDecoPos = TPair<int32, int32>(0, 0);
					PreDeco = "";
					PostDecoPos = TPair<int32, int32>(0, 0);
					PostDeco = "";
				}
			}
		}
		else
		{
			if(true == RecordDeco)
			{
				if(0 == PreDecoPos.Value)
				{
					PreDeco += TargetCharacter;
				}
				else if(0 == PostDecoPos.Value)
				{
					PostDeco += TargetCharacter;
				}

				continue;
			}

			if(true == DecoDetect)
			{
				_DecoIndexList.Emplace(_DecoPosList.Num());
			}
			else
			{
				_DecoIndexList.Emplace(-1);
			}

			PureString += TargetCharacter;
		}
	}

	return PureString;
}

FString UDialogueAction_Talk::GetDecoratedString(int32 _Index)
{
	if(LoadString.Len() <= _Index)
		return "";

	FString ResultString = "";
	int32 TargetDecoIndex = -1;
	FString DecoTargetString = "";
	
	for(int32 StringIndex = 0; StringIndex <= _Index;  ++StringIndex)
	{
		wchar_t TargetCharacter = LoadString[StringIndex];

		if(-1 == DecoIndexList[StringIndex])
		{
			if("" != DecoTargetString)
			{
				FDecoratorPos Decorator = DecoPosList[TargetDecoIndex];
				ResultString += Decorator.GetDecoString(DecoTargetString);
				DecoTargetString = "";
			}
			
			ResultString += TargetCharacter;
			continue;
		}

		if(-1 != TargetDecoIndex && TargetDecoIndex != DecoIndexList[StringIndex])
		{
			FDecoratorPos Decorator = DecoPosList[TargetDecoIndex];
			ResultString += Decorator.GetDecoString(DecoTargetString);
			DecoTargetString = "";
		}
		
		TargetDecoIndex = DecoIndexList[StringIndex];
		DecoTargetString += TargetCharacter;
	}

	if("" != DecoTargetString)
	{
		FDecoratorPos Decorator = DecoPosList[TargetDecoIndex];
		ResultString += Decorator.GetDecoString(DecoTargetString);
		DecoTargetString = "";
	}

	return ResultString;
}
