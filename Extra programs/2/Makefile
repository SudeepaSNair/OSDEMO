main: main.o strcmp.o strcat.o strcpy.o
		gcc -o main main.o strcmp.o strcat.o strcpy.o
main.o :main.c
		gcc -c -o main.o main.c
strcmp.o:strcmp.c
		gcc -c -o strcmp.o strcmp.c
strcat.o:strcat.c
		gcc -c -o strcat.o strcat.c
strcpy.o:strcpy.c
		gcc -c -o strcpy.o strcpy.c
clean:
		rm -rf *.o main
