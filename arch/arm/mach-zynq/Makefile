#
# (C) Copyright 2000-2003
# Wolfgang Denk, DENX Software Engineering, wd@denx.de.
#
# (C) Copyright 2008
# Guennadi Liakhovetki, DENX Software Engineering, <lg@denx.de>
#
# SPDX-License-Identifier:	GPL-2.0+
#

obj-y	:= timer.o
obj-y	+= cpu.o
obj-y	+= ddrc.o
obj-y	+= slcr.o
obj-y	+= clk.o
obj-y	+= lowlevel_init.o
AFLAGS_lowlevel_init.o := -mfpu=neon
obj-$(CONFIG_SPL_BUILD)	+= spl.o
obj-y	+= dyn_test.o
CFLAGS_dyn_test.o := -O0
