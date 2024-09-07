#pragma once
#include "Dialogue/DialogueAction.h"
#include "DialogueAction_Talk.generated.h"

UCLASS(BlueprintType)
class UDialogueAction_Talk : public UDialogueAction
{
	GENERATED_BODY()
public:
	virtual void SaveToJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual void LoadFromJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual FText Get_Name() override;
	virtual FText Get_Description() override;

	virtual void Execute() override;
	virtual bool Progress(float _fDelta) override;
	virtual void OnInput() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (DisplayPriority = "1"))
	FName			        ActorName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	FString		TalkString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction")
	float		TextAppearDelay = 0.5f;

private:
	bool TextLoading = false;
	FString LoadString = "";
	float CurrentDelay = 0.f;
	int32 TextIndex = 0;
};
