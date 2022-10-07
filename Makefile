C_FLAG=-g

build:main.o bst.o
	$(CC) main.o bst.o -o bst $(C_FLAG)

main.o:main.c
	$(CC) -c main.c $(C_FLAG)

bst.o:bst.c bst.h
	$(CC) -c bst.c $(C_FLAG)

clean:
	rm bst main.o bst.o

.PHONY: build clean
