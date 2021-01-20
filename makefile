main: main.o game.o
	g++ main.o game.o -o main
main.o: main.cpp
	g++ -c -g main.cpp
game.o: game.cpp
	g++ -c -g game.cpp
clean:
	rm *.o *.out