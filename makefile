#-*- Makefile -*-

#Target: dependencies
#	action




main:  main.o game.o player.o board.o
	g++ -std=c++11 main.o game.o player.o board.o -o main
main.o: main.cpp
	g++ -std=c++11 -c -g main.cpp 
game.o: game.cpp game.hpp
	g++ -std=c++11 -c -g game.cpp 
board.o: board.cpp board.hpp
	g++ -std=c++11 -c -g board.cpp
player.o: player.cpp player.hpp board.hpp
	g++ -std=c++11 -c -g player.cpp 
clean:
	rm -f *.o *.out main