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

#ifndef CONTROLLERCOMMON_H
#define CONTROLLERCOMMON_H

#ifdef _WIN32
#pragma once
#endif

#define CLIENTCONTROLLERSERIALIZED_INTERFACE_VERSION "CLIENTCONTROLLERSERIALIZED_INTERFACE_VERSION_000"

#define CLIENTSTEAMCONTROLLER_INTERFACE_VERSION "CLIENTSTEAMCONTROLLER_INTERFACE_VERSION_000"

#define STEAMCONTROLLER_INTERFACE_VERSION_001 "SteamController001"
#define STEAMCONTROLLER_INTERFACE_VERSION_003 "SteamController003"
#define STEAMCONTROLLER_INTERFACE_VERSION_004 "SteamController004"
#define STEAMCONTROLLER_INTERFACE_VERSION_005 "SteamController005"

#define STEAM_RIGHT_TRIGGER_MASK			0x0000000000000001l
#define STEAM_LEFT_TRIGGER_MASK				0x0000000000000002l
#define STEAM_RIGHT_BUMPER_MASK			 	0x0000000000000004l
#define STEAM_LEFT_BUMPER_MASK			  	0x0000000000000008l
#define STEAM_BUTTON_0_MASK				 	0x0000000000000010l
#define STEAM_BUTTON_1_MASK				 	0x0000000000000020l
#define STEAM_BUTTON_2_MASK				 	0x0000000000000040l
#define STEAM_BUTTON_3_MASK				 	0x0000000000000080l
#define STEAM_TOUCH_0_MASK				  	0x0000000000000100l
#define STEAM_TOUCH_1_MASK				  	0x0000000000000200l
#define STEAM_TOUCH_2_MASK				  	0x0000000000000400l
#define STEAM_TOUCH_3_MASK				  	0x0000000000000800l
#define STEAM_BUTTON_MENU_MASK			  	0x0000000000001000l
#define STEAM_BUTTON_STEAM_MASK			 	0x0000000000002000l
#define STEAM_BUTTON_ESCAPE_MASK			0x0000000000004000l
#define STEAM_BUTTON_BACK_LEFT_MASK		 	0x0000000000008000l
#define STEAM_BUTTON_BACK_RIGHT_MASK		0x0000000000010000l
#define STEAM_BUTTON_LEFTPAD_CLICKED_MASK   0x0000000000020000l
#define STEAM_BUTTON_RIGHTPAD_CLICKED_MASK  0x0000000000040000l
#define STEAM_LEFTPAD_FINGERDOWN_MASK	   	0x0000000000080000l
#define STEAM_RIGHTPAD_FINGERDOWN_MASK	  	0x0000000000100000l

enum ESteamControllerPad
{
	k_ESteamControllerPad_Left,
	k_ESteamControllerPad_Right
};

enum EControllerActionOrigin
{
	// 'borrowed' from Steamworks.Net project

