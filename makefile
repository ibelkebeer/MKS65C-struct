all: tester.o ramen.o
	gcc tester.o

run: a.out
	./a.out

ramen.o: ramen.c
	gcc -c ramen.c

tester.o: tester.c
	gcc -c tester.c
