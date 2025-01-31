/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author         Notes
 * 2020-04-16     bigmagic       first version
 */

#ifndef BOARD_H__
#define BOARD_H__

#include <stdint.h>
#include "raspi4.h"

extern unsigned char __bss_start;
extern unsigned char __bss_end;

#define RT_HW_HEAP_BEGIN    (void*)&__bss_end
#define RT_HW_HEAP_END      (void*)(RT_HW_HEAP_BEGIN + 64 * 1024 * 1024)

#ifndef RT_USING_SMART
#define PV_OFFSET 0
#define KERNEL_VADDR_START 0
#endif

void rt_hw_board_init(void);

#endif
