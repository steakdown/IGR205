CC = g++
CFLAGS = -c -std=gnu99 -O2 -Werror -Wall -Wextra
LDLIBS = -lm

SRCS = main.cpp component.cpp model.cpp tinyxml2.cpp vec3f.cpp vec3i.cpp
OBJS = $(subst .cpp,.o,$(SRCS))
EXE = main

.PHONY : all run clean

all: run clean

run: $(EXE)
	./$<

$(EXE): $(OBJS)

clean:
	rm -f $(EXE) $(OBJS)
