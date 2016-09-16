/*
 * Copyright 2016 - Yuri Sh. <yuri@bynet.co.il>
 * Copyright 2016 - Ícaro Hoff <icarohoff@gmail.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _LINUX_FASTCHG_H
#define _LINUX_FASTCHG_H

#define FAST_CHARGE_VERSION "Version 3.2"

extern int force_fast_charge;
extern int force_fast_charge_temp;
extern int fast_charge_level;
extern int usb_power_curr_now;
extern int force_fast_charge_on_off;

#define FAST_CHARGE_DISABLED		0	/* Default */
#define FAST_CHARGE_FORCE_AC		1
#define FAST_CHARGE_FORCE_CUSTOM_MA	2

#define FAST_CHARGE_500		500
#define FAST_CHARGE_900		900
#define FAST_CHARGE_1200	1200
#define FAST_CHARGE_1600	1600
#define FAST_CHARGE_1800	1800
#define FAST_CHARGE_2000	2000

#define FAST_CHARGE_LEVELS	"500 900 1200 1600 1800 2000"

#endif
