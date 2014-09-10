CC=gcc
CFLAGS=-I
# for icluding header files 
#DEPS = blahblah.h
OBJ = hello.o
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


hellomake: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
