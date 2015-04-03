# List of available make goals:
#
# all                     Default target, builds the project
# clean                   Clean up the project
# rebuild                 Rebuild the project
#
#
# Copyright (c) 2009 - 2013 Atmel Corporation. All rights reserved.
#
# \asf_license_start
#
# \page License
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. The name of Atmel may not be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# 4. This software may only be redistributed and used in connection with an
#    Atmel microcontroller product.
#
# THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
# WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
# EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
# ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
# STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
# \asf_license_stop
#

# Copyright (c) 2010 Atmel Corporation. All rights reserved.
#
# \asf_license_start
#
# \page License
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. The name of Atmel may not be used to endorse or promote products derived
#    from this software without specific prior written permission.
#
# 4. This software may only be redistributed and used in connection with an
#    Atmel microcontroller product.
#
# THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
# WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
# EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
# ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
# OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
# STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
# \asf_license_stop
#

# Application target name.
PROGRAM = backertrap-ada
TARGET = $(PROGRAM).elf

# Microcontroller: atxmega128a1, atmega128, attiny261, etc.
MCU = atxmega256a3bu
BOARD = XMEGA_A3BU_XPLAINED

# C source files located from the top-level source directory
C_SRC = $(shell find . -name '*.c')

# CPP source files located from the top-level source directory
CPP_SRC = $(shell find . -name '*.cpp')

# Assembler source files located from the top-level source directory
ASM_SRC = $(shell find . -name '*.s')

# Include path located from the top-level source directory
INC_PATH = \
       -I. \
       -isystem ./3rd-party/Atmel \
       -isystem ./3rd-party/Atmel/common/boards \
       -isystem ./3rd-party/Atmel/common/components/display/st7565r \
       -isystem ./3rd-party/Atmel/common/services/calendar \
       -isystem ./3rd-party/Atmel/common/services/clock \
       -isystem ./3rd-party/Atmel/common/services/delay \
       -isystem ./3rd-party/Atmel/common/services/gfx_mono \
       -isystem ./3rd-party/Atmel/common/services/gpio \
       -isystem ./3rd-party/Atmel/common/services/ioport \
       -isystem ./3rd-party/Atmel/common/services/sleepmgr \
       -isystem ./3rd-party/Atmel/common/services/spi \
       -isystem ./3rd-party/Atmel/common/services/usb \
       -isystem ./3rd-party/Atmel/common/services/usb/class/cdc \
       -isystem ./3rd-party/Atmel/common/services/usb/class/cdc/device \
       -isystem ./3rd-party/Atmel/common/services/usb/udc \
       -isystem ./3rd-party/Atmel/common/utils \
       -isystem ./3rd-party/Atmel/xmega/applications/xmega_a3bu_xplained_demo \
       -isystem ./3rd-party/Atmel/xmega/applications/xmega_a3bu_xplained_demo/atxmega256a3bu_xmega_a3bu_xplained \
       -isystem ./3rd-party/Atmel/xmega/applications/xmega_a3bu_xplained_demo/qtouch \
       -isystem ./3rd-party/Atmel/xmega/boards \
       -isystem ./3rd-party/Atmel/xmega/boards/xmega_a3bu_xplained \
       -isystem ./3rd-party/Atmel/xmega/drivers/adc \
       -isystem ./3rd-party/Atmel/xmega/drivers/cpu \
       -isystem ./3rd-party/Atmel/xmega/drivers/nvm \
       -isystem ./3rd-party/Atmel/xmega/drivers/pmic \
       -isystem ./3rd-party/Atmel/xmega/drivers/rtc32 \
       -isystem ./3rd-party/Atmel/xmega/drivers/sleep \
       -isystem ./3rd-party/Atmel/xmega/drivers/tc \
       -isystem ./3rd-party/Atmel/xmega/drivers/usart \
       -isystem ./3rd-party/Atmel/xmega/drivers/usb \
       -isystem ./3rd-party/Atmel/xmega/utils \
       -isystem ./3rd-party/Atmel/xmega/utils/preprocessor \
       -isystem ./3rd-party/Atmel/xmega/applications/xmega_a3bu_xplained_demo/atxmega256a3bu_xmega_a3bu_xplained/gcc

