#pragma once

#include "IH_Widget.h"
#include "IH_Widget_DialogueScene.generated.h"

DECLARE_DELEGATE(FDialogueWidgetButtonEvent);

UCLASS()
class UIH_Widget_DialogueScene : public UIH_Widget
{
	GENERATED_BODY()

public:
	static FName GetWidgetName() { return FName(TEXT("DialogueScene")); }
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void Tick(float _DeltaTime) override;

	void SetCharacter(int32 CharacterID, bool _IsLeft);
	void SetCharacterDimmed(bool _IsLeft, bool _IsDimmed);
	void SetText(FString _Text, bool _bImmediate);
	void SetFadeText(FString _Text);
	void SetCommitDelegate(FDialogueWidgetButtonEvent _Delegate);
	void SetSelectCase(bool _IsShow, TArray<FString> _SelectCaseIDArray, TArray<int32> _DialogueFileIDArray);
	void SetSelectCaseWait(bool _IsWait);
	bool GetSelectCaseWait() { return IsSelectCaseWait; }
	
	void SetBackground(int32 _ImageID, bool _IsSwitching);

	bool IsShowTalkPanel();
	void HideTalkPanel();


	UFUNCTION()
	void OnCommit();

protected:
	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Background = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_BackgroundSwitch = nullptr;

	UPROPERTY(meta = (BindWidget))
	class URichTextBlock* CPP_Txt_Script = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* CPP_Canvas_Script = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Commit = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Left = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_LeftDimmed = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_Right = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UImage* CPP_Img_RightDimmed = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CPP_Txt_Fade = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* CPP_Canvas_SelectCase = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* CPP_Scroll_SelectCase = nullptr;

private:
	FString LeftText = "";

	FDialogueWidgetButtonEvent OnClickedDelegate;

	bool IsSelectCaseWait = false;
};
