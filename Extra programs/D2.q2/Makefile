main :main.o sum.o
	gcc -o main main.o sum.o
main.o:main.c
	gcc -c -o main.o main.c
sum.o:sum.c
	gcc -c -o sum.o sum.c
clean:
	rm -rf *.o main
