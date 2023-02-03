CC=gcc
FLAGS=-nostdlib
SRC=src/stdio/stdio.c
OBJ=build/obj/stdio.o

all: $(OBJ)

$(OBJ): $(SRC)
	$(SRC) -o $@ -c $^