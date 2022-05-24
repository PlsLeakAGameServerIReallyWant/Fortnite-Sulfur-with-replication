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

// Function AthenaPickupManager.AthenaPickupManager_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::UpdateKeybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.UpdateKeybinds");

	UAthenaPickupManager_C_UpdateKeybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.RefreshCounts
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::RefreshCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.RefreshCounts");

	UAthenaPickupManager_C_RefreshCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPickupManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.Construct");

	UAthenaPickupManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemsChanged
// (BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::HandleWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemsChanged");

	UAthenaPickupManager_C_HandleWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemListChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaPickupManager_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*> ItemsAdded, TArray<class UFortWorldItem*> ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.HandleWorldItemListChanged");

	UAthenaPickupManager_C_HandleWorldItemListChanged_Params params;
	params.ItemsAdded = ItemsAdded;
	params.ItemsRemoved = ItemsRemoved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPickupManager_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.Destruct");

	UAthenaPickupManager_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleBuildingMaterialChanged
// (BlueprintCallable, BlueprintEvent)

void UAthenaPickupManager_C::HandleBuildingMaterialChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.HandleBuildingMaterialChanged");

	UAthenaPickupManager_C_HandleBuildingMaterialChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.HandleItemPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPickupManager_C::HandleItemPickup(class UFortWorldItem* NewItem, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.HandleItemPickup");

	UAthenaPickupManager_C_HandleItemPickup_Params params;
	params.NewItem = NewItem;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPickupManager.AthenaPickupManager_C.ExecuteUbergraph_AthenaPickupManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPickupManager_C::ExecuteUbergraph_AthenaPickupManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPickupManager.AthenaPickupManager_C.ExecuteUbergraph_AthenaPickupManager");

	UAthenaPickupManager_C_ExecuteUbergraph_AthenaPickupManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
