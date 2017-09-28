#ifndef CSTEAMAPICONTEXT_H
#define CSTEAMAPICONTEXT_H
#ifdef _WIN32
#pragma once
#endif 

#include "SteamTypes.h"
#include "Steamclient.h"

//----------------------------------------------------------------------------------------------------------------------------------------------------------//
// VERSION_SAFE_STEAM_API_INTERFACES uses CSteamAPIContext to provide interfaces to each module in a way that 
// lets them each specify the interface versions they are compiled with.
//
// It's important that these stay inlined in the header so the calling module specifies the interface versions
// for whatever Steam API version it has.
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

class CSteamAPIContext
{
public:
	CSteamAPIContext();
	void Clear();

	bool Init();

	ISteamUser019*                 SteamUser()                { return m_pSteamUser; }
	ISteamFriends015*              SteamFriends()             { return m_pSteamFriends; }
	ISteamUtils008*                SteamUtils()               { return m_pSteamUtils; }
	ISteamMatchmaking008*          SteamMatchmaking()         { return m_pSteamMatchmaking; }
	ISteamUserStats007*            SteamUserStats()           { return m_pSteamUserStats; }
	ISteamApps008*                 SteamApps()                { return m_pSteamApps; }
	ISteamMatchmakingServers002*   SteamMatchmakingServers()  { return m_pSteamMatchmakingServers; }
	ISteamNetworking003*           SteamNetworking()          { return m_pSteamNetworking; }
	ISteamRemoteStorage012*        SteamRemoteStorage()       { return m_pSteamRemoteStorage; }
	ISteamScreenshots003*          SteamScreenshots()         { return m_pSteamScreenshots; }
	ISteamHTTP002*                 SteamHTTP()                { return m_pSteamHTTP; }
	ISteamHTMLSurface003*          SteamHTMLSurface()         { return m_pSteamHTMLSurface;  }
	ISteamUnifiedMessages001*      SteamUnifiedMessages()     { return m_pSteamUnifiedMessages; }
	ISteamController005*           SteamController()          { return m_pSteamController; }
	ISteamUGC009*                  SteamUGC()                 { return m_pSteamUGC; }
	ISteamAppList001*              SteamAppList()             { return m_pSteamAppList; }
	ISteamMusic001*                SteamMusic()               { return m_pSteamMusic; }
	ISteamVideo001*                SteamVideo()               { return m_pSteamVideo; }


private:
	ISteamUser019                  *m_pSteamUser;
	ISteamFriends015               *m_pSteamFriends;
	ISteamUtils008                 *m_pSteamUtils;
	ISteamMatchmaking008           *m_pSteamMatchmaking;
	ISteamUserStats007             *m_pSteamUserStats;
	ISteamApps008                  *m_pSteamApps;
	ISteamMatchmakingServers002    *m_pSteamMatchmakingServers;
	ISteamNetworking003            *m_pSteamNetworking;
	ISteamRemoteStorage012         *m_pSteamRemoteStorage;
	ISteamScreenshots003           *m_pSteamScreenshots;
	ISteamHTTP002                  *m_pSteamHTTP;
	ISteamHTMLSurface003           *m_pSteamHTMLSurface;
	ISteamUnifiedMessages001       *m_pSteamUnifiedMessages;
	ISteamController005	           *m_pSteamController;
	ISteamUGC009                   *m_pSteamUGC;
	ISteamAppList001               *m_pSteamAppList;
	ISteamMusic001                 *m_pSteamMusic;
	ISteamVideo001                 *m_pSteamVideo;
};

inline CSteamAPIContext::CSteamAPIContext()
{
	Clear();
}

inline void CSteamAPIContext::Clear()
{
	m_pSteamUser = NULL;
	m_pSteamFriends = NULL;
	m_pSteamUtils = NULL;
	m_pSteamMatchmaking = NULL;
	m_pSteamUserStats = NULL;
	m_pSteamApps = NULL;
	m_pSteamMatchmakingServers = NULL;
	m_pSteamNetworking = NULL;
	m_pSteamRemoteStorage = NULL;
	m_pSteamScreenshots = NULL;
	m_pSteamHTTP = NULL;
	m_pSteamHTMLSurface = NULL;
	m_pSteamUnifiedMessages = NULL;
	m_pSteamController = NULL;
	m_pSteamUGC = NULL;
	m_pSteamAppList = NULL;
	m_pSteamMusic = NULL;
	m_pSteamVideo = NULL;
}

