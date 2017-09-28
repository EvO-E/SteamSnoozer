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

#ifndef HTMLSURFACECOMMON_H
#define HTMLSURFACECOMMON_H
#ifdef _WIN32
#pragma once
#endif

#define CLIENTHTMLSURFACE_INTERFACE_VERSION "CLIENTHTMLSURFACE_INTERFACE_VERSION_000"

#define STEAMHTMLSURFACE_INTERFACE_VERSION001 "STEAMHTMLSURFACE_INTERFACE_VERSION_001"
#define STEAMHTMLSURFACE_INTERFACE_VERSION002 "STEAMHTMLSURFACE_INTERFACE_VERSION_002"
#define STEAMHTMLSURFACE_INTERFACE_VERSION003 "STEAMHTMLSURFACE_INTERFACE_VERSION_003"

typedef uint32 HHTMLBrowser;
const uint32 INVALID_HTTMLBROWSER = 0;

enum EHTMLMouseButton
{
	eHTMLMouseButton_Left = 0,
	eHTMLMouseButton_Right = 1,
	eHTMLMouseButton_Middle = 2,
};

enum EMouseCursor
{
	dc_user = 0,
	dc_none,
	dc_arrow,
	dc_ibeam,
	dc_hourglass,
	dc_waitarrow,
	dc_crosshair,
	dc_up,
	dc_sizenw,
	dc_sizese,
	dc_sizene,
	dc_sizesw,
	dc_sizew,
	dc_sizee,
	dc_sizen,
	dc_sizes,
	dc_sizewe,
	dc_sizens,
	dc_sizeall,
	dc_no,
	dc_hand,
	dc_blank, // don't show any custom cursor, just use your default
	dc_middle_pan,
	dc_north_pan,
	dc_north_east_pan,
	dc_east_pan,
	dc_south_east_pan,
	dc_south_pan,
	dc_south_west_pan,
	dc_west_pan,
	dc_north_west_pan,
	dc_alias,
	dc_cell,
	dc_colresize,
	dc_copycur,
	dc_verticaltext,
	dc_rowresize,
	dc_zoomin,
	dc_zoomout,
	dc_help,
	dc_custom,

	dc_last, // custom cursors start from this value and up
};

enum EHTMLKeyModifiers
{
	eHTMLKeyModifier_None = 0,
	eHTMLKeyModifier_AltDown = 1 << 0,
	eHTMLKeyModifier_CrtlDown = 1 << 1,
	eHTMLKeyModifier_ShiftDown = 1 << 2,
};

#pragma pack( push, 8 )

struct HTML_BrowserReady_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 1 };

	HHTMLBrowser m_hBrowser;
};

struct HTML_NeedsPaint_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 2 };

	HHTMLBrowser m_hBrowser;
	const char *m_pBGRA;
	uint32 m_width;
	uint32 m_height;
	uint32 m_updateX;
	uint32 m_updateY;
	uint32 m_updateWidth;
	uint32 m_updateHeight;;
	uint32 m_scrollX;
	uint32 m_scrollY;
	float m_pageScale;
	uint32 m_pageSerial;
};

struct HTML_StartRequest_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 3 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchUrl;
	const char *m_pchTarget;
	const char *m_pchPostData;
	bool m_isRedirect;
};

struct HTML_CloseBrowser_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 4 };

	HHTMLBrowser m_hBrowser;
};

struct HTML_URLChanged_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 5 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchUrl;
	const char *m_pchPostData;
	bool m_isRedirect;
	const char *m_pchPageTitle;
	bool m_newNavigation;
};

struct HTML_FinishedRequest_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 6 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchUrl;
	const char *m_pchPageTitle;
};

struct HTML_OpenLinkInNewTab_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 7 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchUrl;
};

struct HTML_ChangedTitle_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 8 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchPageTitle;
};

struct HTML_SearchResults_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 9 };

	HHTMLBrowser m_hBrowser;
	uint32 m_result;
	uint32 m_currentMatch;
};

struct HTML_CanGoBackAndForward_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 10 };

	HHTMLBrowser m_hBrowser;
	bool m_canGoBack;
	bool m_canGoForward;
};

struct HTML_HorizontalScroll_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 11 };

	HHTMLBrowser m_hBrowser;
	uint32 m_scrollMax;
	uint32 m_scrollCurrent;
	float m_pageScale;
	bool m_visible;
	uint32 m_pageSize;
};

struct HTML_VerticalScroll_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 12 };

	HHTMLBrowser m_hBrowser;
	uint32 m_scrollMax;
	uint32 m_scrollCurrent;
	float m_pageScale;
	bool m_visible;
	uint32 m_pageSize;
};

struct HTML_LinkAtPosition_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 13 };

	HHTMLBrowser m_hBrowser;
	uint32 m_X;
	uint32 m_Y;
	const char *m_pchUrl;
	bool m_input;
	bool m_liveLink;
};

struct HTML_JSAlert_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 14 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchMessage;
};

struct HTML_JSConfirm_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 15 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchMessage;
};

struct HTML_FileOpenDialog_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 16 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchTitle;
	const char *m_pchInitialFile;
};

struct HTML_ComboNeedsPaint_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 17 };

	HHTMLBrowser m_hBrowser;
	const char *m_pBGRA;
	uint32 m_width;
	uint32 m_height;
};

struct HTML_ShowPopup_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 18 };

	HHTMLBrowser m_hBrowser;
};

struct HTML_HidePopup_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 19 };

	HHTMLBrowser m_hBrowser;
};

struct HTML_SizePopup_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 20 };

	HHTMLBrowser m_hBrowser;
	uint32 m_X;
	uint32 m_Y;
	uint32 m_width;
	uint32 m_height;
};

struct HTML_NewWindow_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 21 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchUrl;
	uint32 m_X;
	uint32 m_Y;
	uint32 m_width;
	uint32 m_height;
};

struct HTML_SetCursor_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 22 };

	HHTMLBrowser m_hBrowser;
	uint32 m_eCursor;
};

struct HTML_StatusText_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 23 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchStatus;
};

struct HTML_ShowToolTip_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 24 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchMsg;
};

struct HTML_UpdateToolTip_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 25 };

	HHTMLBrowser m_hBrowser;
	const char *m_pchMsg;
};

struct HTML_HideToolTip_t
{
	enum { k_iCallback = k_iSteamHTMLSurfaceCallbacks + 26 };

	HHTMLBrowser m_hBrowser;
};


#pragma pack( pop )


#endif // HTMLSURFACECOMMON_H
