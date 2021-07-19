main : main.o add.o
		gcc -o main main.o add.o
		gcc -o libarith.so -fPIC -shared add.o
main.o : main.c
		gcc -c -o main.o main.c 
add.o: add.c
		gcc -c -o add.o add.c
clean: 
		rm -f *.o main