	// Steam Controller
	k_EControllerActionOrigin_None = 0,
	k_EControllerActionOrigin_A,
	k_EControllerActionOrigin_B,
	k_EControllerActionOrigin_X,
	k_EControllerActionOrigin_Y,
	k_EControllerActionOrigin_LeftBumper,
	k_EControllerActionOrigin_RightBumper,
	k_EControllerActionOrigin_LeftGrip,
	k_EControllerActionOrigin_RightGrip,
	k_EControllerActionOrigin_Start,
	k_EControllerActionOrigin_Back,
	k_EControllerActionOrigin_LeftPad_Touch,
	k_EControllerActionOrigin_LeftPad_Swipe,
	k_EControllerActionOrigin_LeftPad_Click,
	k_EControllerActionOrigin_LeftPad_DPadNorth,
	k_EControllerActionOrigin_LeftPad_DPadSouth,
	k_EControllerActionOrigin_LeftPad_DPadWest,
	k_EControllerActionOrigin_LeftPad_DPadEast,
	k_EControllerActionOrigin_RightPad_Touch,
	k_EControllerActionOrigin_RightPad_Swipe,
	k_EControllerActionOrigin_RightPad_Click,
	k_EControllerActionOrigin_RightPad_DPadNorth,
	k_EControllerActionOrigin_RightPad_DPadSouth,
	k_EControllerActionOrigin_RightPad_DPadWest,
	k_EControllerActionOrigin_RightPad_DPadEast,
	k_EControllerActionOrigin_LeftTrigger_Pull,
	k_EControllerActionOrigin_LeftTrigger_Click,
	k_EControllerActionOrigin_RightTrigger_Pull,
	k_EControllerActionOrigin_RightTrigger_Click,
	k_EControllerActionOrigin_LeftStick_Move,
	k_EControllerActionOrigin_LeftStick_Click,
	k_EControllerActionOrigin_LeftStick_DPadNorth,
	k_EControllerActionOrigin_LeftStick_DPadSouth,
	k_EControllerActionOrigin_LeftStick_DPadWest,
	k_EControllerActionOrigin_LeftStick_DPadEast,
	k_EControllerActionOrigin_Gyro_Move,
	k_EControllerActionOrigin_Gyro_Pitch,
	k_EControllerActionOrigin_Gyro_Yaw,
	k_EControllerActionOrigin_Gyro_Roll,

	// PS4 Dual Shock
	k_EControllerActionOrigin_PS4_X,
	k_EControllerActionOrigin_PS4_Circle,
	k_EControllerActionOrigin_PS4_Triangle,
	k_EControllerActionOrigin_PS4_Square,
	k_EControllerActionOrigin_PS4_LeftBumper,
	k_EControllerActionOrigin_PS4_RightBumper,
	k_EControllerActionOrigin_PS4_Options,  //Start
	k_EControllerActionOrigin_PS4_Share,	//Back
	k_EControllerActionOrigin_PS4_LeftPad_Touch,
	k_EControllerActionOrigin_PS4_LeftPad_Swipe,
	k_EControllerActionOrigin_PS4_LeftPad_Click,
	k_EControllerActionOrigin_PS4_LeftPad_DPadNorth,
	k_EControllerActionOrigin_PS4_LeftPad_DPadSouth,
	k_EControllerActionOrigin_PS4_LeftPad_DPadWest,
	k_EControllerActionOrigin_PS4_LeftPad_DPadEast,
	k_EControllerActionOrigin_PS4_RightPad_Touch,
	k_EControllerActionOrigin_PS4_RightPad_Swipe,
	k_EControllerActionOrigin_PS4_RightPad_Click,
	k_EControllerActionOrigin_PS4_RightPad_DPadNorth,
	k_EControllerActionOrigin_PS4_RightPad_DPadSouth,
	k_EControllerActionOrigin_PS4_RightPad_DPadWest,
	k_EControllerActionOrigin_PS4_RightPad_DPadEast,
	k_EControllerActionOrigin_PS4_CenterPad_Touch,
	k_EControllerActionOrigin_PS4_CenterPad_Swipe,
	k_EControllerActionOrigin_PS4_CenterPad_Click,
	k_EControllerActionOrigin_PS4_CenterPad_DPadNorth,
	k_EControllerActionOrigin_PS4_CenterPad_DPadSouth,
	k_EControllerActionOrigin_PS4_CenterPad_DPadWest,
	k_EControllerActionOrigin_PS4_CenterPad_DPadEast,
	k_EControllerActionOrigin_PS4_LeftTrigger_Pull,
	k_EControllerActionOrigin_PS4_LeftTrigger_Click,
	k_EControllerActionOrigin_PS4_RightTrigger_Pull,
	k_EControllerActionOrigin_PS4_RightTrigger_Click,
	k_EControllerActionOrigin_PS4_LeftStick_Move,
	k_EControllerActionOrigin_PS4_LeftStick_Click,
	k_EControllerActionOrigin_PS4_LeftStick_DPadNorth,
	k_EControllerActionOrigin_PS4_LeftStick_DPadSouth,
	k_EControllerActionOrigin_PS4_LeftStick_DPadWest,
	k_EControllerActionOrigin_PS4_LeftStick_DPadEast,
	k_EControllerActionOrigin_PS4_RightStick_Move,
	k_EControllerActionOrigin_PS4_RightStick_Click,
	k_EControllerActionOrigin_PS4_RightStick_DPadNorth,
	k_EControllerActionOrigin_PS4_RightStick_DPadSouth,
	k_EControllerActionOrigin_PS4_RightStick_DPadWest,
	k_EControllerActionOrigin_PS4_RightStick_DPadEast,
	k_EControllerActionOrigin_PS4_DPad_North,
	k_EControllerActionOrigin_PS4_DPad_South,
	k_EControllerActionOrigin_PS4_DPad_West,
	k_EControllerActionOrigin_PS4_DPad_East,
	k_EControllerActionOrigin_PS4_Gyro_Move,
	k_EControllerActionOrigin_PS4_Gyro_Pitch,
	k_EControllerActionOrigin_PS4_Gyro_Yaw,
	k_EControllerActionOrigin_PS4_Gyro_Roll,

