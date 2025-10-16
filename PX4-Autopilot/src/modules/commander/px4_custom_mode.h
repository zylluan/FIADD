
/**
 * @file px4_custom_mode.h
 * @brief Defines PX4 custom flight modes and provides a utility function to retrieve the custom mode based on navigation state.
 *
 * This file contains enumerations for PX4 custom main modes and sub-modes, as well as a union structure
 * to represent the custom mode in different formats. Additionally, it includes a utility function 
 * `get_px4_custom_mode` (if `DEFINE_GET_PX4_CUSTOM_MODE` is defined) to map navigation states to 
 * corresponding PX4 custom modes.
 *
 * Enumerations:
 * - PX4_CUSTOM_MAIN_MODE: Defines the main flight modes such as manual, altitude control, position control, etc.
 * - PX4_CUSTOM_SUB_MODE_AUTO: Defines sub-modes for the AUTO main mode, such as mission, loiter, RTL, etc.
 * - PX4_CUSTOM_SUB_MODE_POSCTL: Defines sub-modes for the POSCTL main mode, such as position control and orbit.
 *
 * Union:
 * - px4_custom_mode: Represents the custom mode with fields for main mode, sub-mode, and reserved bits. 
 *   It also provides alternative representations as a 32-bit integer or a float.
 *
 * Utility Function:
 * - `get_px4_custom_mode(uint8_t nav_state)`: Maps a navigation state (from `vehicle_status_s`) to the 
 *   corresponding PX4 custom mode. The function initializes the custom mode to zero and sets the main 
 *   and sub-modes based on the provided navigation state.
 *
 * Usage:
 * This file is used in the PX4 Autopilot system to define and handle custom flight modes. The utility 
 * function simplifies the process of determining the custom mode based on the current navigation state.
 *
 * PX4 custom flight modes
 *
 */

#pragma once

#include <stdint.h>

//主模式 	手动  高度控制 位置控制  自动导航  特技模式  外部模式 姿态稳定 
enum PX4_CUSTOM_MAIN_MODE {
	PX4_CUSTOM_MAIN_MODE_MANUAL = 1,
	PX4_CUSTOM_MAIN_MODE_ALTCTL,
	PX4_CUSTOM_MAIN_MODE_POSCTL, //手动位置控制模式（POSCTL）
	PX4_CUSTOM_MAIN_MODE_AUTO,
	PX4_CUSTOM_MAIN_MODE_ACRO,
	PX4_CUSTOM_MAIN_MODE_OFFBOARD,  //主要用这个 外部控制 ROS2
	PX4_CUSTOM_MAIN_MODE_STABILIZED,
	PX4_CUSTOM_MAIN_MODE_RATTITUDE_LEGACY,
	PX4_CUSTOM_MAIN_MODE_SIMPLE /* unused, but reserved for future use */
};


// 自动起飞  定点悬停 执行航线任务  返航  降落   精准降落   VTOL起飞并切换固定翼
enum PX4_CUSTOM_SUB_MODE_AUTO {
	PX4_CUSTOM_SUB_MODE_AUTO_READY = 1,
	PX4_CUSTOM_SUB_MODE_AUTO_TAKEOFF,
	PX4_CUSTOM_SUB_MODE_AUTO_LOITER,
	PX4_CUSTOM_SUB_MODE_AUTO_MISSION,
	PX4_CUSTOM_SUB_MODE_AUTO_RTL,
	PX4_CUSTOM_SUB_MODE_AUTO_LAND,
	PX4_CUSTOM_SUB_MODE_AUTO_RESERVED_DO_NOT_USE, // was PX4_CUSTOM_SUB_MODE_AUTO_RTGS, deleted 2020-03-05
	PX4_CUSTOM_SUB_MODE_AUTO_FOLLOW_TARGET,   //？
	PX4_CUSTOM_SUB_MODE_AUTO_PRECLAND,
	PX4_CUSTOM_SUB_MODE_AUTO_VTOL_TAKEOFF
};

enum PX4_CUSTOM_SUB_MODE_POSCTL {
	PX4_CUSTOM_SUB_MODE_POSCTL_POSCTL = 0,
	PX4_CUSTOM_SUB_MODE_POSCTL_ORBIT
};

union px4_custom_mode {
	struct {
		uint16_t reserved;
		uint8_t main_mode;
		uint8_t sub_mode;
	};
	uint32_t data;
	float data_float;
	struct {
		uint16_t reserved_hl;
		uint16_t custom_mode_hl;
	};
};

#ifdef DEFINE_GET_PX4_CUSTOM_MODE
#include <uORB/topics/vehicle_status.h>

static inline union px4_custom_mode get_px4_custom_mode(uint8_t nav_state)
{
	union px4_custom_mode custom_mode;
	custom_mode.data = 0;

	switch (nav_state) {
	case vehicle_status_s::NAVIGATION_STATE_MANUAL:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_MANUAL;
		break;

	case vehicle_status_s::NAVIGATION_STATE_ALTCTL:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_ALTCTL;
		break;

	case vehicle_status_s::NAVIGATION_STATE_POSCTL:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_POSCTL;
		break;

	case vehicle_status_s::NAVIGATION_STATE_AUTO_MISSION:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_AUTO;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_AUTO_MISSION;
		break;

	case vehicle_status_s::NAVIGATION_STATE_AUTO_LOITER:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_AUTO;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_AUTO_LOITER;
		break;

	case vehicle_status_s::NAVIGATION_STATE_AUTO_RTL:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_AUTO;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_AUTO_RTL;
		break;

	case vehicle_status_s::NAVIGATION_STATE_ACRO:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_ACRO;
		break;

	case vehicle_status_s::NAVIGATION_STATE_DESCEND:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_AUTO;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_AUTO_LAND;
		break;

	case vehicle_status_s::NAVIGATION_STATE_TERMINATION:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_MANUAL;
		break;

	case vehicle_status_s::NAVIGATION_STATE_OFFBOARD:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_OFFBOARD;
		break;

	case vehicle_status_s::NAVIGATION_STATE_STAB:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_STABILIZED;
		break;

	case vehicle_status_s::NAVIGATION_STATE_AUTO_TAKEOFF:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_AUTO;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_AUTO_TAKEOFF;
		break;

	case vehicle_status_s::NAVIGATION_STATE_AUTO_LAND:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_AUTO;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_AUTO_LAND;
		break;

	case vehicle_status_s::NAVIGATION_STATE_AUTO_FOLLOW_TARGET:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_AUTO;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_AUTO_FOLLOW_TARGET;
		break;

	case vehicle_status_s::NAVIGATION_STATE_AUTO_PRECLAND:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_AUTO;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_AUTO_PRECLAND;
		break;

	case vehicle_status_s::NAVIGATION_STATE_ORBIT:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_POSCTL;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_POSCTL_ORBIT;
		break;

	case vehicle_status_s::NAVIGATION_STATE_AUTO_VTOL_TAKEOFF:
		custom_mode.main_mode = PX4_CUSTOM_MAIN_MODE_AUTO;
		custom_mode.sub_mode = PX4_CUSTOM_SUB_MODE_AUTO_VTOL_TAKEOFF;
		break;
	}

	return custom_mode;
}

#endif /* DEFINE_GET_PX4_CUSTOM_MODE */

