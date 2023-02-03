OBJ=build/obj/stdio.o
BUILD=build/liblc.so
CC=gcc
FLAGS=-nostdlib

all: $(BUILD) $(OBJ)

$(BUILD): $(OBJ)
	$(CC) -o $@ -flags $^