	// XBox One
	k_EControllerActionOrigin_XBoxOne_A,
	k_EControllerActionOrigin_XBoxOne_B,
	k_EControllerActionOrigin_XBoxOne_X,
	k_EControllerActionOrigin_XBoxOne_Y,
	k_EControllerActionOrigin_XBoxOne_LeftBumper,
	k_EControllerActionOrigin_XBoxOne_RightBumper,
	k_EControllerActionOrigin_XBoxOne_Menu,  //Start
	k_EControllerActionOrigin_XBoxOne_View,  //Back
	k_EControllerActionOrigin_XBoxOne_LeftTrigger_Pull,
	k_EControllerActionOrigin_XBoxOne_LeftTrigger_Click,
	k_EControllerActionOrigin_XBoxOne_RightTrigger_Pull,
	k_EControllerActionOrigin_XBoxOne_RightTrigger_Click,
	k_EControllerActionOrigin_XBoxOne_LeftStick_Move,
	k_EControllerActionOrigin_XBoxOne_LeftStick_Click,
	k_EControllerActionOrigin_XBoxOne_LeftStick_DPadNorth,
	k_EControllerActionOrigin_XBoxOne_LeftStick_DPadSouth,
	k_EControllerActionOrigin_XBoxOne_LeftStick_DPadWest,
	k_EControllerActionOrigin_XBoxOne_LeftStick_DPadEast,
	k_EControllerActionOrigin_XBoxOne_RightStick_Move,
	k_EControllerActionOrigin_XBoxOne_RightStick_Click,
	k_EControllerActionOrigin_XBoxOne_RightStick_DPadNorth,
	k_EControllerActionOrigin_XBoxOne_RightStick_DPadSouth,
	k_EControllerActionOrigin_XBoxOne_RightStick_DPadWest,
	k_EControllerActionOrigin_XBoxOne_RightStick_DPadEast,
	k_EControllerActionOrigin_XBoxOne_DPad_North,
	k_EControllerActionOrigin_XBoxOne_DPad_South,
	k_EControllerActionOrigin_XBoxOne_DPad_West,
	k_EControllerActionOrigin_XBoxOne_DPad_East,

