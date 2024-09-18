# Makefile

CC = gcc
CFLAGS = -Wall -g
TARGET = stackmain
OBJ_ARRAY = arrstack.o
OBJ_LL = llstack.o

all: array ll

array: $(OBJ_ARRAY) stackmain.c
	$(CC) $(CFLAGS) -o $(TARGET) stackmain.c $(OBJ_ARRAY)

ll: $(OBJ_LL) stackmain.c
	$(CC) $(CFLAGS) -o $(TARGET) stackmain.c $(OBJ_LL)

arrstack.o: arrstack.c stack.h
	$(CC) $(CFLAGS) -c arrstack.c

llstack.o: llstack.c stack.h
	$(CC) $(CFLAGS) -c llstack.c

clean:
	rm -f $(TARGET) *.o