# Library paths from the top-level source directory
LIB_PATH = -L./3rd-party/Atmel/xmega/lib \
           -L./3rd-party/Atmel/xmega/lib/qtouch

# Libraries to link with the project
LIBS = avrxmega6g1-4qt-k-0rs

# Additional options for debugging. By default the common Makefile.in will
# add -gdwarf-2.
DBGFLAGS = 

# Optimization settings
OPTIMIZATION = -Os

# Extra flags used when creating an EEPROM Intel HEX file. By default the
# common Makefile.in will add -j .eeprom
# --set-section-flags=.eeprom="alloc,load" --change-section-lma .eeprom=0.
EEPROMFLAGS = 

# Extra flags used when creating an Intel HEX file. By default the common
# Makefile.in will add -R .eeprom -R .usb_descriptor_table.
FLASHFLAGS = 

# Extra flags to use when archiving.
ARCHIVE_FLAGS = 

# Extra flags to use when assembling.
ASM_FLAGS = 

# Extra flags to use when compiling.
CFLAGS = 

# Extra flags to use when preprocessing.
#
# Preprocessor symbol definitions
#   To add a definition use the format "-D name[=definition]".
#   To cancel a definition use the format "-U name".
#
# The most relevant symbols to define for the preprocessor are:
#   BOARD      Target board in use, see boards/board.h for a list.
#   EXT_BOARD  Optional extension board in use, see boards/board.h for a list.
CPPFLAGS = \
       -D BOARD=$(BOARD) \
       -D CONFIG_NVM_IGNORE_XMEGA_A3_D3_REVB_ERRATA \
       -D GFX_MONO_C12832_A1Z=1 \
       -D IOPORT_XMEGA_COMPAT \
       -D NUMBER_OF_PORTS=1 \
       -D QTOUCH_STUDIO_MASKS=1 \
       -D QT_DELAY_CYCLES=1 \
       -D QT_NUM_CHANNELS=4 \
       -D SNS=F \
       -D SNSK=F \
       -D _QTOUCH_ \
       -D _SNS1_SNSK1_SAME_PORT_

# Extra flags to use when linking
LDFLAGS =  \
       -Wl,--section-start=.BOOT=0x40000                 

# Pre- and post-build commands
PREBUILD_CMD = 
POSTBUILD_CMD = 

# Output target file
target          := $(TARGET)

# Output project name (target name minus suffix)
project         := $(basename $(target))

# Output target file (typically ELF or static library)
ifeq ($(suffix $(target)),.a)
target_type     := lib
else
ifeq ($(suffix $(target)),.elf)
target_type     := elf
else
$(error "Target type $(target_type) is not supported")
endif
endif

# Allow override of operating system detection. The user can add OS=Linux or
# OS=Windows on the command line to explicit set the host OS.
#
# This allows to work around broken uname utility on certain systems.
ifdef OS
  ifeq ($(strip $(OS)), Linux)
    os_type     := Linux
  endif
  ifeq ($(strip $(OS)), Windows)
    os_type     := windows32_64
  endif
endif

os_type         ?= $(strip $(shell uname))

ifeq ($(os_type),windows32)
os              := Windows
else
ifeq ($(os_type),windows64)
os              := Windows
else
ifeq ($(os_type),windows32_64)
os              ?= Windows
else
ifeq ($(os_type),)
os              := Windows
else
# Default to Linux style operating system. Both Cygwin and mingw are fully
# compatible (for this Makefile) with Linux.
os              := Linux
endif
endif
endif
endif

CROSS           ?= avr-
AR              := $(CROSS)ar
AS              := $(CROSS)as
CC              := $(CROSS)gcc
CPP             := $(CROSS)gcc -E
CXX             := $(CROSS)g++
LD              := $(CROSS)g++
NM              := $(CROSS)nm
OBJCOPY         := $(CROSS)objcopy
OBJDUMP         := $(CROSS)objdump
SIZE            := $(CROSS)size

