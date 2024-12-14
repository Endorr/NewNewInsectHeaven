#pragma once
#include "CoreMinimal.h"
#include "Dialogue/DialogueAction.h"
#include "DialogueAction_SelectCase.generated.h"

UCLASS(BlueprintType)
class UDialogueAction_SelectCase : public UDialogueAction
{
	GENERATED_BODY()
public:
	virtual void SaveToJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual void LoadFromJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual FText Get_Name() override;
	virtual FSlateColor Get_Color() override;
	virtual FText Get_Description() override;

protected:
	virtual void Execute() override;
	virtual bool Progress(float _fDelta) override;
	virtual void Finish() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	FString NickName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	TArray<FString> SelectCaseIDArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	TArray<int32> NextDialogueFileIDArray;
};
