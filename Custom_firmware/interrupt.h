/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef INTERRUPT_H
#define INTERRUPT_H

void interrupt_reset (void);
void interrupt_nmi (void);
void interrupt_hard_fault (void);
/* void interrupt_memmanage (void); */
/* void interrupt_bus_fault (void); */
/* void interrupt_usage_fault (void); */
void interrupt_reserved_0 (void);
void interrupt_reserved_1 (void);
void interrupt_reserved_2 (void);
void interrupt_reserved_3 (void);
void interrupt_reserved_4 (void);
void interrupt_reserved_5 (void);
void interrupt_reserved_6 (void);
void interrupt_svcall (void);
void interrupt_debug (void);
void interrupt_reserved_7 (void);
void interrupt_reserved_8 (void);
void interrupt_pendsv (void);
void interrupt_systick (void);

#endif // INTERRUPT_H
