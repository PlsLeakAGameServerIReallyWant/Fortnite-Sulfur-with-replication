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

// BlueprintGeneratedClass GE_Map_Constructor_Vitality_Health.GE_Map_Constructor_Vitality_Health_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Map_Constructor_Vitality_Health_C : public UGE_Map_Fortitude_To_Health_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_Map_Constructor_Vitality_Health.GE_Map_Constructor_Vitality_Health_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
