main : main.o Client.o 
	g++ main.o Client.o -o main

main.o : main.cpp Client.h
	g++ -Wall -c main.cpp

Client.o : Client.cpp Client.h
	g++ -Wall -c Client.cpp

clean	: 
	rm -f *.o *~ Client