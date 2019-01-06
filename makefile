doll:	doll.o
	gcc -g -ansi -Wall doll.o -o doll
doll.o:	doll.c
	gcc -c -ansi -Wall doll.c -o doll.o
