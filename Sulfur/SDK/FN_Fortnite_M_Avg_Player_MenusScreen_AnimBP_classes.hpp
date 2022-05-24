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

// AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_MenusScreen_AnimBP.Fortnite_M_Avg_Player_MenusScreen_AnimBP_C
// 0x17A4 (0x2374 - 0x0BD0)
class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C : public UFortPlayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A674FFBF48506B9BA7EE8CBDBC8210BD;      // 0x0BD8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1DB3E5A42B9996B6785308036E85FAE;// 0x0C20(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B299A69E447E60EE4F7B6C8FBE368C16;// 0x0CA0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_951E9B3D4F1C41FA19C1348CDF1A46C3;// 0x0D10(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05C01B274E6CFFEB43237F82185270F4;// 0x0D58(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9DA1AEC64472F45AA7CBECA9AC0600B2;// 0x0DC8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_16C670594F63485CBAD87ABDF4800661;// 0x0E10(0x00E0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_646F5CD042D0A5ED4317CA9FB189AF7D;// 0x0EF0(0x00D0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53B8C117420CB0F1D06CF7BB2D0F611F;// 0x0FC0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9767634C4FD80B5DCE5D27A2D3ECF55A;// 0x1040(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DEF0FA8B424C71AC423D7F827E27D566;// 0x10B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0C3AB68A492CB3F60B259E99EE136048;// 0x10F8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5353AF9471A1BD5399A9CA462567314;// 0x1168(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4CF53C32440BB605C95230936BD30C61;// 0x11B0(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FCD8E69443C0A585805514BA49F1D848;// 0x1290(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_517B1D0249C8EC092C471DBB5DD36220;// 0x1310(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5671DD44544B7D8FE344C948A1F6D5F;// 0x1380(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26F17D274A4F783FBE1BA29144FD59C0;// 0x13C8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DCDAAE584818E91CC81A0BA12944C016;// 0x1438(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_152F0BA4497936B543D683B268EB17F7;// 0x1480(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B548FD24DD8CA302DBE0493C9C73F98;// 0x1560(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_06673EFA4BA843B43D3D76986132A086;// 0x15E0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1F49854749DE80A5A7C55FB732227D7B;// 0x1650(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1FF88FC743D30AC2123949A47B704E48;// 0x1698(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_133E4CCB4CD07B192E5272994F4A94D0;// 0x1708(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FA4F2A1D4B990DE217B853803767EFEA;// 0x1750(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D53EBE274630FE146FC57C9C40922FA4;// 0x1830(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CBF0067242E2BBE0B1BE1AAB460C3E97;// 0x18B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FFC399704D92F63AF22597B83C150F11;// 0x1920(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37AC3FC042AD93F524BC0EB3B9D366CE;// 0x1968(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BE228804752B6A459BF5FADAA550E24;// 0x19D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4797E15545A1D285BFB1C498264BFE5F;// 0x1A20(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD721A434BAE1DC3B4791ABEF2973E96;// 0x1B00(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60AE7A614B28484E515FE4AD9926EBAF;// 0x1B80(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_27F21EED44633C75F85E8E9260E524AB;// 0x1BF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_027C00EF4B400C53991ED7BEE9CF57E2;// 0x1C38(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0719A412410C7F73A2EB36B31A681128;// 0x1CA8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DEEE76B9479CA855B13ACDB7B1ADD3DE;// 0x1CF0(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_863AEA3C426E5A0975CC67A91E44BA76;// 0x1DD0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21E547B847DA11586F2069B996B02230;// 0x1E50(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AFE7D68B41BDD2DFC8A938853BBACE1C;// 0x1EC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F91BF94341E4790BEA4E0CAAE54C94B4;// 0x1F08(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_10C5AD0C4E2C8EB6F7B9F0B4860D810D;// 0x1F78(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0DCD441046567AE3F7CEC1A384822795;// 0x1FC0(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63200C884B8BFFB1AB40C7BA4AE4764A;// 0x20A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00C62FC3461975826AB7E88483FB7F99;// 0x2120(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_536C475D4876F140A624A0B5A5398947;// 0x2190(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E6363B3848E7E34F43DA088E680182A5;// 0x21D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F169FFA74713A776C1D5A4A712A655F2;// 0x2248(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_722C2AEE4FDCBF942D1588973096C898;// 0x2290(0x00E0)
	int                                                ClassNameInt;                                             // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_MenusScreen_AnimBP.Fortnite_M_Avg_Player_MenusScreen_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_9B548FD24DD8CA302DBE0493C9C73F98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_BlendListByInt_646F5CD042D0A5ED4317CA9FB189AF7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_D53EBE274630FE146FC57C9C40922FA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_DD721A434BAE1DC3B4791ABEF2973E96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_F1DB3E5A42B9996B6785308036E85FAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_863AEA3C426E5A0975CC67A91E44BA76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_53B8C117420CB0F1D06CF7BB2D0F611F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_63200C884B8BFFB1AB40C7BA4AE4764A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_FCD8E69443C0A585805514BA49F1D848();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
