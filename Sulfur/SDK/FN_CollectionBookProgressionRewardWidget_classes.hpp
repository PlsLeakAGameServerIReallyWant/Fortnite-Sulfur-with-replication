#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CollectionBookProgressionRewardWidget.CollectionBookProgressionRewardWidget_C
// 0x0000 (0x0238 - 0x0238)
class UCollectionBookProgressionRewardWidget_C : public UFortCollectionBookProgressionRewardWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookProgressionRewardWidget.CollectionBookProgressionRewardWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