	// XBox 360
	k_EControllerActionOrigin_XBox360_A,
	k_EControllerActionOrigin_XBox360_B,
	k_EControllerActionOrigin_XBox360_X,
	k_EControllerActionOrigin_XBox360_Y,
	k_EControllerActionOrigin_XBox360_LeftBumper,
	k_EControllerActionOrigin_XBox360_RightBumper,
	k_EControllerActionOrigin_XBox360_Start,  //Start
	k_EControllerActionOrigin_XBox360_Back,  //Back
	k_EControllerActionOrigin_XBox360_LeftTrigger_Pull,
	k_EControllerActionOrigin_XBox360_LeftTrigger_Click,
	k_EControllerActionOrigin_XBox360_RightTrigger_Pull,
	k_EControllerActionOrigin_XBox360_RightTrigger_Click,
	k_EControllerActionOrigin_XBox360_LeftStick_Move,
	k_EControllerActionOrigin_XBox360_LeftStick_Click,
	k_EControllerActionOrigin_XBox360_LeftStick_DPadNorth,
	k_EControllerActionOrigin_XBox360_LeftStick_DPadSouth,
	k_EControllerActionOrigin_XBox360_LeftStick_DPadWest,
	k_EControllerActionOrigin_XBox360_LeftStick_DPadEast,
	k_EControllerActionOrigin_XBox360_RightStick_Move,
	k_EControllerActionOrigin_XBox360_RightStick_Click,
	k_EControllerActionOrigin_XBox360_RightStick_DPadNorth,
	k_EControllerActionOrigin_XBox360_RightStick_DPadSouth,
	k_EControllerActionOrigin_XBox360_RightStick_DPadWest,
	k_EControllerActionOrigin_XBox360_RightStick_DPadEast,
	k_EControllerActionOrigin_XBox360_DPad_North,
	k_EControllerActionOrigin_XBox360_DPad_South,
	k_EControllerActionOrigin_XBox360_DPad_West,
	k_EControllerActionOrigin_XBox360_DPad_East,

	// SteamController V2
	k_EControllerActionOrigin_SteamV2_A,
	k_EControllerActionOrigin_SteamV2_B,
	k_EControllerActionOrigin_SteamV2_X,
	k_EControllerActionOrigin_SteamV2_Y,
	k_EControllerActionOrigin_SteamV2_LeftBumper,
	k_EControllerActionOrigin_SteamV2_RightBumper,
	k_EControllerActionOrigin_SteamV2_LeftGrip,
	k_EControllerActionOrigin_SteamV2_RightGrip,
	k_EControllerActionOrigin_SteamV2_Start,
	k_EControllerActionOrigin_SteamV2_Back,
	k_EControllerActionOrigin_SteamV2_LeftPad_Touch,
	k_EControllerActionOrigin_SteamV2_LeftPad_Swipe,
	k_EControllerActionOrigin_SteamV2_LeftPad_Click,
	k_EControllerActionOrigin_SteamV2_LeftPad_DPadNorth,
	k_EControllerActionOrigin_SteamV2_LeftPad_DPadSouth,
	k_EControllerActionOrigin_SteamV2_LeftPad_DPadWest,
	k_EControllerActionOrigin_SteamV2_LeftPad_DPadEast,
	k_EControllerActionOrigin_SteamV2_RightPad_Touch,
	k_EControllerActionOrigin_SteamV2_RightPad_Swipe,
	k_EControllerActionOrigin_SteamV2_RightPad_Click,
	k_EControllerActionOrigin_SteamV2_RightPad_DPadNorth,
	k_EControllerActionOrigin_SteamV2_RightPad_DPadSouth,
	k_EControllerActionOrigin_SteamV2_RightPad_DPadWest,
	k_EControllerActionOrigin_SteamV2_RightPad_DPadEast,
	k_EControllerActionOrigin_SteamV2_LeftTrigger_Pull,
	k_EControllerActionOrigin_SteamV2_LeftTrigger_Click,
	k_EControllerActionOrigin_SteamV2_RightTrigger_Pull,
	k_EControllerActionOrigin_SteamV2_RightTrigger_Click,
	k_EControllerActionOrigin_SteamV2_LeftStick_Move,
	k_EControllerActionOrigin_SteamV2_LeftStick_Click,
	k_EControllerActionOrigin_SteamV2_LeftStick_DPadNorth,
	k_EControllerActionOrigin_SteamV2_LeftStick_DPadSouth,
	k_EControllerActionOrigin_SteamV2_LeftStick_DPadWest,
	k_EControllerActionOrigin_SteamV2_LeftStick_DPadEast,
	k_EControllerActionOrigin_SteamV2_Gyro_Move,
	k_EControllerActionOrigin_SteamV2_Gyro_Pitch,
	k_EControllerActionOrigin_SteamV2_Gyro_Yaw,
	k_EControllerActionOrigin_SteamV2_Gyro_Roll,

