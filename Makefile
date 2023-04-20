PROG=program.exe
SOURCES=main.c shapes.c calculator.c game.c
DEPS=shapes.h calculator.h game.h
CC=gcc
CFLAGS=-Wall -Werror
OBJ=shapes.o main.o calculator.o
$(PROG):$(OBJ) 
	$(CC)-o $@ $^ $(CFLAGS)
%.o: %.c $(DEPS)
	$(CC) -c -o $@
.PHONY: clean