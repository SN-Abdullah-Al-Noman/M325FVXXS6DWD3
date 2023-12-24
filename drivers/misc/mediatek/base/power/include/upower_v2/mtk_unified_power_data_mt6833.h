/*
 * Copyright (C) 2020 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

/* Mouton_TO_FY_v0p5__200217 */

/**********************************************
 * unified_power_data.h
 * This header file includes:
 * 1. Macros of SRAM related address
 * 2. Raw datas of unified power tables for each bank
 **********************************************/

#ifndef UNIFIED_POWER_DATA_H
#define UNIFIED_POWER_DATA_H

/* remember to sync to sspm upower */
#define UPOWER_CSRAM_BASE 0x0012a000
#define UPOWER_CSRAM_SIZE 0x3000 /* 12K bytes */
#define UPOWER_DVFS_OFF_BOTTOM 0x8 /* ignore the last 8 bytes */
/* limit should be at 0x12CFF4 */
#define UPOWER_TBL_LIMIT \
	((UPOWER_CSRAM_BASE)+(UPOWER_CSRAM_SIZE)-(UPOWER_DVFS_OFF_BOTTOM))

struct upower_tbl upower_tbl_l_FY = {
	.row = {
		{.cap = 152, .volt = 65000, .dyn_pwr = 17036,
			.lkg_pwr = {24481, 24481, 24481, 24481, 24481, 24481} },
		{.cap = 180, .volt = 65000, .dyn_pwr = 21125,
			.lkg_pwr = {24481, 24481, 24481, 24481, 24481, 24481} },
		{.cap = 192, .volt = 66250, .dyn_pwr = 23892,
			.lkg_pwr = {25289, 25289, 25289, 25289, 25289, 25289} },
		{.cap = 204, .volt = 67500, .dyn_pwr = 26823,
			.lkg_pwr = {26096, 26096, 26096, 26096, 26096, 26096} },
		{.cap = 224, .volt = 70000, .dyn_pwr = 33193,
			.lkg_pwr = {27712, 27712, 27712, 27712, 27712, 27712} },
		{.cap = 244, .volt = 72500, .dyn_pwr = 40270,
			.lkg_pwr = {29541, 29541, 29541, 29541, 29541, 29541} },
		{.cap = 255, .volt = 74375, .dyn_pwr = 46037,
			.lkg_pwr = {30913, 30913, 30913, 30913, 30913, 30913} },
		{.cap = 269, .volt = 76250, .dyn_pwr = 51839,
			.lkg_pwr = {32406, 32406, 32406, 32406, 32406, 32406} },
		{.cap = 293, .volt = 80000, .dyn_pwr = 64138,
			.lkg_pwr = {35513, 35513, 35513, 35513, 35513, 35513} },
		{.cap = 310, .volt = 82500, .dyn_pwr = 73016,
			.lkg_pwr = {37853, 37853, 37853, 37853, 37853, 37853} },
		{.cap = 319, .volt = 85000, .dyn_pwr = 82433,
			.lkg_pwr = {40194, 40194, 40194, 40194, 40194, 40194} },
		{.cap = 334, .volt = 89375, .dyn_pwr = 97153,
			.lkg_pwr = {44828, 44828, 44828, 44828, 44828, 44828} },
		{.cap = 346, .volt = 92500, .dyn_pwr = 108403,
			.lkg_pwr = {48490, 48490, 48490, 48490, 48490, 48490} },
		{.cap = 351, .volt = 94375, .dyn_pwr = 115373,
			.lkg_pwr = {50739, 50739, 50739, 50739, 50739, 50739} },
		{.cap = 361, .volt = 97500, .dyn_pwr = 127431,
			.lkg_pwr = {54885, 54885, 54885, 54885, 54885, 54885} },
		{.cap = 367, .volt = 100000, .dyn_pwr = 137463,
			.lkg_pwr = {58280, 58280, 58280, 58280, 58280, 58280} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
	},
};

struct upower_tbl upower_tbl_cluster_l_FY = {
	.row = {
		{.cap = 152, .volt = 65000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 180, .volt = 65000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 192, .volt = 66250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 204, .volt = 67500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 224, .volt = 70000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 244, .volt = 72500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 255, .volt = 74375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 269, .volt = 76250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 293, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 310, .volt = 82500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 319, .volt = 85000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 334, .volt = 89375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 346, .volt = 92500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 351, .volt = 94375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 361, .volt = 97500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 367, .volt = 100000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_b_FY = {
	.row = {
		{.cap = 630, .volt = 65000, .dyn_pwr = 88853,
			.lkg_pwr = {103988, 103988, 103988, 103988, 103988,
				103988} },
		{.cap = 688, .volt = 68125, .dyn_pwr = 113084,
			.lkg_pwr = {112290, 112290, 112290, 112290, 112290,
				112290} },
		{.cap = 718, .volt = 69375, .dyn_pwr = 125369,
			.lkg_pwr = {115611, 115611, 115611, 115611, 115611,
				115611} },
		{.cap = 754, .volt = 71875, .dyn_pwr = 147605,
			.lkg_pwr = {122886, 122886, 122886, 122886, 122886,
				122886} },
		{.cap = 777, .volt = 73750, .dyn_pwr = 164400,
			.lkg_pwr = {128501, 128501, 128501, 128501, 128501,
				128501} },
		{.cap = 776, .volt = 75625, .dyn_pwr = 186497,
			.lkg_pwr = {134355, 134355, 134355, 134355, 134355,
				134355} },
		{.cap = 822, .volt = 80000, .dyn_pwr = 233693,
			.lkg_pwr = {149134, 149134, 149134, 149134, 149134,
				149134} },
		{.cap = 862, .volt = 83750, .dyn_pwr = 282870,
			.lkg_pwr = {163420, 163420, 163420, 163420, 163420,
				163420} },
		{.cap = 891, .volt = 86875, .dyn_pwr = 327217,
			.lkg_pwr = {176240, 176240, 176240, 176240, 176240,
				176240} },
		{.cap = 920, .volt = 90000, .dyn_pwr = 374804,
			.lkg_pwr = {189670, 189670, 189670, 189670, 189670,
				189670} },
		{.cap = 936, .volt = 91875, .dyn_pwr = 403887,
			.lkg_pwr = {198754, 198754, 198754, 198754, 198754,
				198754} },
		{.cap = 949, .volt = 93750, .dyn_pwr = 434140,
			.lkg_pwr = {207838, 207838, 207838, 207838, 207838,
				207838} },
		{.cap = 968, .volt = 96875, .dyn_pwr = 487166,
			.lkg_pwr = {224138, 224138, 224138, 224138, 224138,
				224138} },
		{.cap = 981, .volt = 99375, .dyn_pwr = 531933,
			.lkg_pwr = {237797, 237797, 237797, 237797, 237797,
				237797} },
		{.cap = 1001, .volt = 101875, .dyn_pwr = 578784,
			.lkg_pwr = {252764, 252764, 252764, 252764, 252764,
				252764} },
		{.cap = 1024, .volt = 105000, .dyn_pwr = 640486,
			.lkg_pwr = {272017, 272017, 272017, 272017, 272017,
				272017} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
	},
};

struct upower_tbl upower_tbl_cluster_b_FY = {
	.row = {
		{.cap = 630, .volt = 65000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 688, .volt = 68125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 718, .volt = 69375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 754, .volt = 71875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 777, .volt = 73750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 776, .volt = 75625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 822, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 862, .volt = 83750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 891, .volt = 86875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 920, .volt = 90000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 936, .volt = 91875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 949, .volt = 93750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 968, .volt = 96875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 981, .volt = 99375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1001, .volt = 101875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1024, .volt = 105000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_cci_FY = {
	.row = {
		{.cap = 0, .volt = 65000, .dyn_pwr = 8189,
			.lkg_pwr = {57212, 57212, 57212, 57212, 57212, 57212} },
		{.cap = 0, .volt = 66875, .dyn_pwr = 9747,
			.lkg_pwr = {60017, 60017, 60017, 60017, 60017, 60017} },
		{.cap = 0, .volt = 68750, .dyn_pwr = 11442,
			.lkg_pwr = {62822, 62822, 62822, 62822, 62822, 62822} },
		{.cap = 0, .volt = 70625, .dyn_pwr = 13277,
			.lkg_pwr = {65750, 65750, 65750, 65750, 65750, 65750} },
		{.cap = 0, .volt = 72500, .dyn_pwr = 15282,
			.lkg_pwr = {68927, 68927, 68927, 68927, 68927, 68927} },
		{.cap = 0, .volt = 75000, .dyn_pwr = 18171,
			.lkg_pwr = {73162, 73162, 73162, 73162, 73162, 73162} },
		{.cap = 0, .volt = 77500, .dyn_pwr = 21343,
			.lkg_pwr = {77948, 77948, 77948, 77948, 77948, 77948} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 24810,
			.lkg_pwr = {82734, 82734, 82734, 82734, 82734, 82734} },
		{.cap = 0, .volt = 82500, .dyn_pwr = 28584,
			.lkg_pwr = {88148, 88148, 88148, 88148, 88148, 88148} },
		{.cap = 0, .volt = 85000, .dyn_pwr = 32676,
			.lkg_pwr = {93562, 93562, 93562, 93562, 93562, 93562} },
		{.cap = 0, .volt = 87500, .dyn_pwr = 37627,
			.lkg_pwr = {99681, 99681, 99681, 99681, 99681, 99681} },
		{.cap = 0, .volt = 90625, .dyn_pwr = 44431,
			.lkg_pwr = {107531, 107531, 107531, 107531, 107531, 107531} },
		{.cap = 0, .volt = 92500, .dyn_pwr = 48832,
			.lkg_pwr = {112723, 112723, 112723, 112723, 112723, 112723} },
		{.cap = 0, .volt = 94375, .dyn_pwr = 53709,
			.lkg_pwr = {117915, 117915, 117915, 117915, 117915, 117915} },
		{.cap = 0, .volt = 97500, .dyn_pwr = 61747,
			.lkg_pwr = {127472, 127472, 127472, 127472, 127472, 127472} },
		{.cap = 0, .volt = 100000, .dyn_pwr = 68917,
			.lkg_pwr = {135298, 135298, 135298, 135298, 135298, 135298} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
	},
};

struct upower_tbl upower_tbl_l_B20G = {
	.row = {
		{.cap = 158, .volt = 65000, .dyn_pwr = 17036,
			.lkg_pwr = {24481, 24481, 24481, 24481, 24481, 24481} },
		{.cap = 188, .volt = 65000, .dyn_pwr = 21125,
			.lkg_pwr = {24481, 24481, 24481, 24481, 24481, 24481} },
		{.cap = 201, .volt = 66250, .dyn_pwr = 23892,
			.lkg_pwr = {25289, 25289, 25289, 25289, 25289, 25289} },
		{.cap = 213, .volt = 67500, .dyn_pwr = 26823,
			.lkg_pwr = {26096, 26096, 26096, 26096, 26096, 26096} },
		{.cap = 234, .volt = 70000, .dyn_pwr = 33193,
			.lkg_pwr = {27712, 27712, 27712, 27712, 27712, 27712} },
		{.cap = 254, .volt = 72500, .dyn_pwr = 40270,
			.lkg_pwr = {29541, 29541, 29541, 29541, 29541, 29541} },
		{.cap = 266, .volt = 74375, .dyn_pwr = 46037,
			.lkg_pwr = {30913, 30913, 30913, 30913, 30913, 30913} },
		{.cap = 281, .volt = 76250, .dyn_pwr = 51839,
			.lkg_pwr = {32406, 32406, 32406, 32406, 32406, 32406} },
		{.cap = 305, .volt = 80000, .dyn_pwr = 64138,
			.lkg_pwr = {35513, 35513, 35513, 35513, 35513, 35513} },
		{.cap = 324, .volt = 82500, .dyn_pwr = 73016,
			.lkg_pwr = {37853, 37853, 37853, 37853, 37853, 37853} },
		{.cap = 333, .volt = 85000, .dyn_pwr = 82433,
			.lkg_pwr = {40194, 40194, 40194, 40194, 40194, 40194} },
		{.cap = 348, .volt = 89375, .dyn_pwr = 97153,
			.lkg_pwr = {44828, 44828, 44828, 44828, 44828, 44828} },
		{.cap = 361, .volt = 92500, .dyn_pwr = 108403,
			.lkg_pwr = {48490, 48490, 48490, 48490, 48490, 48490} },
		{.cap = 366, .volt = 94375, .dyn_pwr = 115373,
			.lkg_pwr = {50739, 50739, 50739, 50739, 50739, 50739} },
		{.cap = 377, .volt = 97500, .dyn_pwr = 127431,
			.lkg_pwr = {54885, 54885, 54885, 54885, 54885, 54885} },
		{.cap = 383, .volt = 100000, .dyn_pwr = 137463,
			.lkg_pwr = {58280, 58280, 58280, 58280, 58280, 58280} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
	},
};

struct upower_tbl upower_tbl_cluster_l_B20G = {
	.row = {
		{.cap = 158, .volt = 65000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 188, .volt = 65000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 201, .volt = 66250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 213, .volt = 67500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 234, .volt = 70000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 254, .volt = 72500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 266, .volt = 74375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 281, .volt = 76250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 305, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 324, .volt = 82500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 333, .volt = 85000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 348, .volt = 89375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 361, .volt = 92500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 366, .volt = 94375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 377, .volt = 97500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 383, .volt = 100000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_b_B20G = {
	.row = {
		{.cap = 657, .volt = 65000, .dyn_pwr = 88853,
			.lkg_pwr = {103988, 103988, 103988, 103988, 103988,
				103988} },
		{.cap = 717, .volt = 68125, .dyn_pwr = 113084,
			.lkg_pwr = {112290, 112290, 112290, 112290, 112290,
				112290} },
		{.cap = 750, .volt = 70000, .dyn_pwr = 127638,
			.lkg_pwr = {117272, 117272, 117272, 117272, 117272,
				117272} },
		{.cap = 787, .volt = 72500, .dyn_pwr = 150183,
			.lkg_pwr = {124758, 124758, 124758, 124758, 124758,
				124758} },
		{.cap = 810, .volt = 73750, .dyn_pwr = 164400,
			.lkg_pwr = {128501, 128501, 128501, 128501, 128501,
				128501} },
		{.cap = 810, .volt = 76250, .dyn_pwr = 189593,
			.lkg_pwr = {136466, 136466, 136466, 136466, 136466,
				136466} },
		{.cap = 857, .volt = 80000, .dyn_pwr = 233693,
			.lkg_pwr = {149134, 149134, 149134, 149134, 149134,
				149134} },
		{.cap = 899, .volt = 84375, .dyn_pwr = 287108,
			.lkg_pwr = {165801, 165801, 165801, 165801, 165801,
				165801} },
		{.cap = 929, .volt = 87500, .dyn_pwr = 331942,
			.lkg_pwr = {178926, 178926, 178926, 178926, 178926,
				178926} },
		{.cap = 960, .volt = 90625, .dyn_pwr = 380027,
			.lkg_pwr = {192698, 192698, 192698, 192698, 192698,
				192698} },
		{.cap = 976, .volt = 92500, .dyn_pwr = 409595,
			.lkg_pwr = {201782, 201782, 201782, 201782, 201782,
				201782} },
		{.cap = 990, .volt = 94375, .dyn_pwr = 440343,
			.lkg_pwr = {210866, 210866, 210866, 210866, 210866,
				210866} },
		{.cap = 1001, .volt = 95000, .dyn_pwr = 455355,
			.lkg_pwr = {213894, 213894, 213894, 213894, 213894,
				213894} },
		{.cap = 1010, .volt = 96875, .dyn_pwr = 487771,
			.lkg_pwr = {224138, 224138, 224138, 224138, 224138,
				224138} },
		{.cap = 1019, .volt = 98125, .dyn_pwr = 510106,
			.lkg_pwr = {230968, 230968, 230968, 230968, 230968,
				230968} },
		{.cap = 1024, .volt = 99375, .dyn_pwr = 532967,
			.lkg_pwr = {237797, 237797, 237797, 237797, 237797,
				237797} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
	},
};

struct upower_tbl upower_tbl_cluster_b_B20G = {
	.row = {
		{.cap = 657, .volt = 65000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 717, .volt = 68125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 750, .volt = 70000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 787, .volt = 72500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 810, .volt = 73750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 810, .volt = 76250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 857, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 899, .volt = 84375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 929, .volt = 87500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 960, .volt = 90625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 976, .volt = 92500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 990, .volt = 94375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1001, .volt = 95000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1010, .volt = 96875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1019, .volt = 98125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1024, .volt = 99375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_cci_B20G = {
	.row = {
		{.cap = 0, .volt = 65000, .dyn_pwr = 8189,
			.lkg_pwr = {57212, 57212, 57212, 57212, 57212, 57212} },
		{.cap = 0, .volt = 66875, .dyn_pwr = 9747,
			.lkg_pwr = {60017, 60017, 60017, 60017, 60017, 60017} },
		{.cap = 0, .volt = 68750, .dyn_pwr = 11442,
			.lkg_pwr = {62822, 62822, 62822, 62822, 62822, 62822} },
		{.cap = 0, .volt = 70625, .dyn_pwr = 13277,
			.lkg_pwr = {65750, 65750, 65750, 65750, 65750, 65750} },
		{.cap = 0, .volt = 72500, .dyn_pwr = 15282,
			.lkg_pwr = {68927, 68927, 68927, 68927, 68927, 68927} },
		{.cap = 0, .volt = 75000, .dyn_pwr = 18171,
			.lkg_pwr = {73162, 73162, 73162, 73162, 73162, 73162} },
		{.cap = 0, .volt = 77500, .dyn_pwr = 21343,
			.lkg_pwr = {77948, 77948, 77948, 77948, 77948, 77948} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 24810,
			.lkg_pwr = {82734, 82734, 82734, 82734, 82734, 82734} },
		{.cap = 0, .volt = 82500, .dyn_pwr = 28584,
			.lkg_pwr = {88148, 88148, 88148, 88148, 88148, 88148} },
		{.cap = 0, .volt = 85000, .dyn_pwr = 32676,
			.lkg_pwr = {93562, 93562, 93562, 93562, 93562, 93562} },
		{.cap = 0, .volt = 87500, .dyn_pwr = 37627,
			.lkg_pwr = {99681, 99681, 99681, 99681, 99681, 99681} },
		{.cap = 0, .volt = 90625, .dyn_pwr = 44431,
			.lkg_pwr = {107531, 107531, 107531, 107531, 107531, 107531} },
		{.cap = 0, .volt = 92500, .dyn_pwr = 48832,
			.lkg_pwr = {112723, 112723, 112723, 112723, 112723, 112723} },
		{.cap = 0, .volt = 94375, .dyn_pwr = 53709,
			.lkg_pwr = {117915, 117915, 117915, 117915, 117915, 117915} },
		{.cap = 0, .volt = 98125, .dyn_pwr = 63868,
			.lkg_pwr = {129429, 129429, 129429, 129429, 129429, 129429} },
		{.cap = 0, .volt = 100000, .dyn_pwr = 68917,
			.lkg_pwr = {135298, 135298, 135298, 135298, 135298, 135298} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
	},
};

struct upower_tbl upower_tbl_l_B24G = {
	.row = {
		{.cap = 147, .volt = 65000, .dyn_pwr = 17036,
			.lkg_pwr = {24481, 24481, 24481, 24481, 24481, 24481} },
		{.cap = 181, .volt = 65000, .dyn_pwr = 22147,
			.lkg_pwr = {24481, 24481, 24481, 24481, 24481, 24481} },
		{.cap = 193, .volt = 66250, .dyn_pwr = 24883,
			.lkg_pwr = {25289, 25289, 25289, 25289, 25289, 25289} },
		{.cap = 203, .volt = 67500, .dyn_pwr = 27778,
			.lkg_pwr = {26096, 26096, 26096, 26096, 26096, 26096} },
		{.cap = 221, .volt = 70000, .dyn_pwr = 34063,
			.lkg_pwr = {27712, 27712, 27712, 27712, 27712, 27712} },
		{.cap = 239, .volt = 72500, .dyn_pwr = 41033,
			.lkg_pwr = {29541, 29541, 29541, 29541, 29541, 29541} },
		{.cap = 249, .volt = 74375, .dyn_pwr = 46751,
			.lkg_pwr = {30913, 30913, 30913, 30913, 30913, 30913} },
		{.cap = 264, .volt = 76250, .dyn_pwr = 52357,
			.lkg_pwr = {32406, 32406, 32406, 32406, 32406, 32406} },
		{.cap = 285, .volt = 80000, .dyn_pwr = 64430,
			.lkg_pwr = {35513, 35513, 35513, 35513, 35513, 35513} },
		{.cap = 302, .volt = 82500, .dyn_pwr = 73144,
			.lkg_pwr = {37853, 37853, 37853, 37853, 37853, 37853} },
		{.cap = 310, .volt = 85000, .dyn_pwr = 82433,
			.lkg_pwr = {40194, 40194, 40194, 40194, 40194, 40194} },
		{.cap = 324, .volt = 89375, .dyn_pwr = 97153,
			.lkg_pwr = {44828, 44828, 44828, 44828, 44828, 44828} },
		{.cap = 335, .volt = 92500, .dyn_pwr = 108403,
			.lkg_pwr = {48490, 48490, 48490, 48490, 48490, 48490} },
		{.cap = 340, .volt = 94375, .dyn_pwr = 115373,
			.lkg_pwr = {50739, 50739, 50739, 50739, 50739, 50739} },
		{.cap = 350, .volt = 97500, .dyn_pwr = 127431,
			.lkg_pwr = {54885, 54885, 54885, 54885, 54885, 54885} },
		{.cap = 356, .volt = 100000, .dyn_pwr = 137463,
			.lkg_pwr = {58280, 58280, 58280, 58280, 58280, 58280} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
		{{0}, {24481} },
	},
};

struct upower_tbl upower_tbl_cluster_l_B24G = {
	.row = {
		{.cap = 147, .volt = 65000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 181, .volt = 65000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 193, .volt = 66250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 203, .volt = 67500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 221, .volt = 70000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 239, .volt = 72500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 249, .volt = 74375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 264, .volt = 76250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 285, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 302, .volt = 82500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 310, .volt = 85000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 324, .volt = 89375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 335, .volt = 92500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 340, .volt = 94375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 350, .volt = 97500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 356, .volt = 100000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_b_B24G = {
	.row = {
		{.cap = 611, .volt = 65000, .dyn_pwr = 88853,
			.lkg_pwr = {103988, 103988, 103988, 103988, 103988,
				103988} },
		{.cap = 667, .volt = 68125, .dyn_pwr = 113084,
			.lkg_pwr = {112290, 112290, 112290, 112290, 112290,
				112290} },
		{.cap = 697, .volt = 69375, .dyn_pwr = 125369,
			.lkg_pwr = {115611, 115611, 115611, 115611, 115611,
				115611} },
		{.cap = 732, .volt = 71875, .dyn_pwr = 147605,
			.lkg_pwr = {122886, 122886, 122886, 122886, 122886,
				122886} },
		{.cap = 754, .volt = 73750, .dyn_pwr = 164400,
			.lkg_pwr = {128501, 128501, 128501, 128501, 128501,
				128501} },
		{.cap = 753, .volt = 75625, .dyn_pwr = 186497,
			.lkg_pwr = {134355, 134355, 134355, 134355, 134355,
				134355} },
		{.cap = 797, .volt = 80000, .dyn_pwr = 233693,
			.lkg_pwr = {149134, 149134, 149134, 149134, 149134,
				149134} },
		{.cap = 836, .volt = 83750, .dyn_pwr = 282870,
			.lkg_pwr = {163420, 163420, 163420, 163420, 163420,
				163420} },
		{.cap = 864, .volt = 86875, .dyn_pwr = 327217,
			.lkg_pwr = {176240, 176240, 176240, 176240, 176240,
				176240} },
		{.cap = 893, .volt = 90000, .dyn_pwr = 374804,
			.lkg_pwr = {189670, 189670, 189670, 189670, 189670,
				189670} },
		{.cap = 931, .volt = 93750, .dyn_pwr = 443644,
			.lkg_pwr = {207838, 207838, 207838, 207838, 207838,
				207838} },
		{.cap = 952, .volt = 96875, .dyn_pwr = 505112,
			.lkg_pwr = {224138, 224138, 224138, 224138, 224138,
				224138} },
		{.cap = 978, .volt = 99375, .dyn_pwr = 556944,
			.lkg_pwr = {237797, 237797, 237797, 237797, 237797,
				237797} },
		{.cap = 995, .volt = 101250, .dyn_pwr = 597446,
			.lkg_pwr = {248913, 248913, 248913, 248913, 248913,
				248913} },
		{.cap = 1011, .volt = 103125, .dyn_pwr = 646701,
			.lkg_pwr = {260465, 260465, 260465, 260465, 260465,
				260465} },
		{.cap = 1024, .volt = 105000, .dyn_pwr = 697760,
			.lkg_pwr = {272017, 272017, 272017, 272017, 272017,
				272017} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
		{{0}, {103988} },
	},
};

struct upower_tbl upower_tbl_cluster_b_B24G = {
	.row = {
		{.cap = 611, .volt = 65000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 667, .volt = 68125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 697, .volt = 69375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 732, .volt = 71875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 754, .volt = 73750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 753, .volt = 75625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 797, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 836, .volt = 83750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 864, .volt = 86875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 893, .volt = 90000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 931, .volt = 93750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 952, .volt = 96875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 978, .volt = 99375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 995, .volt = 101250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1011, .volt = 103125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1024, .volt = 105000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_cci_B24G = {
	.row = {
		{.cap = 0, .volt = 65000, .dyn_pwr = 8189,
			.lkg_pwr = {57212, 57212, 57212, 57212, 57212, 57212} },
		{.cap = 0, .volt = 66250, .dyn_pwr = 9207,
			.lkg_pwr = {59082, 59082, 59082, 59082, 59082, 59082} },
		{.cap = 0, .volt = 67500, .dyn_pwr = 10303,
			.lkg_pwr = {60952, 60952, 60952, 60952, 60952, 60952} },
		{.cap = 0, .volt = 68750, .dyn_pwr = 11442,
			.lkg_pwr = {62822, 62822, 62822, 62822, 62822, 62822} },
		{.cap = 0, .volt = 70000, .dyn_pwr = 12663,
			.lkg_pwr = {64692, 64692, 64692, 64692, 64692, 64692} },
		{.cap = 0, .volt = 72500, .dyn_pwr = 15282,
			.lkg_pwr = {68927, 68927, 68927, 68927, 68927, 68927} },
		{.cap = 0, .volt = 75625, .dyn_pwr = 18919,
			.lkg_pwr = {74359, 74359, 74359, 74359, 74359, 74359} },
		{.cap = 0, .volt = 77500, .dyn_pwr = 21343,
			.lkg_pwr = {77948, 77948, 77948, 77948, 77948, 77948} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 24810,
			.lkg_pwr = {82734, 82734, 82734, 82734, 82734, 82734} },
		{.cap = 0, .volt = 82500, .dyn_pwr = 28584,
			.lkg_pwr = {88148, 88148, 88148, 88148, 88148, 88148} },
		{.cap = 0, .volt = 85000, .dyn_pwr = 32676,
			.lkg_pwr = {93562, 93562, 93562, 93562, 93562, 93562} },
		{.cap = 0, .volt = 87500, .dyn_pwr = 37627,
			.lkg_pwr = {99681, 99681, 99681, 99681, 99681, 99681} },
		{.cap = 0, .volt = 89375, .dyn_pwr = 41631,
			.lkg_pwr = {104270, 104270, 104270, 104270, 104270, 104270} },
		{.cap = 0, .volt = 93750, .dyn_pwr = 51864,
			.lkg_pwr = {116184, 116184, 116184, 116184, 116184, 116184} },
		{.cap = 0, .volt = 98125, .dyn_pwr = 63495,
			.lkg_pwr = {129429, 129429, 129429, 129429, 129429, 129429} },
		{.cap = 0, .volt = 100000, .dyn_pwr = 68917,
			.lkg_pwr = {135298, 135298, 135298, 135298, 135298, 135298} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
		{{0}, {57212} },
	},
};

#endif /* UNIFIED_POWER_DATA_H */

