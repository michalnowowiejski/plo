/* 
 * Phoenix-RTOS
 *
 * plo - operating system loader
 *
 * Configuration
 *
 * Copyright 2001, 2005 Pawel Pisarczyk
 * Copyright 2006 Radoslaw F. Wawrzusiak
 * @copyright 2015 Phoenix Systems
 * @author: Katarzyna Baranowska <katarzyna.baranowska@phoesys.com>
 *
 * This file is part of Phoenix-RTOS.
 *
 * Phoenix-RTOS is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Phoenix-RTOS kernel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Phoenix-RTOS kernel; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _CONFIG_H_
#define _CONFIG_H_

#define VERSION "1.0"


/* User interface */
#define WELCOME "-\\- Phoenix-RTOS loader, version: " VERSION ", (c) Pawel Pisarczyk, 2001, 2005\n-\\- ARM port: (c) Radoslaw F. Wawrzusiak, 2006"
#define PROMPT  "(plo)% "

#define LINESZ  80
#define HISTSZ  8


/* Console character attributes */
#define ATTR_DEBUG    2
#define ATTR_USER     7
#define ATTR_INIT     13
#define ATTR_LOADER   15
#define ATTR_ERROR    4


/* Kernel file */
#define KERNEL_PATH   "phoenix"


/* Kernel adresses and sizes */
#define FLASH_KERNEL_OFFSET	0x10000

#define STACK_SIZE		0xc00


/* Boot command size */
#define CMD_SIZE		64
#define PDATA_MAGIC		0x3628
#define PDATA_ADDR		0x4000

#define ARMCC_A5

#define CONSOLE_UART_PORT          UART0
#define CONSOLE_BAUD       115200

#define FLASH_QUADSPI0_A1_SIZE 0x400000
#define FLASH_S25FL132K

#define CPU_XTAL32k_CLK_HZ              32768u   /* Value of the external 32k crystal or oscillator clock frequency in Hz */

#define KERNEL_ID "PHOENIX"

#define DEFAULT_CMD "load flash; go!"
#define DEFAULT_KERNEL_ARGS		"WDOG=no"

/* LED_R, LED_G, LED_B  */
#define STATUS_LEDS { 73, 72, 74 }
#define STATUS_LEVEL { 1, 1, 0}

#define WATCHDOG_ENABLED		0
#define WATCHDOG_TIMEOUT_SEC	120

#endif