	k_EControllerActionOrigin_Count
};

enum EControllerType
{
	k_EControllerTypeController_none = -1,
	k_EControllerTypeController_unknown,
	k_EControllerTypeController_steamcontroller_unknown,
	k_EControllerTypeController_steamcontroller_gordon,
	k_EControllerTypeController_steamcontroller_headcrab,
	k_EControllerTypeController_front_panel_board = 20,
	k_EControllerTypeController_generic = 30,
	k_EControllerTypeController_xbox360,
	k_EControllerTypeController_xboxone,
	k_EControllerTypeController_ps3,
	k_EControllerTypeController_ps4,
	k_EControllerTypeController_wii,
	k_EControllerTypeController_apple,
};

enum EControllerActivationType
{
	k_EControllerActivationTypeNone = 0,
	k_EControllerActivationTypeFull_press,
	k_EControllerActivationTypeSoft_press,
	k_EControllerActivationTypeStart_press,
	k_EControllerActivationTypeRelease,
	k_EControllerActivationTypeLong_press,
	k_EControllerActivationTypeDouble_press,
	k_EControllerActivationTypeAnalog,
};

enum EControllerSource
{
	k_EControllerSourceNone = 0,
	k_EControllerSourceLeft_trackpad,
	k_EControllerSourceRight_trackpad,
	k_EControllerSourceJoystick,
	k_EControllerSourceButton_diamond,
	k_EControllerSourceSwitch,
	k_EControllerSourceLeft_trigger,
	k_EControllerSourceRight_trigger,
	k_EControllerSourceGyro,
	k_EControllerSourceCenter_trackpad,
	k_EControllerSourceRight_joystick,
	k_EControllerSourceDpad,
};

enum EControllerSourceMode
{
	k_EControllerSourceModeNone = 0,
	k_EControllerSourceModeDpad,
	k_EControllerSourceModeButtons,
	k_EControllerSourceModeFour_buttons,
	k_EControllerSourceModeAbsolute_mouse,
	k_EControllerSourceModeRelative_mouse,
	k_EControllerSourceModeJoystick_move,
	k_EControllerSourceModeJoystick_mouse,
	k_EControllerSourceModeJoystick_camera,
	k_EControllerSourceModeScrollwheel,
	k_EControllerSourceModeTrigger,
	k_EControllerSourceModeTouch_menu,
	k_EControllerSourceModeMouse_joystick,
	k_EControllerSourceModeMouse_region,
	k_EControllerSourceModeRadial_menu,
	k_EControllerSourceModeSingle_button,
	k_EControllerSourceModeSwitches,
};

