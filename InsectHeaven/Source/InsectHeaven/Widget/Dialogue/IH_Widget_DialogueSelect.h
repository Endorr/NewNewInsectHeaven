#pragma once
#include "IH_Widget.h"
#include "IH_Widget_DialogueSelect.generated.h"

UCLASS()
class UIH_Widget_DialogueSelect : public UIH_Widget
{
	GENERATED_BODY()
public:
	static const FSoftObjectPath GetWidgetPath() { return FSoftObjectPath(TEXT("WidgetBlueprint'/Game/Widget/Dialogue/DialogueSelect.DialogueSelect'"));}
	virtual void NativeConstruct() override;
	void SetSelectCase(FString _SelectCaseText, int32 _SelectCaseID);

protected:
	UFUNCTION()
	void OnClickSelectButton();
	
protected:
	UPROPERTY(meta = (BindWidget))
	class UButton* CPP_Btn_Select = nullptr;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CPP_Txt_SelectDesc = nullptr;

private:
	int32 SelectCaseID = 0;
};
