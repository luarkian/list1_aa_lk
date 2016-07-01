main:	main.o	ordenacao.o
	gcc main.o ordenacao.o -o main

main.o: main.c
	gcc -c main.c

ordenacao.o:	ordenacao.c	ordenacao.h
	gcc -c ordenacao.c

clean:
	rm *.o
