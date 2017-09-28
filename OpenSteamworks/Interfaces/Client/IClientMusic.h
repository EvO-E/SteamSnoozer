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

#ifndef ICLIENTMUSIC_H
#define ICLIENTMUSIC_H
#ifdef _WIN32
#pragma once
#endif

#include "Types/SteamTypes.h"
#include "Interfaces/Common/MusicCommon.h"

abstract_class UNSAFE_INTERFACE IClientMusic
{
public:
	virtual bool BIsEnabled() = 0;
	virtual void Enable( bool bUnk ) = 0;
	virtual void EnableCrawlLogging( bool bUnk ) = 0;
	virtual bool BIsPlaying() = 0;

	virtual int32 GetQueueCount() = 0;
	virtual int32 GetCurrentQueueEntry() = 0;
	virtual bool GetQueueEntryURI( int32 iIndex, char *, int32) = 0;
	virtual bool GetQueueEntryData( int32 iIndex, char *, int32, char *, int32, char *, int32, int32*, ETrackQueueOrigin*, int32* ) = 0;
	virtual bool GetQueueEntryOrigin(int32, ETrackQueueOrigin*, int32*) = 0;

	virtual void EmptyQueue() = 0;
	virtual void RemoveQueueEntry( int32 iIndex, bool bUnk ) = 0;
	virtual void AddArtistToQueue( const char *, bool, bool ) = 0;
	virtual void AddTracksOfAlbumIDToQueue(int32, int32, bool, const char*, bool, bool, bool) = 0;
	virtual void AddAllTracksOfAlbumIDToQueue(int32, int32, bool, bool, bool) = 0;
	virtual void AddTracksOfPlaylistIDToQueue(int32, int32, bool, bool, bool, bool) = 0;

	virtual void SetSuppressAutoTrackAdvance(bool) = 0;
	virtual AudioPlayback_Status GetPlaybackStatus() = 0;
	virtual void SetPlayingRepeatStatus(PlayingRepeat_Status) = 0;
	virtual PlayingRepeat_Status GetPlayingRepeatStatus() = 0;
	virtual PlayingRepeat_Status TogglePlayingRepeatStatus() = 0;
	virtual void SetPlayingShuffled( bool bPlayingShuffled ) = 0;
	virtual bool IsPlayingShuffled() = 0;

	virtual void Play() = 0;
	virtual void Pause() = 0;
	virtual void PlayPrevious() = 0;
	virtual void PlayNext() = 0;
	virtual void PlayEntry( int32 ) = 0;
	virtual void TogglePlayPause() = 0;

	virtual void SetVolume( float flVolume ) = 0;
	virtual float GetVolume() = 0;
	virtual void ToggleMuteVolume() = 0;
	virtual void IncreaseVolume() = 0;
	virtual void DecreaseVolume() = 0;
	virtual void SetPlaybackPosition(int32) = 0;
	virtual int32 GetPlaybackPosition() = 0;
	virtual int32 GetPlaybackDuration() = 0;

	virtual void LocalLibraryCrawlTrack(const char*) = 0;
	virtual void ResetLocalLibrary() = 0;

	virtual MediaController_Status GetStatusLocalLibrary() = 0;
	virtual void SaveLocalLibraryDirectorySettings() = 0;
	
	virtual int32 GetLocalLibraryDirectoryEntryCount() = 0;
	virtual bool GetLocalLibraryDirectoryEntry( int32, char *, int32 ) = 0;
	virtual void AddLocalLibraryDirectoryEntry( const char * ) = 0;
	virtual void ResetLocalLibraryDirectories( bool ) = 0;
	virtual bool GetDefaultLocalLibraryDirectory( char *, int32 ) = 0;

	virtual void LocalLibraryStopCrawling() = 0;
	virtual void UpdateLocalLibraryDirectoriesToCrawl() = 0;
	virtual bool BLocalLibraryIsCrawling() = 0;

	virtual int32 GetLocalLibraryTrackCount() = 0;
	virtual int32 GetLocalLibraryAlbumCount() = 0;
	virtual int32 GetLocalLibraryAlbumID(int32, bool) = 0;
	virtual bool GetLocalLibraryAlbumIDEntry(int32, char*, int32, char*, int32, int32*, int32*, bool*) = 0;
	virtual int32 GetLocalLibraryAlbumIDTrackEntry(int32, int32, char*, int32, int32*, char*, int32, char*, int32) = 0;
	virtual bool GetLocalLibraryAlbumDirectoryForAlbumID(int32, char*, int32) = 0;
	virtual bool GetLocalLibraryAlbumSortNameForAlbumID(int32, char*, int32) = 0;
	virtual bool GetLocalLibraryArtistSortNameForAlbumID(int32, char*, int32) = 0;
	virtual int32 GetLocalLibraryTrackCountForAlbumID(int32) = 0;
	virtual bool GetLocalLibraryAlbumIDTrackKey(int32, int32, char*, int32) = 0;
	virtual int32 GetLocalLibraryAlbumIDForTrackKey(const char*) = 0;
	virtual int32 GetLocalLibraryArtistCount() = 0;
	virtual bool GetLocalLibraryArtistName( int32, char *, int32, char*, int32 ) = 0;
	virtual int32 GetLocalLibraryAlbumCountForArtistName( const char * ) = 0;
	virtual bool GetLocalLibraryTrackAndAlbumCountOfArtistName(const char*, int32*, int32*) = 0;
	virtual int32 GetLocalLibraryAlbumIDForArtist(const char*, int32) = 0;
	virtual int32 GetLocalLibraryRepresentativeAlbumIDForArtist(const char*, bool*) = 0;
	virtual bool GetLocalLibraryTrackEntry(const char*, char*, int32, int32*, char*, int32) = 0;

	virtual bool BRequestAllArtistListData(int32) = 0;
	virtual bool BRequestAllAlbumListData(int32) = 0;
	virtual bool BRequestAllTracksListDataForAlbumID(int32, int32) = 0;

	virtual int32 GetPlaylistCount() = 0;
	virtual int32 GetPlaylistID(int32) = 0;
	virtual int32 GetPositionForPlaylistID(int32) = 0;
	virtual int32 GetPlaylistIDForPosition(int32) = 0;
	virtual bool BRequestAllPlayListData(int32) = 0;
	virtual bool GetNextPlaylistName(const char*, char*, int32) = 0;
	virtual bool InsertPlaylistWithNameAtPosition(const char*, int32) = 0;
	virtual bool MovePlaylistFromPositionToPosition(int32, int32) = 0;
	virtual bool DeletePlaylistWithID(int32) = 0;
	virtual bool RenamePlaylistWithID(int32, const char*) = 0;
	virtual bool AddRandomTracksToPlaylistID(int32, int32) = 0;
	virtual bool GetPlaylistIDData(int32, char*, int32, int32*, int32*, int32*, int32*, int32*) = 0;
	virtual int32 GetPlaylistIDTrackCount(int32) = 0;
	virtual bool BRequestAllTracksListDataForPlaylistID(int32, int32) = 0;
	virtual bool GetPlaylistIDTrackKey(int32, int32, char*, int32, int32*) = 0;
	virtual int32 GetPositionForPlaylistItemID(int32) = 0;
	virtual bool AddTrackKeyToPlaylistID(int32, const char*) = 0;
	virtual bool AddAlbumIDToPlaylistID(int32, int32, const char*) = 0;
	virtual bool AddArtistNameToPlaylistID(int32, const char*) = 0;
	virtual bool AddPlaylistIDToPlaylistID(int32, int32) = 0;
	virtual bool RemovePlaylistPositionFromPlaylistID(int32, int32) = 0;
	virtual bool RemoveAllTracksFromPlaylistID(int32, bool) = 0;
	virtual bool MoveTrackFromPositionToPositonInPlaylistID(int32, int32, int32) = 0;
	virtual bool AppendQueueToPlaylistID(int32, bool) = 0;
	virtual int32 GetLocalLibraryRepresentativeAlbumIDForPlaylist(int32, bool*) = 0;

	virtual bool MarkTrackKeyAsPlayed(const char*) = 0;
	virtual bool GetMostRecentlyPlayedAlbums(int32, int32*) = 0;
	virtual bool GetMostRecentlyAddedAlbums(int32, int32*) = 0;

	virtual bool ActivateRemotePlayerWithID(int32) = 0;
	virtual int32 GetActiveRemotePlayerID() = 0;
	virtual int32 GetRemotePlayerCount() = 0;
	virtual bool GetRemotePlayerIDAndName(int32, int32*, char*, int32) = 0;
	virtual bool GetCurrentEntryTextForRemotePlayerWithID(int32, char*, int32) = 0;
	virtual bool RegisterSteamMusicRemote(const char*) = 0;
	virtual bool DeregisterSteamMusicRemote() = 0;
	virtual bool BIsCurrentMusicRemote() = 0;
	virtual bool BActivationSuccess(bool) = 0;
	virtual bool SetDisplayName(const char*) = 0;
	virtual bool SetPNGIcon_64x64(void*, uint32) = 0;
	virtual bool EnablePlayPrevious(bool) = 0;
	virtual bool EnablePlayNext(bool) = 0;
	virtual bool EnableShuffled(bool) = 0;
	virtual bool EnableLooped(bool) = 0;
	virtual bool EnableQueue(bool) = 0;
	virtual bool EnablePlaylists(bool) = 0;
	virtual bool UpdatePlaybackStatus(AudioPlayback_Status) = 0;
	virtual bool UpdateShuffled(bool) = 0;
	virtual bool UpdateLooped(bool) = 0;
	virtual bool UpdateVolume(float) = 0;
	virtual bool CurrentEntryWillChange() = 0;
	virtual bool CurrentEntryIsAvailable(bool) = 0;
	virtual bool UpdateCurrentEntryText(const char*) = 0;
	virtual bool UpdateCurrentEntryElapsedSeconds(int32) = 0;
	virtual bool UpdateCurrentEntryCoverArt(void*, uint32) = 0;
	virtual bool CurrentEntryDidChange() = 0;
	virtual bool QueueWillChange() = 0;
	virtual bool ResetQueueEntries() = 0;
	virtual bool SetQueueEntry(int32, int32, const char*) = 0;
	virtual bool SetCurrentQueueEntry(int32) = 0;
	virtual bool QueueDidChange() = 0;
	virtual bool PlaylistWillChange() = 0;
	virtual bool ResetPlaylistEntries() = 0;
	virtual bool SetPlaylistEntry(int32, int32, const char*) = 0;
	virtual bool SetCurrentPlaylistEntry(int32) = 0;
	virtual bool PlaylistDidChange() = 0;

	virtual int32 RequestAlbumCoverForAlbumID(int32) = 0;
	virtual int32 RequestAlbumCoverForTrackKey(const char*) = 0;
	virtual bool GetAlbumCoverForIndex(int32, void*, uint32) = 0;
	virtual void CancelAlbumCoverRequestForIndex(int32) = 0;
	virtual bool GetAlbumCoverURLForAlbumID(int32, char*, uint32) = 0;
	virtual bool GetAlbumCoverURLForTrackKey(const char*, char*, uint32) = 0;

	virtual void StartUsingSpotify() = 0;
	virtual void StopUsingSpotify() = 0;
	virtual MediaController_Status GetStatusSpotify() = 0;
	virtual void LoginSpotify( const char *, const char * ) = 0;
	virtual void ReloginSpotify() = 0;
	virtual const char * GetCurrentUserSpotify() = 0;
	virtual void ForgetCurrentUserSpotify() = 0;
	virtual void LogoutSpotify() = 0;
	virtual void DumpStatusToConsole() = 0;
};

#endif // ICLIENTMUSIC_H
