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

#ifndef ICLIENTNETWORKDEVICEMANAGER_H
#define ICLIENTNETWORKDEVICEMANAGER_H
#ifdef _WIN32
#pragma once
#endif

#include "Types/SteamTypes.h"
#include "Interfaces/Common/AppsCommon.h"

enum ENetworkDeviceState
{
	// TODO : Reverse this enum
};

enum EWirelessSecurityFlags
{
	// TODO : Reverse this enum
};

struct WirelessAccessPoint_t
{
	// TODO : Reverse this struct
#ifdef _S4N_
	int m_iPadding;
#endif
};

struct WirelessCredentials_t
{
	// TODO : Reverse this struct
#ifdef _S4N_
	int m_iPadding;
#endif
};

enum ENetworkDeviceManagerError
{
	// TODO: Reverse this enum
};

#define CLIENTNETWORKDEVICEMANAGER_INTERFACE_VERSION "CLIENTNETWORKDEVICEMANAGER_INTERFACE_VERSION001"

abstract_class UNSAFE_INTERFACE IClientNetworkDeviceManager
{
public:
	virtual bool IsInterfaceValid() = 0;
	virtual void RefreshDevices() = 0;
	virtual unknown_ret EnumerateNetworkDevices(uint32, uint32*) = 0;
	virtual unknown_ret GetDeviceType(uint32) = 0;
	virtual bool IsCurrentDevice(uint32) = 0;
	virtual bool IsCurrentlyConnected(uint32) = 0;
	virtual unknown_ret GetDeviceIP4(uint32, uint32, uint32*) = 0;
	virtual unknown_ret GetDeviceBroadcastIP4(uint32, uint32, uint32*) = 0;
	virtual const char* GetDeviceVendor(uint32) = 0;
	virtual const char* GetDeviceProduct(uint32) = 0;
	virtual const char* GetMacAddress(uint32) = 0;
	virtual unknown_ret GetSubnetMaskBitCount(uint32, uint32, uint32*) = 0;
	virtual unknown_ret GetRouterAddressIP4(uint32, uint32, uint32*) = 0;
	virtual unknown_ret GetDNSResolversIP4(uint32, uint32, uint32*) = 0;
	virtual unknown_ret GetDeviceState(uint32) = 0;
	virtual bool GetDevicePluggedState(uint32) = 0;
	virtual unknown_ret EnumerateWirelessEndpoints(uint32, uint32, uint32*) = 0;
	virtual unknown_ret GetConnectedWirelessEndpointSSID(uint32) = 0;
	virtual unknown_ret GetWirelessSecurityCapabilities(uint32) = 0;
	virtual const char* GetWirelessEndpointSSIDUserDisplayString(uint32, uint32) = 0;
	virtual unknown_ret GetWirelessEndpointStrength(uint32, uint32) = 0;
	virtual bool IsSecurityRequired(uint32, uint32) = 0;
	virtual const char* GetCachedWirelessCredentials(uint32, uint32) = 0;
	virtual bool DisconnectFromDevice(uint32, bool) = 0;
	virtual void SetCustomIPSettings(uint32, uint32, uint32, uint32, uint32, uint32) = 0;
	virtual bool ConnectToDevice(uint32, uint32, const char*, const char*, uint32, bool, bool) = 0;
	virtual bool IsWirelessEndpointForgettable(uint32, uint32) = 0;
	virtual void ForgetWirelessEndpointAutoconnect(uint32, uint32) = 0;
	virtual bool IsUsingDHCP(uint32) = 0;
	virtual bool GetCustomIPSettings(uint32, uint32*, uint32*, uint32*, uint32*, uint32*) = 0;
};

#endif // ICLIENTNETWORKDEVICEMANAGER_H
