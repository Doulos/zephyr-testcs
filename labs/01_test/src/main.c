/*
 * Copyright (c) 2024 Doulos
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#if CONFIG_ARCH_POSIX
extern void nsi_exit(int exit_code);
#endif

int main(void)
{
	printf("»»~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~««\n");
	printf("»» TEST SYSTEM for Doulos Zephyr Essential ««\n");
	printf("»»~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~««\n");
	printf("board: %s\n", CONFIG_BOARD_TARGET);
	printf("TEST OK!\n");
#if CONFIG_ARCH_POSIX
	nsi_exit(0);
#else
	return 0;
#endif
}
