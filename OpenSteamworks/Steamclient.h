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


#ifndef STEAMCLIENT_H
#define STEAMCLIENT_H
#ifdef _WIN32
#pragma once
#endif

#include "Types/SteamTypes.h"

#if defined(__GNUC__) && defined(_WIN32)
	// This ugly hack allows us to provide GCC compatibility on windows without much effort
	#pragma push_macro("virtual")
	#undef virtual
	#define virtual virtual __thiscall
#endif

// client
#include "Interfaces/Steam/ISteamClient/ISteamClient006.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient007.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient008.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient009.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient010.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient011.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient012.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient013.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient014.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient015.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient016.h"
#include "Interfaces/Steam/ISteamClient/ISteamClient017.h"

// friends
#include "Interfaces/Steam/ISteamFriends/ISteamFriends001.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends002.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends003.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends004.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends005.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends006.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends007.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends008.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends009.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends010.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends011.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends012.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends013.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends014.h"
#include "Interfaces/Steam/ISteamFriends/ISteamFriends015.h"

// screenshots
#include "Interfaces/Steam/ISteamScreenshots/ISteamScreenshots001.h"
#include "Interfaces/Steam/ISteamScreenshots/ISteamScreenshots002.h"
#include "Interfaces/Steam/ISteamScreenshots/ISteamScreenshots003.h"

// user
#include "Interfaces/Steam/ISteamUser/ISteamUser004.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser005.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser006.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser007.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser008.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser009.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser010.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser011.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser012.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser013.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser014.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser015.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser016.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser017.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser018.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser019.h"
#include "Interfaces/Steam/ISteamUser/ISteamUser020.h"

// OAuth
#include "Interfaces/Steam/ISteamOAuth/ISteamOAuth001.h"

// apps
#include "Interfaces/Steam/ISteamApps/ISteamApps001.h"
#include "Interfaces/Steam/ISteamApps/ISteamApps002.h"
#include "Interfaces/Steam/ISteamApps/ISteamApps003.h"
#include "Interfaces/Steam/ISteamApps/ISteamApps004.h"
#include "Interfaces/Steam/ISteamApps/ISteamApps005.h"
#include "Interfaces/Steam/ISteamApps/ISteamApps006.h"
#include "Interfaces/Steam/ISteamApps/ISteamApps007.h"
#include "Interfaces/Steam/ISteamApps/ISteamApps008.h"

// app list
#include "Interfaces/Steam/ISteamAppList/ISteamAppList001.h"

// user stats
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats001.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats002.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats003.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats004.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats005.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats006.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats007.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats008.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats009.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats010.h"
#include "Interfaces/Steam/ISteamUserStats/ISteamUserStats011.h"

// utils
#include "Interfaces/Steam/ISteamUtils/ISteamUtils001.h"
#include "Interfaces/Steam/ISteamUtils/ISteamUtils002.h"
#include "Interfaces/Steam/ISteamUtils/ISteamUtils003.h"
#include "Interfaces/Steam/ISteamUtils/ISteamUtils004.h"
#include "Interfaces/Steam/ISteamUtils/ISteamUtils005.h"
#include "Interfaces/Steam/ISteamUtils/ISteamUtils006.h"
#include "Interfaces/Steam/ISteamUtils/ISteamUtils007.h"
#include "Interfaces/Steam/ISteamUtils/ISteamUtils008.h"
#include "Interfaces/Steam/ISteamUtils/ISteamUtils009.h"

// game server
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer002.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer003.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer004.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer005.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer006.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer007.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer008.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer009.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer010.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer011.h"
#include "Interfaces/Steam/ISteamGameServer/ISteamGameServer012.h"

// inventory
#include "Interfaces/Steam/ISteamInventory/ISteamInventory001.h"
#include "Interfaces/Steam/ISteamInventory/ISteamInventory002.h"

// master server updater
#include "Interfaces/Steam/ISteamMasterServerUpdater/ISteamMasterServerUpdater001.h"

