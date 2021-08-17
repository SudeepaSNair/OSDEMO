result : main.o ascending.o descending.o
		gcc -o result main.o ascending.o descending.o
main.o :main.c
		gcc -c -o main.o main.c
ascending.o:ascending.c
		gcc -c -o ascending.o ascending.c
descending.o:descending.c
		gcc -c -o descending.o descending.c
clean:
		rm -rf *.o result
