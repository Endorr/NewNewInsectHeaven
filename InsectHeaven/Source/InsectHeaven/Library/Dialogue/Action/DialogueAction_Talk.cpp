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

	int32 DimmedNumber = INDEX_NONE;
	ConvertEnum(DimmedType, DimmedNumber);
	_JsonObject->SetNumberField(TEXT("DimmedType"), DimmedNumber);
}

void UDialogueAction_Talk::LoadFromJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::LoadFromJson(_JsonObject);

	TalkString = FString(_JsonObject->GetStringField(TEXT("TalkString")));

	ActorName = FName(_JsonObject->GetStringField(TEXT("ActorName")));

	TextAppearDelay = _JsonObject->GetNumberField(TEXT("TextAppearDelay"));

	int32 DimmedNumber = _JsonObject->GetNumberField(TEXT("DimmedType"));
	ConvertEnum(DimmedType, DimmedNumber);
}

FText UDialogueAction_Talk::Get_Name()
{
	return FText::FromString("Talk");
}

FSlateColor UDialogueAction_Talk::Get_Color()
{
	FSlateColor TalkColor = FSlateColor(FLinearColor(FVector(1.f, 0.74f, 0.2f)));
	return TalkColor;
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

	UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget();
	pWidget->SetText(LoadString, true);
	
	if(false == LoadString.IsEmpty())
	{
		TextLoading = true;
		CurrentDelay = 0.f;
		TextIndex = 1;

		FString CopyString = GetDecoratedString(TextIndex);
		++TextIndex;
		
		pWidget->SetText(CopyString, true);
	}
	else
	{
		pWidget->SetText(LoadString, true);
	}

	if(EDimmedType::EDimmedType_Both == DimmedType)
	{
		pWidget->SetCharacterDimmed(true, true);
		pWidget->SetCharacterDimmed(false, true);
	}
	else if(EDimmedType::EDimmedType_None == DimmedType)
	{
		pWidget->SetCharacterDimmed(true, false);
		pWidget->SetCharacterDimmed(false, false);
	}
	else if(EDimmedType::EDimmedType_Left == DimmedType)
	{
		pWidget->SetCharacterDimmed(true, true);
		pWidget->SetCharacterDimmed(false, false);
	}
	else if(EDimmedType::EDimmedType_Right == DimmedType)
	{
		pWidget->SetCharacterDimmed(true, false);
		pWidget->SetCharacterDimmed(false, true);
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

void UDialogueAction_Talk::ConvertEnum(EDimmedType& _DimmedType, int32& _Number)
{
	if(INDEX_NONE == _Number)
	{
		switch (_DimmedType)
		{
		case EDimmedType::EDimmedType_None:
			_Number = 0;
			break;
		case EDimmedType::EDimmedType_Both:
			_Number = 1;
			break;
		case EDimmedType::EDimmedType_Left:
			_Number = 2;
			break;
		case EDimmedType::EDimmedType_Right:
			_Number = 3;
			break;
		case EDimmedType::EDimmedType_NoAction:
			_Number = 4;
			break;
		}
	}
	else
	{
		if(0 == _Number)
			_DimmedType = EDimmedType::EDimmedType_None;
		else if(1 == _Number)
			_DimmedType = EDimmedType::EDimmedType_Both;
		else if(2 == _Number)
			_DimmedType = EDimmedType::EDimmedType_Left;
		else if(3 == _Number)
			_DimmedType = EDimmedType::EDimmedType_Right;
		else if(4 == _Number)
			_DimmedType = EDimmedType::EDimmedType_NoAction;
	}
}