# On Windows, we need to override the shell to force the use of cmd.exe
ifeq ($(os),Windows)
SHELL           := cmd
endif

# Strings for beautifying output
MSG_MKDIR               = "MKDIR   $(dir $@)"

MSG_INFO                = "INFO    "
MSG_PREBUILD            = "PREBUILD  $(PREBUILD_CMD)"
MSG_POSTBUILD           = "POSTBUILD $(POSTBUILD_CMD)"

MSG_ARCHIVING           = "AR      $@"
MSG_ASSEMBLING          = "AS      $@"
MSG_BINARY_IMAGE        = "OBJCOPY $@"
MSG_COMPILING           = "CC      $@"
MSG_COMPILING_CXX       = "CXX     $@"
MSG_EEPROM_IMAGE        = "OBJCOPY $@"
MSG_EXTENDED_LISTING    = "OBJDUMP $@"
MSG_IHEX_IMAGE          = "OBJCOPY $@"
MSG_LINKING             = "LN      $@"
MSG_PREPROCESSING       = "CPP     $@"
MSG_SIZE                = "SIZE    $@"
MSG_SYMBOL_TABLE        = "NM      $@"

# Don't use make's built-in rules and variables
MAKEFLAGS       += -rR

# Don't print 'Entering directory ...'
MAKEFLAGS       += --no-print-directory

# Hide command output by default, but allow the user to override this
# by adding V=1 on the command line.
#
# This is inspired by the Kbuild system used by the Linux kernel.
ifdef V
  ifeq ("$(origin V)", "command line")
    VERBOSE = $(V)
  endif
endif
ifndef VERBOSE
  VERBOSE = 0
endif

ifeq ($(VERBOSE), 1)
  Q =
else
  Q = @
endif

archive-flags-gnu-y     := $(ARCHIVE_FLAGS)
asm-flags-gnu-y         := $(ASM_FLAGS)
cflags-gnu-y            := $(CFLAGS)
cxxflags-gnu-y          := $(CXXFLAGS)
cppflags-gnu-y          := $(CPPFLAGS)
cpuflags-gnu-y          :=
dbgflags-gnu-y          := $(DBGFLAGS)
libflags-gnu-y          := $(foreach LIB,$(LIBS),-l$(LIB))
ldflags-gnu-y           := $(LDFLAGS)
flashflags-gnu-y        := $(FLASHFLAGS)
eepromflags-gnu-y       := $(EEPROMFLAGS)

# Use pipes instead of temporary files for communication between processes
cflags-gnu-y    += -pipe
asm-flags-gnu-y += -pipe
ldflags-gnu-y   += -pipe

# Archiver flags.
archive-flags-gnu-y += rcs

# Always enable warnings. And be very careful about implicit
# declarations.
cflags-gnu-y    += -Wall -Wstrict-prototypes -Wmissing-prototypes
cflags-gnu-y    += -Werror-implicit-function-declaration
cxxflags-gnu-y  += -Wall
# IAR doesn't allow arithmetic on void pointers, so warn about that.
cflags-gnu-y    += -Wpointer-arith
cxxflags-gnu-y  += -Wpointer-arith

# Preprocessor flags.
cppflags-gnu-y  += $(INC_PATH)

# CPU specific flags.
cpuflags-gnu-y  += -mmcu=$(MCU)

# Dependency file flags.
depflags        = -MD -MP -MQ $@

# Debug specific flags.
ifdef BUILD_DEBUG_LEVEL
dbgflags-gnu-y  += -g$(BUILD_DEBUG_LEVEL)
else
dbgflags-gnu-y  += -gdwarf-2
endif

# Optimization specific flags.
ifdef BUILD_OPTIMIZATION
optflags-gnu-y  = -O$(BUILD_OPTIMIZATION)
else
optflags-gnu-y  = $(OPTIMIZATION)
endif

# Relax compilation and linking.
cflags-gnu-y    += -mrelax
cxxflags-gnu-y  += -mrelax
asm-flags-gnu-y += -mrelax
ldflags-gnu-y   += -Wl,--relax

