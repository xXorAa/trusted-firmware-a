/*
 * Copyright (c) 2015-2019, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QEMU_PRIVATE_H
#define QEMU_PRIVATE_H

#include <stdint.h>

void qemu_pwr_gic_on_finish(void);
void qemu_pwr_gic_off(void);

#endif /* QEMU_PRIVATE_H */