// matchmaking
#include "Interfaces/Steam/ISteamMatchmaking/ISteamMatchmaking001.h"
#include "Interfaces/Steam/ISteamMatchmaking/ISteamMatchmaking002.h"
#include "Interfaces/Steam/ISteamMatchmaking/ISteamMatchmaking003.h"
#include "Interfaces/Steam/ISteamMatchmaking/ISteamMatchmaking004.h"
#include "Interfaces/Steam/ISteamMatchmaking/ISteamMatchmaking005.h"
#include "Interfaces/Steam/ISteamMatchmaking/ISteamMatchmaking006.h"
#include "Interfaces/Steam/ISteamMatchmaking/ISteamMatchmaking007.h"
#include "Interfaces/Steam/ISteamMatchmaking/ISteamMatchmaking008.h"
#include "Interfaces/Steam/ISteamMatchmaking/ISteamMatchmaking009.h"

// matchmaking servers
#include "Interfaces/Steam/ISteamMatchmakingServers/ISteamMatchmakingServers001.h"
#include "Interfaces/Steam/ISteamMatchmakingServers/ISteamMatchmakingServers002.h"

// networking
#include "Interfaces/Steam/ISteamNetworking/ISteamNetworking001.h"
#include "Interfaces/Steam/ISteamNetworking/ISteamNetworking002.h"
#include "Interfaces/Steam/ISteamNetworking/ISteamNetworking003.h"
#include "Interfaces/Steam/ISteamNetworking/ISteamNetworking004.h"
#include "Interfaces/Steam/ISteamNetworking/ISteamNetworking005.h"

// billing
#include "Interfaces/Steam/ISteamBilling/ISteamBilling001.h"
#include "Interfaces/Steam/ISteamBilling/ISteamBilling002.h"

// remote storage
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage001.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage002.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage003.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage004.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage005.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage006.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage007.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage008.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage009.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage010.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage011.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage012.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage013.h"
#include "Interfaces/Steam/ISteamRemoteStorage/ISteamRemoteStorage014.h"

// content server
#include "Interfaces/Steam/ISteamContentServer/ISteamContentServer001.h"
#include "Interfaces/Steam/ISteamContentServer/ISteamContentServer002.h"

// steam 2 bridge
#include "Interfaces/Steam/ISteam2Bridge/ISteam2Bridge001.h"
#include "Interfaces/Steam/ISteam2Bridge/ISteam2Bridge002.h"

// game coordinator
#include "Interfaces/Steam/ISteamGameCoordinator/ISteamGameCoordinator001.h"

// game server stats
#include "Interfaces/Steam/ISteamGameServerStats/ISteamGameServerStats001.h"

// game stats
#include "Interfaces/Steam/ISteamGameStats/ISteamGameStats001.h"

// app ticket
#include "Interfaces/Steam/ISteamAppTicket/ISteamAppTicket001.h"

// http
#include "Interfaces/Steam/ISteamHTTP/ISteamHTTP001.h"
#include "Interfaces/Steam/ISteamHTTP/ISteamHTTP002.h"

// unified messages
#include "Interfaces/Steam/ISteamUnifiedMessages/ISteamUnifiedMessages001.h"

// stream launcher
#include "Interfaces/Steam/ISteamStreamLauncher/ISteamStreamLauncher001.h"

// controller
#include "Interfaces/Steam/ISteamController/ISteamController001.h"
#include "Interfaces/Steam/ISteamController/ISteamController003.h"
#include "Interfaces/Steam/ISteamController/ISteamController004.h"
#include "Interfaces/Steam/ISteamController/ISteamController005.h"

// music
#include "Interfaces/Steam/ISteamMusic/ISteamMusic001.h"

// music remote
#include "Interfaces/Steam/ISteamMusicRemote/ISteamMusicRemote001.h"


// ugc
#include "Interfaces/Steam/ISteamUGC/ISteamUGC001.h"
#include "Interfaces/Steam/ISteamUGC/ISteamUGC002.h"
#include "Interfaces/Steam/ISteamUGC/ISteamUGC003.h"
#include "Interfaces/Steam/ISteamUGC/ISteamUGC008.h"
#include "Interfaces/Steam/ISteamUGC/ISteamUGC009.h"
#include "Interfaces/Steam/ISteamUGC/ISteamUGC010.h"

// html surface
#include "Interfaces/Steam/ISteamHTMLSurface/ISteamHTMLSurface001.h"
#include "Interfaces/Steam/ISteamHTMLSurface/ISteamHTMLSurface002.h"
#include "Interfaces/Steam/ISteamHTMLSurface/ISteamHTMLSurface003.h"

// video
#include "Interfaces/Steam/ISteamVideo/ISteamVideo001.h"
#include "Interfaces/Steam/ISteamVideo/ISteamVideo002.h"

// parental settings
#include "Interfaces/Steam/ISteamParentalSettings/ISteamParentalSettings001.h"

