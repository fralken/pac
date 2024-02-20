DUKTAPE_SOURCES = duktape/duktape.c

# Compiler options are quite flexible.  GCC versions have a significant impact
# on the size of -Os code, e.g. gcc-4.6 is much worse than gcc-4.5.

CC ?= gcc
CC := $(CC)
CCOPTS = -Os -pedantic -std=c99 -Wall -Wno-overlength-strings -Wno-unused-but-set-variable -fstrict-aliasing -fomit-frame-pointer
CCLIBS = -lm
DEFINES =

# If you want a 32-bit build on a 64-bit host
#CCOPTS += -m32

# For debugging, use -O0 -g -ggdb, and don't add -fomit-frame-pointer

pac: $(DUKTAPE_SOURCES) main.c pac.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o $@ $(DEFINES) $(CCOPTS) $(DUKTAPE_SOURCES) main.c pac.c $(CCLIBS)
