$(CC) = gcc
explode: main.o lab1.o
	$(CC) main.o lab1.o -o explode
main.o: main.c lab1.h
		$(CC) -c main.c
lab1.o: lab1.c lab1.h 
		$(CC) -c lab1.c
clean:
	rm -f *.o explode		
