#include "IH_Widget_DialogueSelect.h"

#include "DialogueManager.h"
#include "IH_SceneManager.h"
#include "IH_TableManager.h"
#include "IH_WidgetManager.h"
#include "IH_Widget_DialogueScene.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"

void UIH_Widget_DialogueSelect::NativeConstruct()
{
	Super::NativeConstruct();

	if(CPP_Btn_Select)
	{
		CPP_Btn_Select->OnClicked.Clear();
		CPP_Btn_Select->OnClicked.AddDynamic(this, &UIH_Widget_DialogueSelect::OnClickSelectButton);
	}
}

void UIH_Widget_DialogueSelect::SetSelectCase(FString _SelectCaseText, int32 _SelectCaseID)
{
	SelectCaseID = _SelectCaseID;
	
	if(CPP_Txt_SelectDesc)
	{
		CPP_Txt_SelectDesc->SetText(gTableMng.GetScript(_SelectCaseText));
	}
}

void UIH_Widget_DialogueSelect::OnClickSelectButton()
{
	if(UIH_Widget_DialogueScene* DialogueWidget = Cast<UIH_Widget_DialogueScene>(gWidgetMng.GetWidget(UIH_Widget_DialogueScene::GetWidgetName())))
	{
		DialogueWidget->SetSelectCaseWait(false);
	}
	
 	FString DialogueFilePath;
	gTableMng.GetFilePath(ETableDataType::BasePathDialogue, SelectCaseID, DialogueFilePath);
	DialogueFilePath = FPaths::ProjectContentDir() + DialogueFilePath;
	FSimpleMulticastDelegate DummyDelegate;
	gDialogueMng.PlayDialoguePlayer(DialogueFilePath, DummyDelegate);
}
