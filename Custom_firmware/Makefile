# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

# Set paths
TOOLCHAIN_PATH = gcc-arm-none-eabi-7-2018-q2-update/bin
#JLINK_PATH = 

CC = $(TOOLCHAIN_PATH)/arm-none-eabi-gcc
OBJCPY = $(TOOLCHAIN_PATH)/arm-none-eabi-objcopy
OBJDUMP = $(TOOLCHAIN_PATH)/arm-none-eabi-objdump
GDB = $(TOOLCHAIN_PATH)/arm-none-eabi-gdb

C_CPU_FLAGS = -mtune=cortex-m0 -mthumb -march=armv6-m
C_DEBUG_FLAGS = -g0
C_OTHER_FLAGS =
C_OPTIMIZATION_FLAGS = -O0
C_LANGUAGE_FLAGS = -std=c11
C_INCLUDES = -Icmsis/Include/ -Icmsis

CFLAGS = $(C_CPU_FLAGS) $(C_DEBUG_FLAGS) $(C_OTHER_FLAGS) $(C_OPTIMIZATION_FLAGS) $(C_INCLUDES)
LD_FLAGS = -T gcc_arm.ld -Wl,-Map=project.map -Wl,--gc-sections -Icmsis/Include/ -Icmsis -nostartfiles

SOURCES = vector_table.c startup_ARMCM0.c system_ARMCM0.c main.c
OBJECTS = $(SOURCES:.c=.o)

all: project.hex project.bin project.S

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $< $(CFLAGS)

project.elf: $(OBJECTS)
	$(CC) -o $@ $(C_CPU_FLAGS) $(LD_FLAGS) $^

project.bin: project.elf
	$(OBJCPY) -O binary $^ $@

project.hex: project.elf
	$(OBJCPY) -O ihex $^ $@

project.S: project.elf
	$(OBJDUMP) -D $^ > $@

clean:
	rm -rf *.o *.elf *.bin *.hex *.map project.S

flash:
	$(JLINK_PATH)/JLinkExe -if swd -device nrf52832_xxaa -speed auto -CommanderScript jlink_exe_commands

gdbserver:
	$(JLINK_PATH)/JLinkGDBServer -if swd -device nrf52832_xxaa -speed auto

gdb:
	$(GDB) --command=gdb_commands
