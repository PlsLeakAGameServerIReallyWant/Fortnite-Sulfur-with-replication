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

// AnimBlueprintGeneratedClass M_MED_ASN_Jae_Head_01_Skeleton_AnimBP.M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_C
// 0x0518 (0x0998 - 0x0480)
class UM_MED_ASN_Jae_Head_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_41381D7E4D7E99EA8EC551A923E79B00;      // 0x0488(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_F956F2E8479EEFF67D8F1DA653FDDA51;// 0x04D0(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FE1708FD4517E3B31189ED81E8962A96;      // 0x0568(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_72B6242A4CD8EEAB1EFFBF86F43E5880;// 0x05D8(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6236249D4438BD6C34A1F893FA09079C;// 0x06B8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B5E65BCB4057B88003A0D69EBD580D3A;// 0x0798(0x00D0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_6C132E614AB4561E426158B1BE9628A7;// 0x0868(0x0098)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A7365E35471B8EF307FFA39C7D11F102;// 0x0900(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3EC5D65A4E8ADCB871D686A4380F2903;// 0x0948(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M_MED_ASN_Jae_Head_01_Skeleton_AnimBP.M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_6C132E614AB4561E426158B1BE9628A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_B5E65BCB4057B88003A0D69EBD580D3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_ASN_Jae_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F956F2E8479EEFF67D8F1DA653FDDA51();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_MED_ASN_Jae_Head_01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
