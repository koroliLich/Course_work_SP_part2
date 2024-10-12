CC = g++
CFLAGS = -c -Wall

all: calculator
calculator: main.o calculator.o hello.o
	$(CC) main.o calculator.o hello.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

hello.o: hello.cpp
	$(CC) $(CFLAGS) hello.cpp

calculator.o: calculator.cpp
	$(CC) $(CFLAGS) calculator.cpp

clean:
	rm -rf *.o calculator
