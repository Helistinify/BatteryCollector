// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/BatteryCollectorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorGameMode() {}
// Cross Module References
	BATTERYCOLLECTOR_API UEnum* Z_Construct_UEnum_BatteryCollector_EBAtteryPlayState();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EBAtteryPlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BatteryCollector_EBAtteryPlayState, Z_Construct_UPackage__Script_BatteryCollector(), TEXT("EBAtteryPlayState"));
		}
		return Singleton;
	}
	template<> BATTERYCOLLECTOR_API UEnum* StaticEnum<EBAtteryPlayState>()
	{
		return EBAtteryPlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBAtteryPlayState(EBAtteryPlayState_StaticEnum, TEXT("/Script/BatteryCollector"), TEXT("EBAtteryPlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BatteryCollector_EBAtteryPlayState_Hash() { return 4091734287U; }
	UEnum* Z_Construct_UEnum_BatteryCollector_EBAtteryPlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BatteryCollector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBAtteryPlayState"), 0, Get_Z_Construct_UEnum_BatteryCollector_EBAtteryPlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBAtteryPlayState::EPlaying", (int64)EBAtteryPlayState::EPlaying },
				{ "EBAtteryPlayState::EGameOver", (int64)EBAtteryPlayState::EGameOver },
				{ "EBAtteryPlayState::EWon", (int64)EBAtteryPlayState::EWon },
				{ "EBAtteryPlayState::EUknown", (int64)EBAtteryPlayState::EUknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
				{ "ToolTip", "enum to store the game state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BatteryCollector,
				nullptr,
				"EBAtteryPlayState",
				"EBAtteryPlayState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABatteryCollectorGameMode::StaticRegisterNativesABatteryCollectorGameMode()
	{
		UClass* Class = ABatteryCollectorGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ABatteryCollectorGameMode::execGetCurrentState },
			{ "GetDecayRate", &ABatteryCollectorGameMode::execGetDecayRate },
			{ "GetPowerToWin", &ABatteryCollectorGameMode::execGetPowerToWin },
			{ "SetCurrentState", &ABatteryCollectorGameMode::execSetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics
	{
		struct BatteryCollectorGameMode_eventGetCurrentState_Parms
		{
			EBAtteryPlayState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryCollectorGameMode_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_BatteryCollector_EBAtteryPlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
		{ "ToolTip", "Getter and setter for CurrentState" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorGameMode, nullptr, "GetCurrentState", sizeof(BatteryCollectorGameMode_eventGetCurrentState_Parms), Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics
	{
		struct BatteryCollectorGameMode_eventGetDecayRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryCollectorGameMode_eventGetDecayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorGameMode, nullptr, "GetDecayRate", sizeof(BatteryCollectorGameMode_eventGetDecayRate_Parms), Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics
	{
		struct BatteryCollectorGameMode_eventGetPowerToWin_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryCollectorGameMode_eventGetPowerToWin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
		{ "ToolTip", "Return the power neeeded to win" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorGameMode, nullptr, "GetPowerToWin", sizeof(BatteryCollectorGameMode_eventGetPowerToWin_Parms), Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics
	{
		struct BatteryCollectorGameMode_eventSetCurrentState_Parms
		{
			EBAtteryPlayState newstate;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newstate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newstate_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::NewProp_newstate = { "newstate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryCollectorGameMode_eventSetCurrentState_Parms, newstate), Z_Construct_UEnum_BatteryCollector_EBAtteryPlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::NewProp_newstate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::NewProp_newstate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::NewProp_newstate_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorGameMode, nullptr, "SetCurrentState", sizeof(BatteryCollectorGameMode_eventSetCurrentState_Parms), Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister()
	{
		return ABatteryCollectorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryCollectorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerToWin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryCollectorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABatteryCollectorGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState, "GetCurrentState" }, // 409509841
		{ &Z_Construct_UFunction_ABatteryCollectorGameMode_GetDecayRate, "GetDecayRate" }, // 1509733802
		{ &Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin, "GetPowerToWin" }, // 176198922
		{ &Z_Construct_UFunction_ABatteryCollectorGameMode_SetCurrentState, "SetCurrentState" }, // 3495291462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BatteryCollectorGameMode.h" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
		{ "ToolTip", "instance of the HUD" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_CurrentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
		{ "ToolTip", "The widget class to use for our HUD screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_HUDWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWin_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
		{ "ToolTip", "Power needed to win" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWin = { "PowerToWin", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, PowerToWin), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayRate_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
		{ "ToolTip", "The rate at which the cahracter loses power" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectorGameMode, DecayRate), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_HUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_PowerToWin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectorGameMode_Statics::NewProp_DecayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryCollectorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryCollectorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryCollectorGameMode_Statics::ClassParams = {
		&ABatteryCollectorGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::PropPointers),
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatteryCollectorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryCollectorGameMode, 3898844218);
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ABatteryCollectorGameMode>()
	{
		return ABatteryCollectorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorGameMode(Z_Construct_UClass_ABatteryCollectorGameMode, &ABatteryCollectorGameMode::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ABatteryCollectorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
