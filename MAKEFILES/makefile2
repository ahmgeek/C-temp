CC=gcc
CFLAGS=-I.
#DEPS = hellomake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

platinum: platinum.o 
	gcc -o platinum platinum.o -I.