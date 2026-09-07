programa: main.o punto.o
	g++ -std=c++17 -Wall -Wextra -g main.o punto.o -o programa

main.o: main.cpp punto.h
	g++ -std=c++17 -Wall -Wextra -g -c main.cpp

punto.o: punto.cpp punto.h
	g++ -std=c++17 -Wall -Wextra -g -c punto.cpp

clean:
	rm -f *.o programa