# Always preprocess assembler files.
asm-flags-gnu-y += -x assembler-with-cpp
# Compile C files using the GNU99 standard.
cflags-gnu-y    += -std=gnu99
# Compile C++ files using the GNU++98 standard.
cxxflags-gnu-y  += -std=gnu++98

# Use unsigned character type when compiling.
cflags-gnu-y    += -funsigned-char
cxxflags-gnu-y  += -funsigned-char

# Don't use strict aliasing (very common in embedded applications).
cflags-gnu-y    += -fno-strict-aliasing
cxxflags-gnu-y  += -fno-strict-aliasing

# Separate each function and data into its own separate section to allow
# garbage collection of unused sections.
cflags-gnu-y    += -ffunction-sections -fdata-sections
cxxflags-gnu-y  += -ffunction-sections -fdata-sections

# Garbage collect unreferred sections when linking.
ldflags-gnu-y   += -Wl,--gc-sections

# Output a link map file and a cross reference table
ldflags-gnu-y   += -Wl,-Map=$(project).map,--cref

# Add library search paths relative to the top level directory.
ldflags-gnu-y   += $(LIB_PATH)

a_flags  = $(cpuflags-gnu-y) $(depflags) $(cppflags-gnu-y) $(asm-flags-gnu-y) -D__ASSEMBLY__
c_flags  = $(cpuflags-gnu-y) $(dbgflags-gnu-y) $(depflags) $(optflags-gnu-y) $(cppflags-gnu-y) $(cflags-gnu-y)
cxx_flags= $(cpuflags-gnu-y) $(dbgflags-gnu-y) $(depflags) $(optflags-gnu-y) $(cppflags-gnu-y) $(cxxflags-gnu-y)
l_flags  = $(cpuflags-gnu-y) $(optflags-gnu-y) $(ldflags-gnu-y)
ar_flags = $(archive-flags-gnu-y)

# Intel Hex file production flags
flashflags-gnu-y        += -R .eeprom -R .usb_descriptor_table

# Eeprom file production flags
eepromflags-gnu-y       += -j .eeprom
eepromflags-gnu-y       += --set-section-flags=.eeprom="alloc,load"
eepromflags-gnu-y       += --change-section-lma .eeprom=0

# Source files list and part informations must already be included before
# running this makefile

# If a custom build directory is specified, use it -- force trailing / in directory name.
ifdef BUILD_DIR
	build-dir       := $(dir $(BUILD_DIR))$(if $(notdir $(BUILD_DIR)),$(notdir $(BUILD_DIR))/)
else
	build-dir        =
endif

# Create object files list from source files list.
obj-y                   := $(addprefix $(build-dir), $(addsuffix .o,$(basename $(C_SRC) $(CPP_SRC) $(ASM_SRC))))

# Create dependency files list from source files list.
dep-files               := $(wildcard $(foreach f,$(obj-y),$(basename $(f)).d))

# Default target.
.PHONY: all
ifeq ($(target_type),lib)
all: $(target) $(project).lss $(project).sym
else
ifeq ($(target_type),elf)
all: prebuild $(target) $(project).lss $(project).sym $(project).hex $(project).bin postbuild
endif
endif

prebuild:
ifneq ($(strip $(PREBUILD_CMD)),)
	@echo $(MSG_PREBUILD)
	$(Q)$(PREBUILD_CMD)
endif

postbuild:
ifneq ($(strip $(POSTBUILD_CMD)),)
	@echo $(MSG_POSTBUILD)
	$(Q)$(POSTBUILD_CMD)
endif

# Clean up the project.
.PHONY: clean
clean:
	find . -name '*~' -delete
	-rm -f $(obj-y) $(dep-files) $(TARGET) $(PROGRAM).hex $(PROGRAM).eep $(PROGRAM).lss $(PROGRAM).sym $(PROGRAM).map $(PROGRAM).bin

# Rebuild the project.
.PHONY: rebuild
rebuild: clean all

.PHONY: objfiles
objfiles: $(obj-y)

