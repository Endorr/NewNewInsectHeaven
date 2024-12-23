﻿#pragma once
#include "DataStruct/BasePath_Directory.h"

UENUM()
enum class ETableDataType : uint32
{
	InGameLocal = 0		UMETA(DisplayName = "GameLocal"),
	ScriptLocal			UMETA(DisplayName = "ScriptLocal"),
	BasePathDir			UMETA(DisplayName = "BasePathDir"),
	BasePathWidget		UMETA(DisplayName = "BasePathWidget"),
	BasePathImage		UMETA(DisplayName = "BasePathImage"),
	BasePathDialogue	UMETA(DisplayName = "BasePathDialogue"),
	ResourceWidget		UMETA(DisplayName = "ResourceWidget"),
	Character2D			UMETA(DisplayName = "Character2D"),

	Max_Table,
};
