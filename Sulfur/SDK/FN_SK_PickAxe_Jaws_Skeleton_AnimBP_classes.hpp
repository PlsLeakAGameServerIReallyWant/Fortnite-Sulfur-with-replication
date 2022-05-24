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

// AnimBlueprintGeneratedClass SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C
// 0x03A0 (0x0820 - 0x0480)
class USK_PickAxe_Jaws_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_6B147D6642EFDBB249D21998BE4ED15C;  // 0x0488(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_85E18924481875C844C3A3A7EA0A5DAF;      // 0x04F0(0x0048)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_E40FC2B6491B2E41E87B22BE74EFDBED; // 0x0538(0x0250)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D00AF4E743A94A1AD17B36A5F9F03EEA;// 0x0788(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DB4BDBBD424FBEF62E5517A65A3B4597;// 0x07D0(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
