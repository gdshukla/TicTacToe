#-*- Makefile -*-

#Target: dependencies
#	action




main:  main.o game.o player.o board.o
	g++ main.o game.o player.o board.o -o main
main.o: main.cpp game.hpp
	g++ -c -g main.cpp 
game.o: game.cpp player.cpp game.hpp
	g++ -c -g game.cpp player.cpp
board.o: board.cpp
	g++ -c -g board.cpp
player.o: player.cpp
	c++ -c -g player.cpp 
clean:
	rm -f *.o *.out