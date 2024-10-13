#pragma once
#include "Dialogue/DialogueAction.h"
#include "DialogueAction_Talk.generated.h"

UENUM()
enum class EDimmedType
{
	EDimmedType_None,
	EDimmedType_Both,
	EDimmedType_Left,
	EDimmedType_Right,
	EDimmedType_NoAction
};

struct FDecoratorPos
{
	int32 PreDecoStart = 0;
	int32 PreDecoFinish = 0;
	int32 PostDecoStart = 0;
	int32 PostDecoFinish = 0;
	FString PreDeco = "";
	FString PostDeco = "";

	FString GetDecoString(FString _UnDecoString)
	{
		return PreDeco + _UnDecoString + PostDeco;
	}
};

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

	FString GetDecoratorPos(FString _TargetString, TArray<FDecoratorPos>& _DecoPosList, TArray<int32>& _DecoIndexList);
	FString GetDecoratedString(int32 _Index);

	void ConvertEnum(EDimmedType& _DimmedType, int32& _Number);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (DisplayPriority = "1"))
	FName			        ActorName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	FString		TalkString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction")
	float		TextAppearDelay = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction")
	EDimmedType DimmedType = EDimmedType::EDimmedType_NoAction;

private:
	bool TextLoading = false;
	FString LoadString = "";
	float CurrentDelay = 0.f;
	int32 TextIndex = 0;

	TArray<FDecoratorPos> DecoPosList;
	TArray<int32> DecoIndexList;
};