# Create object files from C source files.
$(build-dir)%.o: %.c
	$(Q)test -d $(dir $@) || echo $(MSG_MKDIR)
ifeq ($(os),Windows)
	$(Q)test -d $(patsubst %/,%,$(dir $@)) || mkdir $(subst /,\,$(dir $@))
else
	$(Q)test -d $(dir $@) || mkdir -p $(dir $@)
endif
	@echo $(MSG_COMPILING)
	$(Q)$(CC) $(c_flags) -c $< -o $@

# Create object files from C++ source files.
$(build-dir)%.o: %.cpp
	$(Q)test -d $(dir $@) || echo $(MSG_MKDIR)
ifeq ($(os),Windows)
	$(Q)test -d $(patsubst %/,%,$(dir $@)) || mkdir $(subst /,\,$(dir $@))
else
	$(Q)test -d $(dir $@) || mkdir -p $(dir $@)
endif
	@echo $(MSG_COMPILING_CXX)
	$(Q)$(CXX) $(cxx_flags) -c $< -o $@

# Preprocess and assemble: create object files from assembler source files.
$(build-dir)%.o: %.s
	$(Q)test -d $(dir $@) || echo $(MSG_MKDIR)
ifeq ($(os),Windows)
	$(Q)test -d $(patsubst %/,%,$(dir $@)) || mkdir $(subst /,\,$(dir $@))
else
	$(Q)test -d $(dir $@) || mkdir -p $(dir $@)
endif
	@echo $(MSG_ASSEMBLING)
	$(Q)$(CC) $(a_flags) -c $< -o $@

# Preprocess and assemble: create object files from assembler source files.
$(build-dir)%.o: %.S
	$(Q)test -d $(dir $@) || echo $(MSG_MKDIR)
ifeq ($(os),Windows)
	$(Q)test -d $(patsubst %/,%,$(dir $@)) || mkdir $(subst /,\,$(dir $@))
else
	$(Q)test -d $(dir $@) || mkdir -p $(dir $@)
endif
	@echo $(MSG_ASSEMBLING)
	$(Q)$(CC) $(a_flags) -c $< -o $@

# Include all dependency files to add depedency to all header files in use.
include $(dep-files)

ifeq ($(target_type),lib)
# Archive object files into an archive
$(target): $(obj-y)
	@echo $(MSG_ARCHIVING)
	$(Q)$(AR) $(ar_flags) $@ $(obj-y)
	@echo $(MSG_SIZE)
	$(Q)$(SIZE) -Bxt $@
else
ifeq ($(target_type),elf)
# Link the object files into an ELF file.
$(target): $(obj-y)
	@echo $(MSG_LINKING)
	$(Q)$(LD) $(l_flags) $(obj-y) $(libflags-gnu-y) -o $@
	@echo $(MSG_SIZE)
	$(Q)$(SIZE) -Ax $@
	$(Q)$(SIZE) -Bx $@
endif
endif

# Create extended function listing from target output file.
%.lss: $(target)
	@echo $(MSG_EXTENDED_LISTING)
	$(Q)$(OBJDUMP) -h -S $< > $@

# Create symbol table from target output file.
%.sym: $(target)
	@echo $(MSG_SYMBOL_TABLE)
	$(Q)$(NM) -n $< > $@

# Create Intel HEX image from ELF output file.
%.hex: $(target)
	@echo $(MSG_IHEX_IMAGE)
	$(Q)$(OBJCOPY) -O ihex $(flashflags-gnu-y)  $< $@

# Create EEPROM Intel HEX image from ELF output file.
%.eep: $(target)
	@echo $(MSG_EEPROM_IMAGE)
	$(Q)$(OBJCOPY) $(eepromflags-gnu-y) -O ihex $< $@  || exit 0

# Create binary image from ELF output file.
%.bin: $(target)
	@echo $(MSG_BINARY_IMAGE)
	$(Q)$(OBJCOPY) -O binary $< $@

# Provide information about the detected host operating system.
.SECONDARY: info-os
info-os:
	@echo $(MSG_INFO)$(os) build host detected
