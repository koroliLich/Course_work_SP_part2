CC = g++
CFLAGS = -c -Wall

all: calculator
calculator: main.o calculator.o
	$(CC) $(CFLAGS) main.cpp

calculator.0: calculator.cpp
	$(CC) $(CFLAGS) calculator.cpp

clean:
	rm -rf *.o calculator
