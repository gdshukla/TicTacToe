#pragma once
#include <array>
//#include "player.hpp"
//#include "board.hpp"



class Game { 
public:
    Game();
    ~Game();
    void init(char &_board3, char &_board5);
    void printBoard();
    void update(bool &gameOver,  char &_board3,  char &_board5, Player &player, Game &game);
    void checkWin(char &_board3,  char &_board5, Player &, bool &);
    //int getNumberOfPlayers(){ return _numberOfPlayers;}


//private:
    int _numberOfPlayers;
 
} game;