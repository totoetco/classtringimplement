all: Test

main:  Test.o String.o
	g++ -g main.o String.o -o main

main.o: Test.cpp String.h
	g++ -g -c -Wall main.cpp -o main.o -std=c++11

String.o: String.cpp String.h
	g++ -g -c -Wall String.cpp -o String.o -std=c++11

clean:
	rm -f *.o
