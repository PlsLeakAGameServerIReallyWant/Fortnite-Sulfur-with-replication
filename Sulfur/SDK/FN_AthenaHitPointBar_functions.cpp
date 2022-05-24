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

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDBNO                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::UpdateDBNOState(bool bIsDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState");

	UAthenaHitPointBar_C_UpdateDBNOState_Params params;
	params.bIsDBNO = bIsDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::UpdateHealthType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType");

	UAthenaHitPointBar_C_UpdateHealthType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Update");

	UAthenaHitPointBar_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::Update_Delta_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar");

	UAthenaHitPointBar_C_Update_Delta_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::Initialize_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar");

	UAthenaHitPointBar_C_Initialize_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::Update_Fill_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar");

	UAthenaHitPointBar_C_Update_Fill_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortHitPointModificationReason Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::UpdateCurrentValue(float Current, EFortHitPointModificationReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue");

	UAthenaHitPointBar_C_UpdateCurrentValue_Params params;
	params.Current = Current;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::UpdateMaxValue(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue");

	UAthenaHitPointBar_C_UpdateMaxValue_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHitPointBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Construct");

	UAthenaHitPointBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct");

	UAthenaHitPointBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaHitPointBar_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Destruct");

	UAthenaHitPointBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnMaxValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::OnMaxValueChanged(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.OnMaxValueChanged");

	UAthenaHitPointBar_C_OnMaxValueChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnValueChangedWithReason
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortHitPointModificationReason* Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::OnValueChangedWithReason(float* Value, EFortHitPointModificationReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.OnValueChangedWithReason");

	UAthenaHitPointBar_C_OnValueChangedWithReason_Params params;
	params.Value = Value;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnDBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsDBNO                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::OnDBNOStateChanged(bool* IsDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.OnDBNOStateChanged");

	UAthenaHitPointBar_C_OnDBNOStateChanged_Params params;
	params.IsDBNO = IsDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::ExecuteUbergraph_AthenaHitPointBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar");

	UAthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
