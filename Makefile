TARGET	:= main
WARN	:= -W -Wall -Wstrict-prototypes -Wmissing-prototypes
INCLUDE := -isystem /lib/modules/`uname -r`/build/include
CFLAGS	:= -O2 -DMODULE -D__KERNEL__ ${WARN} ${INCLUDE}
#CC	:= gcc-3.0 Deprecated because old gcc, use system default
CC	:= gcc

#${TARGET}.o: main.c

#.PHONY: clean

rlean:
	rm -rf ${TARGET}.o