// This function must be inlined so the module using steam_api.dll gets the version names they want.
inline bool CSteamAPIContext::Init()
{
	if ( !SteamClient() )
		return false;

	HSteamUser hSteamUser = SteamAPI_GetHSteamUser();
	HSteamPipe hSteamPipe = SteamAPI_GetHSteamPipe();

	m_pSteamUser = (ISteamUser019 *)SteamClient()->GetISteamUser( hSteamUser, hSteamPipe, STEAMUSER_INTERFACE_VERSION_019 );
	if ( !m_pSteamUser )
		return false;

	m_pSteamFriends = (ISteamFriends015 *)SteamClient()->GetISteamFriends( hSteamUser, hSteamPipe, STEAMFRIENDS_INTERFACE_VERSION_015 );
	if ( !m_pSteamFriends )
		return false;

	m_pSteamUtils = (ISteamUtils008 *)SteamClient()->GetISteamUtils( hSteamPipe, STEAMUTILS_INTERFACE_VERSION_008 );
	if ( !m_pSteamUtils )
		return false;

	m_pSteamMatchmaking = (ISteamMatchmaking008 *)SteamClient()->GetISteamMatchmaking( hSteamUser, hSteamPipe, STEAMMATCHMAKING_INTERFACE_VERSION_008 );
	if ( !m_pSteamMatchmaking )
		return false;

	m_pSteamMatchmakingServers = (ISteamMatchmakingServers002 *)SteamClient()->GetISteamMatchmakingServers( hSteamUser, hSteamPipe, STEAMMATCHMAKINGSERVERS_INTERFACE_VERSION_002 );
	if ( !m_pSteamMatchmakingServers )
		return false;

	m_pSteamUserStats = (ISteamUserStats007 *)SteamClient()->GetISteamUserStats( hSteamUser, hSteamPipe, STEAMUSERSTATS_INTERFACE_VERSION_007 );
	if ( !m_pSteamUserStats )
		return false;

	m_pSteamApps = (ISteamApps008 *)SteamClient()->GetISteamApps( hSteamUser, hSteamPipe, STEAMAPPS_INTERFACE_VERSION_008 );
	if ( !m_pSteamApps )
		return false;

	m_pSteamNetworking = (ISteamNetworking003 *)SteamClient()->GetISteamNetworking( hSteamUser, hSteamPipe, STEAMNETWORKING_INTERFACE_VERSION_003 );
	if ( !m_pSteamNetworking )
		return false;

	m_pSteamRemoteStorage = (ISteamRemoteStorage012 *)SteamClient()->GetISteamRemoteStorage( hSteamUser, hSteamPipe, STEAMREMOTESTORAGE_INTERFACE_VERSION_012 );
	if ( !m_pSteamRemoteStorage )
		return false;

	m_pSteamScreenshots = (ISteamScreenshots003 *)SteamClient()->GetISteamScreenshots(hSteamUser, hSteamPipe, STEAMSCREENSHOTS_INTERFACE_VERSION_003);
	if ( !m_pSteamScreenshots )
		return false;

	m_pSteamHTTP = (ISteamHTTP002 *)SteamClient()->GetISteamHTTP(hSteamUser, hSteamPipe, STEAMHTTP_INTERFACE_VERSION_002);
	if ( !m_pSteamHTTP )
		return false;

	m_pSteamHTMLSurface = (ISteamHTMLSurface003 *)SteamClient()->GetISteamHTMLSurface(hSteamUser, hSteamPipe, STEAMHTMLSURFACE_INTERFACE_VERSION003);
	if ( !m_pSteamHTMLSurface )
		return false;

	m_pSteamUnifiedMessages = (ISteamUnifiedMessages001 *)SteamClient()->GetISteamUnifiedMessages(hSteamUser, hSteamPipe, STEAMUNIFIEDMESSAGES_INTERFACE_VERSION_001);
	if ( !m_pSteamUnifiedMessages )
		return false;
	
	m_pSteamController = (ISteamController005 *)SteamClient()->GetISteamController(hSteamUser, hSteamPipe, STEAMCONTROLLER_INTERFACE_VERSION_005);
	if ( !m_pSteamController )
		return false;
	
	m_pSteamUGC = (ISteamUGC009 *)SteamClient()->GetISteamUGC(hSteamUser, hSteamPipe, STEAMUGC_INTERFACE_VERSION_009);
	if ( !m_pSteamUGC )
		return false;

	m_pSteamAppList = (ISteamAppList001 *)SteamClient()->GetISteamAppList(hSteamUser, hSteamPipe, STEAMAPPLIST_INTERFACE_VERSION_001);
	if ( !m_pSteamAppList )
		return false;

	m_pSteamMusic = (ISteamMusic001 *)SteamClient()->GetISteamMusic(hSteamUser, hSteamPipe, STEAMMUSIC_INTERFACE_VERSION_001);
	if ( !m_pSteamMusic )
		return false;

	m_pSteamVideo = (ISteamVideo001 *)SteamClient()->GetISteamVideo(hSteamUser, hSteamPipe, STEAMVIDEO_INTERFACE_VERSION_001);
	if (!m_pSteamMusic)
		return false;

	return true;
}

