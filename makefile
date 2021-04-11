#-*- Makefile -*-

#Target: dependencies
#	action




main:  main.o game.o player.o board.o
	g++ -w -std=c++14 main.o game.o player.o board.o -o main
main.o: main.cpp
	g++ -std=c++14 -c -w -g main.cpp 
game.o: game.cpp game.hpp
	g++ -std=c++14 -c -w -g game.cpp 
board.o: board.cpp board.hpp
	g++ -std=c++14 -c -w -g board.cpp
player.o: player.cpp player.hpp
	g++ -std=c++14 -c -w -g player.cpp 
clean:
	rm -f *.o *.out main