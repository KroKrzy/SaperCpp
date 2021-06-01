
CC := g++

CFLAGS := `sdl2-config --libs --cflags` -ggdb3 -O0 --std=c++11 -Wall -lSDL2_image -lm

HDRS := Window.h Plansza.h Textures.h

SRCS := main.cpp Window.cpp Plansza.cpp Textures.cpp

OBJS := $(SRCS:.cpp=.o)

EXEC := game

all: $(EXEC)

$(EXEC): $(OBJS) $(HDRS) makefile
	$(CC) -o $@ $(OBJS) $(CFLAGS)

clean:
	rm -f $(EXEC) $(OBJS)

.PHONY: all clean