enum EControllerModeInput
{
	k_EControllerModeInputNone = 0,
	k_EControllerModeInputDpad_north,
	k_EControllerModeInputDpad_northeast,
	k_EControllerModeInputDpad_east,
	k_EControllerModeInputDpad_southeast,
	k_EControllerModeInputDpad_south,
	k_EControllerModeInputDpad_southwest,
	k_EControllerModeInputDpad_west,
	k_EControllerModeInputDpad_northwest,
	k_EControllerModeInputButton_y,
	k_EControllerModeInputButton_b,
	k_EControllerModeInputButton_x,
	k_EControllerModeInputButton_a,
	k_EControllerModeInputClick,
	k_EControllerModeInputDoubletap,
	k_EControllerModeInputEdge,
	k_EControllerModeInputScroll_clockwise,
	k_EControllerModeInputScroll_counterclockwise,
	k_EControllerModeInputTrigger_analog,
	k_EControllerModeInputScroll_wheel_list_0,
	k_EControllerModeInputScroll_wheel_list_1,
	k_EControllerModeInputScroll_wheel_list_2,
	k_EControllerModeInputScroll_wheel_list_3,
	k_EControllerModeInputScroll_wheel_list_4,
	k_EControllerModeInputScroll_wheel_list_5,
	k_EControllerModeInputScroll_wheel_list_6,
	k_EControllerModeInputScroll_wheel_list_7,
	k_EControllerModeInputScroll_wheel_list_8,
	k_EControllerModeInputScroll_wheel_list_9,
	k_EControllerModeInputTouch_menu_button_0,
	k_EControllerModeInputTouch_menu_button_1,
	k_EControllerModeInputTouch_menu_button_2,
	k_EControllerModeInputTouch_menu_button_3,
	k_EControllerModeInputTouch_menu_button_4,
	k_EControllerModeInputTouch_menu_button_5,
	k_EControllerModeInputTouch_menu_button_6,
	k_EControllerModeInputTouch_menu_button_7,
	k_EControllerModeInputTouch_menu_button_8,
	k_EControllerModeInputTouch_menu_button_9,
	k_EControllerModeInputTouch_menu_button_10,
	k_EControllerModeInputTouch_menu_button_11,
	k_EControllerModeInputTouch_menu_button_12,
	k_EControllerModeInputTouch_menu_button_13,
	k_EControllerModeInputTouch_menu_button_14,
	k_EControllerModeInputTouch_menu_button_15,
	k_EControllerModeInputTouch_menu_button_16,
	k_EControllerModeInputTouch_menu_button_17,
	k_EControllerModeInputTouch_menu_button_18,
	k_EControllerModeInputTouch_menu_button_19,
	k_EControllerModeInputTouch_menu_button_20,
	k_EControllerModeInputTouch,
	k_EControllerModeInputButton_menu,
	k_EControllerModeInputButton_escape,
	k_EControllerModeInputLeft_bumper,
	k_EControllerModeInputRight_bumper,
	k_EControllerModeInputButton_back_left,
	k_EControllerModeInputButton_back_right,
	k_EControllerModeInputButton_back_left_upper,
	k_EControllerModeInputButton_back_right_upper,
	k_EControllerModeInputButton_lpad,
	k_EControllerModeInputButton_rpad,
	k_EControllerModeInputButton_ltrigger,
	k_EControllerModeInputButton_rtrigger,
	k_EControllerModeInputButton_ltrigger_threshold,
	k_EControllerModeInputButton_rtrigger_threshold,
	k_EControllerModeInputButton_joystick,
	k_EControllerModeInputButton_steam,
};

