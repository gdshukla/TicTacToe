#-*- Makefile -*-

#Target: dependencies
#	action




main:  main.o game.o player.o board.o
	g++ main.o game.o player.o board.o -o main
main.o: main.cpp
	g++ -c -g main.cpp 
game.o: game.cpp game.hpp
	g++ -c -g game.cpp 
board.o: board.cpp board.hpp
	g++ -c -g board.cpp
player.o: player.cpp player.hpp board.hpp
	g++ -c -g player.cpp 
clean:
	rm -f *.o *.out main