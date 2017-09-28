//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
//
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#ifndef ISTEAMCONTROLLER004_H
#define ISTEAMCONTROLLER004_H
#ifdef _WIN32
#pragma once
#endif

#include "Types/SteamTypes.h"
#include "Interfaces/Common/ControllerCommon.h"

abstract_class ISteamController004
{
public:
	//
	// Native controller support API
	//

	// Must call init and shutdown when starting/ending use of the interface
	virtual bool Init() = 0;
	virtual bool Shutdown() = 0;

	// Pump callback/callresult events, SteamAPI_RunCallbacks will do this for you,
	// normally never need to call directly.
	virtual void RunFrame() = 0;

	virtual int32 GetConnectedControllers(ControllerHandle_t* hControllers) = 0;
	virtual bool ShowBindingPanel(ControllerHandle_t hController) = 0;

	virtual ControllerActionSetHandle_t GetActionSetHandle(const char* actionSetName) = 0;
	virtual void ActivateActionSet(ControllerHandle_t hController, ControllerActionSetHandle_t hAction) = 0;
	virtual ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t hController) = 0;

	virtual ControllerDigitalActionHandle_t GetDigitalActionHandle(const char* actionName) = 0;
	STEAMWORKS_STRUCT_RETURN_2(ControllerDigitalActionData_t, GetDigitalActionData, ControllerHandle_t, controllerHandle, ControllerDigitalActionHandle_t, actionHandle);	// virtual ControllerDigitalActionData_t GetDigitalActionData( ControllerHandle_t, ControllerDigitalActionHandle_t ) = 0;
	virtual int32 GetDigitalActionOrigins(ControllerHandle_t hController, ControllerActionSetHandle_t hActionSet, ControllerDigitalActionHandle_t hAction, EControllerActionOrigin* eOrigin) = 0;

	virtual ControllerAnalogActionHandle_t GetAnalogActionHandle(const char* actionName) = 0;
	STEAMWORKS_STRUCT_RETURN_2(ControllerAnalogActionData_t, GetAnalogActionData, ControllerHandle_t, controllerHandle, ControllerAnalogActionHandle_t, actionHandle);	//virtual ControllerAnalogActionData_t GetAnalogActionData( ControllerHandle_t, ControllerAnalogActionHandle_t ) = 0;
	virtual int32 GetAnalogActionOrigins(ControllerHandle_t hController, ControllerActionSetHandle_t hActionSet, ControllerAnalogActionHandle_t hAction, EControllerActionOrigin* eOrigin) = 0;

	virtual void StopAnalogActionMomentum(ControllerHandle_t hController, ControllerAnalogActionHandle_t hAction) = 0;

	// Trigger a haptic pulse on the controller
	virtual void TriggerHapticPulse(ControllerHandle_t hController, ESteamControllerPad eTargetPad, uint16 usDurationMicroSec) = 0;
	virtual void TriggerRepeatedHapticPulse(ControllerHandle_t hController, ESteamControllerPad, uint16 durationMs, uint16 offMs, uint16 repeat, uint32 flags) = 0;

	virtual int32 GetGamepadIndexForController(ControllerHandle_t hController) = 0;
	virtual ControllerHandle_t GetControllerForGamepadIndex(int32 idx) = 0;

	STEAMWORKS_STRUCT_RETURN_1(ControllerMotionData_t, GetMotionData, ControllerHandle_t, controllerHandle);	//virtual ControllerMotionData_t GetMotionData( ControllerHandle_t ) = 0;

	virtual bool ShowDigitalActionOrigins(ControllerHandle_t hController, ControllerDigitalActionHandle_t hAction, float scale, float XPos, float YPos) = 0;
	virtual bool ShowAnalogActionOrigins(ControllerHandle_t hController, ControllerAnalogActionHandle_t hAction, float scale, float XPos, float YPos) = 0;
};

#endif