enum EControllerSetting
{
	k_EControllerSettingLeft_trackpad_mode = 0,
	k_EControllerSettingRight_trackpad_mode,
	k_EControllerSettingTrackpad_trigger_data,
	k_EControllerSettingHaptic_intensity,
	k_EControllerSettingHaptic_intensity_override,
	k_EControllerSettingRumble_type,
	k_EControllerSettingRumble_intensity,
	k_EControllerSettingEdge_binding_radius,
	k_EControllerSettingOutput_joystick,
	k_EControllerSettingCurve_exponent,
	k_EControllerSettingCustom_curve_exponent,
	k_EControllerSettingSwipe_duration,
	k_EControllerSettingDeadzone_inner_radius,
	k_EControllerSettingDeadzone_outer_radius,
	k_EControllerSettingDeadzone_shape,
	k_EControllerSettingAdaptive_centering,
	k_EControllerSettingVirtual_cap_size,
	k_EControllerSettingVirtual_stick_throw,
	k_EControllerSettingAnti_deadzone,
	k_EControllerSettingAnti_deadzone_buffer,
	k_EControllerSettingEdge_binding_invert,
	k_EControllerSettingOutput_axis,
	k_EControllerSettingRequires_click,
	k_EControllerSettingDeadzone,
	k_EControllerSettingLayout,
	k_EControllerSettingHold_repeats,
	k_EControllerSettingHold_repeat_inverval,
	k_EControllerSettingAnalog_emulation_duty_cycle_pct,
	k_EControllerSettingAnalog_emulation_period,
	k_EControllerSettingOverlap_region,
	k_EControllerSettingSensitivity,
	k_EControllerSettingSensitivity_vert_scale,
	k_EControllerSettingSensitivity_horiz_scale,
	k_EControllerSettingTrackball,
	k_EControllerSettingFriction,
	k_EControllerSettingFriction_vert_scale,
	k_EControllerSettingAcceleration,
	k_EControllerSettingDoubletap,
	k_EControllerSettingDoubletap_beep,
	k_EControllerSettingEdge_spin_radius,
	k_EControllerSettingEdge_spin_velocity,
	k_EControllerSettingInvert_x,
	k_EControllerSettingInvert_y,
	k_EControllerSettingMouse_smoothing,
	k_EControllerSettingMouse_move_threshold,
	k_EControllerSettingRotation,
	k_EControllerSettingDoubetap_max_dist,
	k_EControllerSettingDoubetap_min_duration,
	k_EControllerSettingDoubetap_max_duration,
	k_EControllerSettingMousejoystick_deadzone_x = 50,
	k_EControllerSettingMousejoystick_deadzone_y,
	k_EControllerSettingMousejoystick_precision,
	k_EControllerSettingScroll_angle,
	k_EControllerSettingScroll_wrap,
	k_EControllerSettingScroll_type,
	k_EControllerSettingScroll_invert,
	k_EControllerSettingScroll_friction,
	k_EControllerSettingOutput_trigger,
	k_EControllerSettingAdaptive_threshold,
	k_EControllerSettingButton_size,
	k_EControllerSettingButton_dist,
	k_EControllerSettingGyro_mode,
	k_EControllerSettingJoystick_smoothing,
	k_EControllerSettingGyro_axis,
	k_EControllerSettingGyro_button,
	k_EControllerSettingGyro_neutral,
	k_EControllerSettingGyro_lock_extents,
	k_EControllerSettingGyro_pointer_mode,
	k_EControllerSettingGyro_button_invert,
	k_EControllerSettingVirtual_mode,
	k_EControllerSettingTouch_menu_button_count,
	k_EControllerSettingTouch_menu_opacity,
	k_EControllerSettingTouch_menu_position_x,
	k_EControllerSettingTouch_menu_position_y,
	k_EControllerSettingTouch_menu_scale,
	k_EControllerSettingMouse_dampening_trigger,
	k_EControllerSettingMouse_trigger_clamp_amount,
	k_EControllerSettingTouch_menu_show_labels,
	k_EControllerSettingGyro_sensitivity_scale,
	k_EControllerSettingScale,
	k_EControllerSettingPosition_x,
	k_EControllerSettingPosition_y,
	k_EControllerSettingTeleport_start,
	k_EControllerSettingTeleport_stop,
	k_EControllerSettingTouchmenu_button_fire_type,
	k_EControllerSettingTest_param_0,
	k_EControllerSettingTest_param_1,
	k_EControllerSettingTest_param_2,
	k_EControllerSettingTest_param_3,
	k_EControllerSettingTest_param_4,
	k_EControllerSettingTest_param_5,
	k_EControllerSettingTest_param_6,
	k_EControllerSettingTest_param_7,
	k_EControllerSettingTest_param_8,
	k_EControllerSettingTest_param_9,
	k_EControllerSettingAction_set_trigger_cursor_show,
	k_EControllerSettingAction_set_trigger_cursor_hide,
	k_EControllerSettingDelay_start,
	k_EControllerSettingDelay_end,
	k_EControllerSettingCycle,
	k_EControllerSettingToggle,
	k_EControllerSettingRepeat_rate,
	k_EControllerSettingDouble_tap_time,
	k_EControllerSettingLong_press_time,
	k_EControllerSettingActivation_threshold,
	k_EControllerSettingMouse_warp_x,
	k_EControllerSettingMouse_warp_y,
	k_EControllerSettingAnalog_value,
	k_EControllerSettingInterruptable,
	k_EControllerSettingSoft_press_sytle,
	k_EControllerSettingActivator_output_axis,
};

