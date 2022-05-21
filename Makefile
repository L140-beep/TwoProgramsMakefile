CC=g++
CFLAGS=-c -Wall -std=c++2a



all: get_data.o main.o
	$(CC) get_data.o -o get_data.exe
	$(CC) main.o -o main.exe

get_data.o: get_data.cpp
	$(CC) $(CFLAGS) get_data.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	del *.out *.o *.h.gch *.txt

run: all
	./get_data.exe 10 'data.dat'
	./main.exe < data.dat