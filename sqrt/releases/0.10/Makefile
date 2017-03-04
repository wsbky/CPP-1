sqrt: main.o sqrt.o
	g++ -o sqrt main.o sqrt.o

main.o: main.cpp
	g++ -Wall -O2 -g -c main.cpp

sqrt.o: sqrt.cpp
	g++ -Wall -O2 -c -g sqrt.cpp

run:
	./sqrt

clean:
	rm -f *.o sqrt

all-clean:
	rm -rv ../first
	echo Thank you trying out sqrt