enum EControllerConfigFeature
{
	k_EControllerConfigFeatureFeature_none = 0,
	k_EControllerConfigFeatureFeature_gamepad,
	k_EControllerConfigFeatureFeature_keboard,
	k_EControllerConfigFeatureFeature_mouse,
	k_EControllerConfigFeatureFeature_mouseregion,
	k_EControllerConfigFeatureFeature_gyro,
	k_EControllerConfigFeatureFeature_radialmenu,
	k_EControllerConfigFeatureFeature_modeshift = 8,
	k_EControllerConfigFeatureFeature_actionset,
	k_EControllerConfigFeatureFeature_activator,
	k_EControllerConfigFeatureFeature_LEDColors,
	k_EControllerConfigFeatureController_native,
};

struct SteamControllerState_t
{
	// If packet num matches that on your prior call, then the controller state hasn't been changed since 
	// your last call and there is no need to process it
	uint32 unPacketNum;

	// bit flags for each of the buttons
	uint64 ulButtons;

	// Left pad coordinates
	short sLeftPadX;
	short sLeftPadY;

	// Right pad coordinates
	short sRightPadX;
	short sRightPadY;

};

#pragma pack( push, 1 )

struct ControllerDigitalActionData_t
{
	uint8 m_bState;
	uint8 m_bActive;
};

struct ControllerAnalogActionData_t
{
	EControllerSourceMode m_eMode;
	float m_fX;
	float m_fY;
	uint8 m_bActive;
};

struct ControllerMotionData_t
{
	float m_fRotQuatX;
	float m_fRotQuatY;
	float m_fRotQuatZ;
	float m_fRotQuatW;

	float m_fPosAccelX;
	float m_fPosAccelY;
	float m_fPosAccelZ;

	float m_fRotVelX;
	float m_fRotVelY;
	float m_fRotVelZ;
};

#pragma pack( pop )


// clientcontroller callbacks

#pragma pack( push, 8 )

struct ControllerConnected_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 1 };

	// TODO : Reverse this callback
};

struct ControllerDisconnected_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 2 };

	// TODO : Reverse this callback
};

struct LoadControllerConfigResult_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 3 };

	// TODO : Reverse this callback
};

struct SetControllerOverrideMode_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 10 };

	// TODO : Reverse this callback
};

struct ControllerWirelessPresence_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 12 };

	// TODO : Reverse this callback
};

struct ControllerPaired_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 14 };

	// TODO : Reverse this callback
};

struct ControllerTouchMenuCreate_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 15 };

	// TODO : Reverse this callback
};

struct ControllerTouchMenuDestroy_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 16 };

	// TODO : Reverse this callback
};

struct ControllerPacketLossUI_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 17 };

	// TODO : Reverse this callback
};

struct ControllerShowBindingPanel_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 18 };

	// TODO : Reverse this callback
};

struct ControllerActionBlockOutdated_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 19 };

	// TODO : Reverse this callback
};

struct ControllerConfigLoadError_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 20 };

	// TODO : Reverse this callback
};

struct ControllerDisplayKeyboard_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 22 };

	// TODO : Reverse this callback
};

struct ReceivedControllerConfigSets_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 23 };

	// TODO : Reverse this callback
};

struct ReceivedControllerPersonalization_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 24 };

	// TODO : Reverse this callback
};

struct ControllerAccountsUpdated_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 25 };

	// TODO : Reverse this callback
};

struct ControllerDongleUpdateStatus_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 26 };

	// TODO : Reverse this callback
};

struct ReceivedControllerPersonalizationCfg_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 27 };

	// TODO : Reverse this callback
};

struct ControllerActionSetChanged_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 28 };

	// TODO : Reverse this callback
};

struct ControllerActionTriggered_t
{
	enum { k_iCallback = k_iClientControllerCallbacks + 29 };

	// TODO : Reverse this callback
};

#pragma pack( pop )

#endif // CONTROLLERCOMMON_H
