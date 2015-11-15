project: main.o functions.o
	cc main.o functions.o -o project

main.o : main.c
	cc -c main.c

functions.o : functions.c
	cc -c functions.c
clear :
	rm -rf *.o	
