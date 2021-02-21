#-*- Makefile -*-

#Target: dependencies
#	action




main:  main.o game.o
	g++ main.o game.o -o main
main.o: main.cpp game.hpp
	g++ -c -g main.cpp 
game.o: game.cpp game.hpp board.hpp player.hpp
	g++ -c -g game.cpp
clean:
	rm -f *.o *.out