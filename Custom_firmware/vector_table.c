/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "interrupt.h"

extern unsigned int _STACK_HEAD;

void *vector_table[] __attribute__((section(".vector_table"))) =
{
    (void *) &_STACK_HEAD,
    (void *) interrupt_reset,
    (void *) interrupt_nmi,
    (void *) interrupt_hard_fault,
    /* (void *) interrupt_memmanage, */
    /* (void *) interrupt_bus_fault, */
    /* (void *) interrupt_usage_fault, */
    (void *) interrupt_reserved_0,
    (void *) interrupt_reserved_1,
    (void *) interrupt_reserved_2,
    (void *) interrupt_reserved_3,
    (void *) interrupt_reserved_4,
    (void *) interrupt_reserved_5,
    (void *) interrupt_reserved_6,
    (void *) interrupt_svcall,
    (void *) interrupt_debug,
    (void *) interrupt_reserved_7,
    (void *) interrupt_reserved_8,
    (void *) interrupt_pendsv,
    (void *) interrupt_systick,
};
