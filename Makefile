all: Test

Test:  Test.o String.o
	g++ -g Test.o String.o -o Test

Test.o: Test.cpp String.h
	g++ -g -c -Wall Test.cpp -o Test.o -std=c++11

String.o: String.cpp String.h
	g++ -g -c -Wall String.cpp -o String.o -std=c++11

clean:
	rm -f *.o
	
