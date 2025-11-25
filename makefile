CC = gcc

all: taskmanager

taskmanager: main.o task.o
	$(CC) -o taskmanager main.o task.o

main.o: main.c
	$(CC) -c main.c

task.o: task.c
	$(CC) -c task.c

clean:
	rm -f *.o taskmanager
