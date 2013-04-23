CFLAGS := -Os -Wall -g3 -I.
CXXFLAGS := $(CFLAGS)

PROGRAMS := $(basename $(wildcard test/*.c test/*.cc))

.PHONY: all clean
all: $(PROGRAMS)
clean:
	rm -f $(PROGRAMS)
