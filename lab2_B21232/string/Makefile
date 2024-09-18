
CC = gcc
OBJECTS1 = mylib1.o strmain.o
OBJECTS2 = mylib2.o strmain.o
OPTS = -Wall
# Use this if you want to include debug info
#OPTS = -Wall -g

lib1: strmain1

lib2: strmain2

strmain1: $(OBJECTS1)
	$(CC) $(OBJECTS1) -o strmain

strmain2: $(OBJECTS2)
	$(CC) $(OBJECTS2) -o strmain

%.o: %.c
	$(CC) -c $(OPTS) $<

clean:
	rm -f *.o strmain



