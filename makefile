#-*- Makefile -*-

#Target: dependencies
#	action




main:  game.o main.o
	g++ game.o main.o -o main
main.o: main.cpp 
	g++ -c -g main.cpp 
game.o: game.cpp game.hpp board.hpp player.hpp
	g++ -c -g game.cpp
clean:
	rm -f *.o *.out