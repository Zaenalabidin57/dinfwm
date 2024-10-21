CFLAGS += -std=c99 -Wall -Wextra -pedantic -Wold-style-declaration
CFLAGS += -Wmissing-prototypes -Wno-unused-parameter
CFLAGS += $(shell pkg-config --cflags freetype2 xft x11)
LIBS = $(shell pkg-config --libs x11 xft freetype2)
LIBS += -lm -pthread
PREFIX ?= /usr
BINDIR ?= $(PREFIX)/bin
CC     ?= gcc

all: dfwm

dfwm: dfwm.c dfwm.h config.h Makefile
	$(CC) -O3 $(CFLAGS) -o $@ $< $(LIBS)

install: all
	install -Dm755 dfwm $(DESTDIR)$(BINDIR)/dfwm

uninstall:
	rm -f $(DESTDIR)$(BINDIR)/dfwm

clean:
	rm -f dfwm *.o

.PHONY: all install uninstall clean
