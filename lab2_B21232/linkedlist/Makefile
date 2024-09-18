# Define the compiler
CC = gcc

# Define the flags for the compiler
CFLAGS = -Wall -Wextra -g

# Define the targets and their dependencies
all: listmain

listmain: listmain.o listlib.o
	$(CC) $(CFLAGS) -o listmain listmain.o listlib.o

listmain.o: listmain.c listlib.h
	$(CC) $(CFLAGS) -c listmain.c

listlib.o: listlib.c listlib.h
	$(CC) $(CFLAGS) -c listlib.c

clean:
	rm -f *.o listmain

