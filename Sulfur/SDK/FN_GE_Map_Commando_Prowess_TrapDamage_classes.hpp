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

// BlueprintGeneratedClass GE_Map_Commando_Prowess_TrapDamage.GE_Map_Commando_Prowess_TrapDamage_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Map_Commando_Prowess_TrapDamage_C : public UGE_Map_Tech_To_AbilityDamage_TrapDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_Map_Commando_Prowess_TrapDamage.GE_Map_Commando_Prowess_TrapDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
