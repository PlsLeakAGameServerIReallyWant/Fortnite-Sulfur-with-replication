// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SplashScreenWidget.SplashScreenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USplashScreenWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.Construct");

	USplashScreenWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USplashScreenWidget_C::ExecuteUbergraph_SplashScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget");

	USplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
