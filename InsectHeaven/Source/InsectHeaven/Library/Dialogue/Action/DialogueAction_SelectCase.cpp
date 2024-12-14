#include "DialogueAction_SelectCase.h"

#include "IH_TableManager.h"
#include "Dialogue/IH_DialoguePlayer.h"
#include "Dialogue/IH_Widget_DialogueScene.h"
#include "Styling/SlateColor.h"

void UDialogueAction_SelectCase::SaveToJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::SaveToJson(_JsonObject);

	_JsonObject->SetStringField(TEXT("NickName"), NickName);

	_JsonObject->SetNumberField(TEXT("SelectCaseCount"), SelectCaseIDArray.Num());

	for(int32 CountIndex = 0; CountIndex < SelectCaseIDArray.Num(); ++CountIndex)
	{
		FString SelectCaseFileName = TEXT("SelectCase") + FString::FromInt(CountIndex);
		_JsonObject->SetStringField(SelectCaseFileName, SelectCaseIDArray[CountIndex]);

		FString DialogueFileIDName = TEXT("DialogueFileID") + FString::FromInt(CountIndex);
		_JsonObject->SetNumberField(DialogueFileIDName, NextDialogueFileIDArray[CountIndex]);
	}
}

void UDialogueAction_SelectCase::LoadFromJson(TSharedPtr<FJsonObject> _JsonObject)
{
	Super::LoadFromJson(_JsonObject);

	NickName = _JsonObject->GetStringField(TEXT("NickName"));

	int32 SelectCaseCount = _JsonObject->GetNumberField(TEXT("SelectCaseCount"));

	for(int32 CountIndex = 0; CountIndex < SelectCaseCount; ++CountIndex)
	{
		FString SelectCaseFileName = TEXT("SelectCase") + FString::FromInt(CountIndex);
		SelectCaseIDArray.Emplace(_JsonObject->GetStringField(SelectCaseFileName));

		FString DialogueFileIDName = TEXT("DialogueFileID") + FString::FromInt(CountIndex);
		NextDialogueFileIDArray.Emplace(_JsonObject->GetNumberField(DialogueFileIDName));
	}
}

void UDialogueAction_SelectCase::Execute()
{
	Super::Execute();

	UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget();
	pWidget->SetSelectCase(true, SelectCaseIDArray, NextDialogueFileIDArray);

}

bool UDialogueAction_SelectCase::Progress(float _fDelta)
{
	if(UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget())
	{
		return pWidget->GetSelectCaseWait();
	}

	return false;
}

void UDialogueAction_SelectCase::Finish()
{
	TArray<FString> DummyStringArray;
	TArray<int32> DummyIntArray;
	UIH_Widget_DialogueScene* pWidget = pOwnerPlayer->GetDialogueWidget();
	pWidget->SetSelectCaseWait(false);
	
	Super::Finish();
}

FText UDialogueAction_SelectCase::Get_Name()
{
	return FText::FromString("Select Case");
}

FSlateColor UDialogueAction_SelectCase::Get_Color()
{
	FSlateColor SelectColor = FSlateColor(FLinearColor(FVector(0.57f, 0.f, 0.94f)));
	return SelectColor;
}

FText UDialogueAction_SelectCase::Get_Description()
{
	FString Desc = NickName + FString::Printf(TEXT("- %d"), SelectCaseIDArray.Num());
	return FText::FromString(Desc);
}
