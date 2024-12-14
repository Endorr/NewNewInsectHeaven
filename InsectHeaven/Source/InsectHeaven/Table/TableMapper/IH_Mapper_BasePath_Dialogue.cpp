#include "IH_Mapper_BasePath_Dialogue.h"

#include "DataStruct/BasePath_Dialogue.h"

void UIH_Mapper_BasePath_Dialogue::Initialize(UIH_TableManager* _pMng)
{
	TMap<FName, uint8*> mapTableData;
	_pMng->GetRowDataMap(ETableDataType::BasePathDialogue, mapTableData);
	for(auto& elem : mapTableData)
	{
		int32 Key = FCString::Atoi(*elem.Key.ToString());
		FBasePath_Dialogue* pData = reinterpret_cast<FBasePath_Dialogue*>(elem.Value);
		if(pData)
		{
			_mapBasePathDialogue.Add(Key, pData);
		}
	}
}

void UIH_Mapper_BasePath_Dialogue::Finalize()
{
	_mapBasePathDialogue.Empty();
	
	Super::Finalize();
}

FString UIH_Mapper_BasePath_Dialogue::GetPath(int32 _Key)
{
	for(auto& elem : _mapBasePathDialogue)
	{
		if(elem.Key == _Key)
			return elem.Value->Path;
	}

	return "";
}
