TARGET	:= main
WARN	:= -W -Wall -Wstrict-prototypes -Wmissing-prototypes
INCLUDE := -isystem /lib/modules/`uname -r`/build/include
CFLAGS	:= -O2 -DMODULE -D___KERNEL___ ${WARN} ${INCLUDE}
CC	:= gcc
clean:
	rm -rf ${TARGET}.o
