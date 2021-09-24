all: main.c euler.c
	gcc -o euler main.c euler.c

main.o: euler.c euler.h
	gcc -c main.c

euler.o: euler.c
	gcc -c euler.c