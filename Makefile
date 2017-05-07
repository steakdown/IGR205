CC = g++
CFLAGS = -c -std=gnu99 -O2 -Werror -Wall -Wextra
LDLIBS = -lm -L/media/blacksocks/Data/blacksocks/Documents/TPT/IGR/IGR205/GLK/libMathGeoLib.a

SRCS = main.cpp adjacent.cpp component.cpp model.cpp tinyxml2.cpp vec3f.cpp vec3i.cpp
OBJS = $(subst .cpp,.o,$(SRCS))
EXE = main

.PHONY : all run clean

all: run clean

run: $(EXE)
	./$<

$(EXE): $(OBJS)

clean:
	rm -f $(EXE) $(OBJS)
