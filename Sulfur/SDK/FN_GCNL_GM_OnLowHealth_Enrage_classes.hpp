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

// BlueprintGeneratedClass GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C
// 0x0018 (0x04A8 - 0x0490)
class AGCNL_GM_OnLowHealth_Enrage_C : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*                    BodyMistFX;                                               // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Hand_Trail_L;                                             // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    HandTrailR;                                               // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C");
		return ptr;
	}


	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
