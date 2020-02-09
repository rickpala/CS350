OBJS = reality.o reality4.o
CC = gcc
PROGS = reality reality4
FLAGS = -mmacosx-version-min=10.5

all:	$(PROGS)

reality:    reality.o
	$(CC) $(FLAGS) reality.c -o reality
reality4:    reality4.o
	$(CC) $(FLAGS) reality4.c -o reality4
clean:
	rm *.o *~ reality reality4
