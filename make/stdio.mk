CC=gcc
INCLUDE=-Iinclude
FLAGS=-nostdlib $(INCLUDE)
SRC=src/stdio/stdio.c
OBJ=build/obj/stdio.o

all: $(OBJ) $(SRC)

$(OBJ): $(SRC)
	$(CC) -o $@ $(FLAGS) -c $^