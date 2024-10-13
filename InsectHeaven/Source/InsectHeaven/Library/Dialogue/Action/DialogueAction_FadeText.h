// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dialogue/DialogueAction.h"
#include "DialogueAction_FadeText.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UDialogueAction_FadeText : public UDialogueAction
{
	GENERATED_BODY()

public:
	virtual void SaveToJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual void LoadFromJson(TSharedPtr<FJsonObject> _JsonObject) override;
	virtual FText Get_Name() override;
	virtual FText Get_Description() override;

	virtual void Execute() override;
	virtual bool Progress(float _fDelta) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	FString TalkString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UDialogueAction", meta = (MultiLine = "true"), meta = (DisplayPriority = "1"))
	float AppearTime = 1.0f;

private:
	bool ActionExcute = false;
	float FadeRemain = 0.0f;
	float ExcuteTimer = 0.0f;
};
