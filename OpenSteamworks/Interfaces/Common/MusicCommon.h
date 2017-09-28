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

#ifndef MUSICCOMMON_H
#define MUSICCOMMON_H
#ifdef _WIN32
#pragma once
#endif

#define k_SteamMusicNameMaxLength	= 255;
#define k_SteamMusicPNGMaxLength	= 65535;

#define CLIENTMUSIC_INTERFACE_VERSION "CLIENTMUSIC_INTERFACE_VERSION001"

#define STEAMMUSIC_INTERFACE_VERSION_001 "STEAMMUSIC_INTERFACE_VERSION001"
#define STEAMMUSICREMOTE_INTERFACE_VERSION "STEAMMUSICREMOTE_INTERFACE_VERSION001"

enum AudioPlayback_Status
{
	AudioPlayback_Undefined = 0,
	AudioPlayback_Playing = 1,
	AudioPlayback_Paused = 2,
	AudioPlayback_Idle = 3
};

enum PlayingRepeat_Status 
{
	PlayingRepeat_None,
	PlayingRepeat_Repeat,
	PlayingRepeat_RepeatOnce,
};

enum MediaController_Status {
	// TODO: Reverse this enum
};

enum ETrackQueueOrigin {
	// TODO: Reverse this enum
};

#pragma pack( push, 8 )

// music

struct PlaybackStatusHasChanged_t
{
	enum { k_iCallback = k_iSteamMusicCallbacks + 1 };

};

struct VolumeHasChanged_t
{
	enum { k_iCallback = k_iSteamMusicCallbacks + 2 };

	float m_flNewVolume;
};


// music remote callbacks

struct MusicPlayerRemoteWillActivate_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 1 };
};

struct MusicPlayerRemoteWillDeactivate_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 2 };
};

struct MusicPlayerRemoteToFront_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 3 };
};

struct MusicPlayerWillQuit_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 4 };
};

struct MusicPlayerWantsPlay_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 5 };
};

struct MusicPlayerWantsPause_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 6 };
};

struct MusicPlayerWantsPlayPrevious_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 7 };
};

struct MusicPlayerWantsPlayNext_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 8 };
};

struct MusicPlayerWantsShuffled_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 9 };

	bool m_bShuffled;
};

struct MusicPlayerWantsLooped_t
{
	enum { k_iCallback = k_iSteamMusicRemoteCallbacks + 10 };

	bool m_bLooped;
};

struct MusicPlayerWantsVolume_t
{
	enum { k_iCallback = k_iSteamMusicCallbacks + 11 };

	float m_flNewVolume;
};

struct MusicPlayerSelectsQueueEntry_t
{
	enum { k_iCallback = k_iSteamMusicCallbacks + 12 };

	int32 nID;
};

struct MusicPlayerSelectsPlaylistEntry_t
{
	enum { k_iCallback = k_iSteamMusicCallbacks + 13 };

	int32 nID;
};


#pragma pack( pop )

#endif // MUSICCOMMON_H
