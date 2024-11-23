#pragma once

#include "CoreMinimal.h"
#include "IH_TableMapper.h"
#include "IH_Mapper_BasePath_Dialogue.generated.h"

struct FBasePath_Dialogue;

UCLASS()
class UIH_Mapper_BasePath_Dialogue : public UIH_TableMapper
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(UIH_TableManager* _pMng) override;
	virtual void Finalize() override;

	FString GetPath(int32 _Key);

private:
	TMap<int32, const FBasePath_Dialogue*> _mapBasePathDialogue;
};
