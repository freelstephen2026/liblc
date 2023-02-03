CC=gcc
INCLUDE=-Iinclude
FLAGS=-nostdlib $(INCLUDE)
SRC=src/stdio/stdio.c
OBJ=build/obj/stdio.o

all: $(OBJ)

$(OBJ): $(SRC)
	$(SRC) -o $@ $(FLAGS) -c $^