class CSteamGameServerAPIContext
{
public:
	CSteamGameServerAPIContext();
	void Clear();

	bool Init();

	ISteamGameServer010 *SteamGameServer() { return m_pSteamGameServer; }
	ISteamUtils005 *SteamGameServerUtils() { return m_pSteamGameServerUtils; }
	ISteamMasterServerUpdater001 *SteamMasterServerUpdater() { return m_pSteamMasterServerUpdater; }
	ISteamNetworking003 *SteamGameServerNetworking() { return m_pSteamGameServerNetworking; }
	ISteamGameServerStats001 *SteamGameServerStats() { return m_pSteamGameServerStats; }

private:
	ISteamGameServer010            *m_pSteamGameServer;
	ISteamUtils005                 *m_pSteamGameServerUtils;
	ISteamMasterServerUpdater001   *m_pSteamMasterServerUpdater;
	ISteamNetworking003            *m_pSteamGameServerNetworking;
	ISteamGameServerStats001       *m_pSteamGameServerStats;
};

inline CSteamGameServerAPIContext::CSteamGameServerAPIContext()
{
	Clear();
}

inline void CSteamGameServerAPIContext::Clear()
{
	m_pSteamGameServer = NULL;
	m_pSteamGameServerUtils = NULL;
	m_pSteamMasterServerUpdater = NULL;
	m_pSteamGameServerNetworking = NULL;
	m_pSteamGameServerStats = NULL;
}

S_API ISteamClient009 *g_pSteamClientGameServer;
// This function must be inlined so the module using steam_api.dll gets the version names they want.
inline bool CSteamGameServerAPIContext::Init()
{
	if ( !g_pSteamClientGameServer )
		return false;

	HSteamUser hSteamUser = SteamGameServer_GetHSteamUser();
	HSteamPipe hSteamPipe = SteamGameServer_GetHSteamPipe();

	m_pSteamGameServer = (ISteamGameServer010 *)g_pSteamClientGameServer->GetISteamGameServer( hSteamUser, hSteamPipe, STEAMGAMESERVER_INTERFACE_VERSION_010 );
	if ( !m_pSteamGameServer )
		return false;

	m_pSteamGameServerUtils = (ISteamUtils005 *)g_pSteamClientGameServer->GetISteamUtils( hSteamPipe, STEAMUTILS_INTERFACE_VERSION_005 );
	if ( !m_pSteamGameServerUtils )
		return false;

	m_pSteamMasterServerUpdater = (ISteamMasterServerUpdater001 *)g_pSteamClientGameServer->GetISteamMasterServerUpdater( hSteamUser, hSteamPipe, STEAMMASTERSERVERUPDATER_INTERFACE_VERSION_001 );
	if ( !m_pSteamMasterServerUpdater )
		return false;

	m_pSteamGameServerNetworking = (ISteamNetworking003 *)g_pSteamClientGameServer->GetISteamNetworking( hSteamUser, hSteamPipe, STEAMNETWORKING_INTERFACE_VERSION_003 );
	if ( !m_pSteamGameServerNetworking )
		return false;

	m_pSteamGameServerStats = (ISteamGameServerStats001 *)g_pSteamClientGameServer->GetISteamGameServerStats( hSteamUser, hSteamPipe, STEAMGAMESERVERSTATS_INTERFACE_VERSION_001 );
	if ( !m_pSteamGameServerStats )
		return false;

	return true;
}

#endif // CSTEAMAPICONTEXT_H
