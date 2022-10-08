C_FLAG=-g

build:main.o stack.o bst.o
	$(CC) main.o stack.o bst.o -o bst $(C_FLAG)

main.o:main.c
	$(CC) -c main.c $(C_FLAG)

bst.o:bst.c bst.h
	$(CC) -c bst.c $(C_FLAG)

stack.o:stack.c stack.h
	$(CC) -c stack.c $(C_FLAG)

clean:
	rm bst main.o bst.o stack.o

.PHONY: build clean
