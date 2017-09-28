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

#ifndef ICLIENTBLUETOOTHMANAGER_H
#define ICLIENTBLUETOOTHMANAGER_H
#ifdef _WIN32
#pragma once
#endif

#include "Types/SteamTypes.h"

abstract_class UNSAFE_INTERFACE IClientBluetoothManager
{
public:
	virtual void SetDiscovering(bool) = 0;
	virtual unknown_ret EnumerateDevice(uint32) = 0;
	virtual int32 GetDeviceType(const char*) = 0;
	virtual const char* GetDeviceName(const char*) = 0;
	virtual bool IsConnected(const char*) = 0;
	virtual bool IsPaired(const char*) = 0;
	virtual bool Pair(const char*) = 0;
	virtual bool UnPair(const char*) = 0;
	virtual bool Connect(const char*) = 0;
	virtual bool Disconnect(const char*) = 0;
	virtual bool IsAvailable() = 0;
};

#endif // ICLIENTBLUETOOTHMANAGER_H
