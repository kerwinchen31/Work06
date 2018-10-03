all: func.o main.o
	gcc func.o main.o

func.o: func.c func.h
	gcc -c func.c

main.o: main.c func.h
	gcc -c main.c

clean:
	rm *.o

run:
	./a.out
