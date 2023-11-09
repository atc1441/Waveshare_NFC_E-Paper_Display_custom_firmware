# Minimal C startup code for Cortex 
Minimal "*framework*" providing startup code and Makefile for building bare-metal C programs for Cortex-M4.

# Target hardware
By default framework is configured for ARM Cortex-M4F and tested on Nordic NRF52 Development Kit. However it shouldn't be a problem tune it for other Cortex-M*x* MCU or development board.

# Required software
This "*framework*" requires following components:
- ARM GCC compiler (install `arm-none-eabi-gcc`)
- SEGER J-Link tools (https://www.segger.com/downloads/jlink)
- ARM GDB (install `arm-none-eabi-gdb`)

# Configuration
You have to set to rename Makefile.in to Makefile and set two paths in it: `TOOLCHAIN_PATH` and `JLINK_PATH`.

# Usage
Command "make" is all you need, you can do everything with it.

`make` - build project (in ELF, BIN and IHEX formats)

`make flash` - flash device

`make gdbserver` - starts J-Link GDB server

`make gdb` - starts ARM GDB that automatically connects to GDB Server