#ifndef NO_ICLIENT
// client interfaces
#include "Interfaces/Client/IClientEngine.h"

#include "Interfaces/Client/IClientAppManager.h"
#include "Interfaces/Client/IClientApps.h"
#include "Interfaces/Client/IClientAudio.h"
#include "Interfaces/Client/IClientBilling.h"
#include "Interfaces/Client/IClientContentServer.h"
#include "Interfaces/Client/IClientDepotBuilder.h"
#include "Interfaces/Client/IClientFriends.h"
#include "Interfaces/Client/IClientGameCoordinator.h"
#include "Interfaces/Client/IClientGameServer.h"
#include "Interfaces/Client/IClientGameServerStats.h"
#include "Interfaces/Client/IClientGameStats.h"
#include "Interfaces/Client/IClientInventory.h"
#include "Interfaces/Client/IClientMasterServerUpdater.h"
#include "Interfaces/Client/IClientMatchmaking.h"
#include "Interfaces/Client/IClientMatchmakingServers.h"
#include "Interfaces/Client/IClientNetworking.h"
#include "Interfaces/Client/IClientRemoteStorage.h"
#include "Interfaces/Client/IClientScreenshots.h"
#include "Interfaces/Client/IClientUser.h"
#include "Interfaces/Client/IClientUserStats.h"
#include "Interfaces/Client/IClientUtils.h"
#include "Interfaces/Client/IClientHTTP.h"
#include "Interfaces/Client/IClientHTMLSurface.h"
#include "Interfaces/Client/IClientConfigStore.h"
#include "Interfaces/Client/IClientUnifiedMessages.h"
#include "Interfaces/Client/IClientStreamLauncher.h"
#include "Interfaces/Client/IClientNetworkDeviceManager.h"
#include "Interfaces/Client/IClientDeviceAuth.h"
#include "Interfaces/Client/IClientMusic.h"
#include "Interfaces/Client/IClientProductBuilder.h"
#include "Interfaces/Client/IClientShortcuts.h"
#include "Interfaces/Client/IClientStreamClient.h"
#include "Interfaces/Client/IClientUGC.h"
#include "Interfaces/Client/IClientVideo.h"
#include "Interfaces/Client/IClientBluetoothManager.h"
#include "Interfaces/Client/IClientParentalSettings.h"
#endif // NO_ICLIENT

// callback
#include "Types/CCallback.h"

// steam_api
#ifdef VERSION_SAFE_STEAM_API_INTERFACES
	#include "Types/CSteamAPIContext.h"
#endif // VERSION_SAFE_STEAM_API_INTERFACES

#if defined(__GNUC__) && defined(_WIN32)
	#pragma pop_macro("virtual")
#endif

// Breakpad
S_API errno_t STEAM_CALL Breakpad_SetSteamID( uint64 ulSteamID );
S_API errno_t STEAM_CALL Breakpad_SteamSetSteamID( uint64 ulSteamID );
S_API void STEAM_CALL Breakpad_SteamMiniDumpInit( uint32 a, const char *b, const char *c );
S_API errno_t STEAM_CALL Breakpad_SteamWriteMiniDumpSetComment( const char *pchMsg );
S_API void STEAM_CALL Breakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId( int a, int b );


