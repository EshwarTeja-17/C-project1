a.out:main.o push.o pop.o precedence.o associvity.o
	gcc main.o push.o pop.o precedence.o associvity.o
main.o:main.c
	gcc -c main.c
push.o:push.c
	gcc -c push.c
pop.o:pop.c
	gcc -c pop.c
precedence.o:precedence.c
	gcc -c precedence.c
associvity.o:associvity.c
	gcc -c associvity.c	
