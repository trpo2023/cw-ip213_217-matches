all: main

main: main.o game.o
	gcc -Wall -o main.o game.o

main.o: main.c
	gcc -Wall -c main.c

game.o: game.c
	gcc -Wall -c game.c

clean:
	rm main *.o

.PHONY all clean