// Steam user
S_API bool STEAM_CALL Steam_BConnected( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API bool STEAM_CALL Steam_BLoggedOn( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API void STEAM_CALL Steam_LogOn( HSteamUser hUser, HSteamPipe hSteamPipe, uint64 ulSteamID );
S_API void STEAM_CALL Steam_LogOff( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API int STEAM_CALL Steam_InitiateGameConnection( HSteamUser hUser, HSteamPipe hSteamPipe, void *pBlob, int cbMaxBlob, uint64 steamID, int nGameAppID, uint32 unIPServer, uint16 usPortServer, bool bSecure );
S_API void STEAM_CALL Steam_TerminateGameConnection( HSteamUser hUser, HSteamPipe hSteamPipe, uint32 unIPServer, uint16 usPortServer );

// Steam callbacks
S_API bool STEAM_CALL Steam_BGetCallback( HSteamPipe hSteamPipe, CallbackMsg_t *pCallbackMsg );
S_API void STEAM_CALL Steam_FreeLastCallback( HSteamPipe hSteamPipe );
S_API bool STEAM_CALL Steam_GetAPICallResult( HSteamPipe hSteamPipe, SteamAPICall_t hSteamAPICall, void* pCallback, int cubCallback, int iCallbackExpected, bool* pbFailed );

// Steam client
S_API HSteamPipe STEAM_CALL Steam_CreateSteamPipe();
S_API bool STEAM_CALL Steam_BReleaseSteamPipe( HSteamPipe hSteamPipe );
S_API HSteamUser STEAM_CALL Steam_CreateLocalUser( HSteamPipe *phSteamPipe, EAccountType eAccountType );
S_API HSteamUser STEAM_CALL Steam_CreateGlobalUser( HSteamPipe *phSteamPipe );
S_API HSteamUser STEAM_CALL Steam_ConnectToGlobalUser( HSteamPipe hSteamPipe );
S_API void STEAM_CALL Steam_ReleaseUser( HSteamPipe hSteamPipe, HSteamUser hUser );
S_API void STEAM_CALL Steam_SetLocalIPBinding( uint32 unIP, uint16 usLocalPort );

// Steam game server
S_API int STEAM_CALL Steam_GSGetSteamGameConnectToken( HSteamUser hUser, HSteamPipe hSteamPipe, void *pBlob, int cbBlobMax ); // does this exist anymore?
S_API void* STEAM_CALL Steam_GetGSHandle( HSteamUser hUser, HSteamPipe hSteamPipe );
S_API bool STEAM_CALL Steam_GSSendSteam2UserConnect( void *phSteamHandle, uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie );
S_API bool STEAM_CALL Steam_GSSendUserDisconnect( void *phSteamHandle, uint64 ulSteamID, uint32 unUserID );
S_API OBSOLETE_FUNCTION bool STEAM_CALL Steam_GSSendUserStatusResponse( void *phSteamHandle, uint64 ulSteamID, int nSecondsConnected, int nSecondsSinceLast );
S_API bool STEAM_CALL Steam_GSUpdateStatus( void *phSteamHandle, int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName );
S_API bool STEAM_CALL Steam_GSRemoveUserConnect( void *phSteamHandle, uint32 unUserID );
S_API void STEAM_CALL Steam_GSSetSpawnCount( void *phSteamHandle, uint32 ucSpawn );
S_API bool STEAM_CALL Steam_GSGetSteam2GetEncryptionKeyToSendToNewClient( void *phSteamHandle, void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey );
S_API void STEAM_CALL Steam_GSLogOn( void *phSteamHandle );
S_API void STEAM_CALL Steam_GSLogOff( void *phSteamHandle );
S_API bool STEAM_CALL Steam_GSBLoggedOn( void *phSteamHandle );
S_API bool STEAM_CALL Steam_GSSetServerType( void *phSteamHandle, int32 nAppIdServed, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion );
S_API bool STEAM_CALL Steam_GSBSecure( void *phSteamHandle);


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	Steam API setup & shutdown
//
//	These functions manage loading, initializing and shutdown of the steamclient.dll
//
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// S_API void SteamAPI_Init(); (see below)
S_API void SteamAPI_Shutdown();

// checks if a local Steam client is running 
S_API bool SteamAPI_IsSteamRunning();

// Detects if your executable was launched through the Steam client, and restarts your game through 
// the client if necessary. The Steam client will be started if it is not running.
//
// Returns: true if your executable was NOT launched through the Steam client. This function will
//          then start your application through the client. Your current process should exit.
//
//          false if your executable was started through the Steam client or a steam_appid.txt file
//          is present in your game's directory (for development). Your current process should continue.
//
// NOTE: This function should be used only if you are using CEG or not using Steam's DRM. Once applied
//       to your executable, Steam's DRM will handle restarting through Steam if necessary.
S_API bool SteamAPI_RestartAppIfNecessary( uint32 unOwnAppID );

// crash dump recording functions
S_API void SteamAPI_WriteMiniDump( uint32 uStructuredExceptionCode, void* pvExceptionInfo, uint32 uBuildID );
S_API void SteamAPI_SetMiniDumpComment( const char *pchMsg );

// this should be called before the game initialized the steam APIs
// pchDate should be of the format "Mmm dd yyyy" (such as from the __DATE__ macro )
// pchTime should be of the format "hh:mm:ss" (such as from the __TIME__ macro )
// bFullMemoryDumps (Win32 only) -- writes out a uuid-full.dmp in the client/dumps folder
// pvContext-- can be NULL, will be the void * context passed into m_pfnPreMinidumpCallback
// PFNPreMinidumpCallback m_pfnPreMinidumpCallback   -- optional callback which occurs just before a .dmp file is written during a crash.  Applications can hook this to allow adding additional information into the .dmp comment stream.
S_API void SteamAPI_UseBreakpadCrashHandler( char const *pchVersion, char const *pchDate, char const *pchTime, bool bFullMemoryDumps, void *pvContext, PFNPreMinidumpCallback m_pfnPreMinidumpCallback );
S_API void SteamAPI_SetBreakpadAppID( uint32 unAppID );

// interface pointers, configured by SteamAPI_Init()
S_API_UNSAFE ISteamClient017* STEAM_CALL SteamClient();

// VERSION_SAFE_STEAM_API_INTERFACES is usually not necessary, but it provides safety against releasing
// new steam_api.dll's without recompiling/rereleasing modules that use it.
//
// If you use VERSION_SAFE_STEAM_API_INTERFACES, then you should call SteamAPI_InitSafe(). Also, to get the 
// Steam interfaces, you must create and Init() a CSteamAPIContext (below) and use the interfaces in there.
//
// If you don't use VERSION_SAFE_STEAM_API_INTERFACES, then you can use SteamAPI_Init() and the SteamXXXX() 
// functions below to get at the Steam interfaces.
//
#ifdef VERSION_SAFE_STEAM_API_INTERFACES
S_API bool STEAM_CALL SteamAPI_InitSafe();
#else
S_API bool STEAM_CALL SteamAPI_Init();

S_API_UNSAFE ISteamUser019* STEAM_CALL SteamUser();
S_API_UNSAFE ISteamFriends015* STEAM_CALL SteamFriends();
S_API_UNSAFE ISteamUtils008* STEAM_CALL SteamUtils();
S_API_UNSAFE ISteamMatchmaking009* STEAM_CALL SteamMatchmaking();
S_API_UNSAFE ISteamUserStats011* STEAM_CALL SteamUserStats();
S_API_UNSAFE ISteamApps008* STEAM_CALL SteamApps();
S_API_UNSAFE ISteamNetworking005* STEAM_CALL SteamNetworking();
S_API_UNSAFE ISteamMatchmakingServers002* STEAM_CALL SteamMatchmakingServers();
S_API_UNSAFE ISteamRemoteStorage013* STEAM_CALL SteamRemoteStorage();
S_API_UNSAFE ISteamMusic* STEAM_CALL SteamMusic();
S_API_UNSAFE ISteamAppList001* STEAM_CALL SteamAppList();
S_API_UNSAFE ISteamController005* SteamController();
S_API_UNSAFE ISteamHTMLSurface003* SteamHTMLSurface();
S_API_UNSAFE ISteamHTTP002* SteamHTTP();
S_API_UNSAFE ISteamInventory002* SteamInventory();
S_API_UNSAFE ISteamMusicRemote001* SteamMusicRemote();
S_API_UNSAFE ISteamScreenshots003* SteamScreenshots();
S_API_UNSAFE ISteamUGC009* SteamUGC();
S_API_UNSAFE ISteamUnifiedMessages001* SteamUnifiedMessages();
S_API_UNSAFE ISteamVideo002* SteamVideo();

#endif // VERSION_SAFE_STEAM_API_INTERFACES

// sets whether or not Steam_RunCallbacks() should do a try {} catch (...) {} around calls to issuing callbacks
S_API void STEAM_CALL SteamAPI_SetTryCatchCallbacks( bool bTryCatchCallbacks );

S_API void SteamAPI_RunCallbacks();

// functions used by the utility CCallback objects to receive callbacks
S_API void SteamAPI_RegisterCallback( class CCallbackBase *pCallback, int iCallback );
S_API void SteamAPI_UnregisterCallback( class CCallbackBase *pCallback );
// functions used by the utility CCallResult objects to receive async call results
S_API void SteamAPI_RegisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );
S_API void SteamAPI_UnregisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	steamclient.dll private wrapper functions
//
//	The following functions are part of abstracting API access to the steamclient.dll, but should only be used in very specific cases
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
S_API void STEAM_CALL Steam_RunCallbacks( HSteamPipe hSteamPipe, bool bGameServerCallbacks );
S_API void STEAM_CALL Steam_RegisterInterfaceFuncs( void *hModule );

S_API HSteamUser STEAM_CALL Steam_GetHSteamUserCurrent();

S_API const char* STEAM_CALL SteamAPI_GetSteamInstallPath();

// used in version safe api
S_API HSteamPipe STEAM_CALL GetHSteamPipe();
S_API HSteamUser STEAM_CALL GetHSteamUser();

S_API HSteamPipe STEAM_CALL SteamAPI_GetHSteamPipe();
S_API HSteamUser STEAM_CALL SteamAPI_GetHSteamUser();

//S_API bool STEAM_CALL SteamGameServer_InitSafe( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usSpectatorPort, uint16 usQueryPort, EServerMode eServerMode, const char *pchGameDir, const char *pchVersionString );
//S_API bool STEAM_CALL SteamGameServer_Init( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usSpectatorPort, uint16 usQueryPort, EServerMode eServerMode, const char *pchGameDir, const char *pchVersionString );

S_API void STEAM_CALL SteamGameServer_Shutdown();
S_API void STEAM_CALL SteamGameServer_RunCallbacks();

S_API bool STEAM_CALL SteamGameServer_BSecure();
S_API uint64 STEAM_CALL SteamGameServer_GetSteamID();

S_API HSteamPipe STEAM_CALL SteamGameServer_GetHSteamPipe();
S_API HSteamUser STEAM_CALL SteamGameServer_GetHSteamUser(); 
S_API int32 STEAM_CALL SteamGameServer_GetIPCCallCount();

// Note: if you pass MASTERSERVERUPDATERPORT_USEGAMESOCKETSHARE for usQueryPort, then it will use "GameSocketShare" mode, 
// which means that the game is responsible for sending and receiving UDP packets for the master 
// server updater. See references to GameSocketShare in isteammasterserverupdater.h.
//
// Pass 0 for usGamePort or usSpectatorPort if you're not using that. Then, the master server updater will report 
// what's running based on that.
#ifdef VERSION_SAFE_STEAM_API_INTERFACES
S_API bool STEAM_CALL SteamGameServer_InitSafe( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usSpectatorPort, uint16 usQueryPort, EServerMode eServerMode, const char *pchGameDir, const char *pchVersionString );
#else
S_API bool STEAM_CALL SteamGameServer_Init( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usSpectatorPort, uint16 usQueryPort, EServerMode eServerMode, const char *pchGameDir, const char *pchVersionString );

S_API_UNSAFE ISteamGameServer010* STEAM_CALL SteamGameServer();
S_API_UNSAFE ISteamUtils005* STEAM_CALL SteamGameServerUtils();
S_API_UNSAFE ISteamMasterServerUpdater001* STEAM_CALL SteamMasterServerUpdater();
S_API_UNSAFE ISteamNetworking003* STEAM_CALL SteamGameServerNetworking();
S_API_UNSAFE ISteamGameServerStats001* STEAM_CALL SteamGameServerStats();
#endif

//content server
S_API_UNSAFE ISteamContentServer002* STEAM_CALL SteamContentServer();
S_API_UNSAFE ISteamUtils005* STEAM_CALL SteamContentServerUtils();
S_API bool STEAM_CALL SteamContentServer_Init(uint32 unIP, uint16 usPort);

S_API void STEAM_CALL SteamContentServer_Shutdown();
S_API void STEAM_CALL SteamContentServer_RunCallbacks();


// Purpose: utilities to decode/decrypt a ticket from the
// ISteamUser::RequestEncryptedAppTicket, ISteamUser::GetEncryptedAppTicket API
// 
// To use: declare CSteamEncryptedAppTicket, then call BDecryptTicket
// if BDecryptTicket returns true, other accessors are valid
static const int k_nSteamEncryptedAppTicketSymmetricKeyLen = 32;				


S_API bool SteamEncryptedAppTicket_BDecryptTicket( const uint8 *rgubTicketEncrypted, uint32 cubTicketEncrypted,
												  uint8 *rgubTicketDecrypted, uint32 *pcubTicketDecrypted,
												  const uint8 rgubKey[k_nSteamEncryptedAppTicketSymmetricKeyLen], int cubKey );

S_API bool SteamEncryptedAppTicket_BIsTicketForApp( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, AppId_t nAppID );

S_API RTime32 SteamEncryptedAppTicket_GetTicketIssueTime( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted );

S_API void SteamEncryptedAppTicket_GetTicketSteamID( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, CSteamID *psteamID );

S_API AppId_t SteamEncryptedAppTicket_GetTicketAppID( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted );

S_API bool SteamEncryptedAppTicket_BUserOwnsAppInTicket( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, AppId_t nAppID );

S_API bool SteamEncryptedAppTicket_BUserIsVacBanned( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted );

S_API const uint8 *SteamEncryptedAppTicket_GetUserVariableData( uint8 *rgubTicketDecrypted, uint32 cubTicketDecrypted, uint32 *pcubUserData );

#endif // STEAMCLIENT_H
