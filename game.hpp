#pragma once
#include "board.hpp"
//#include "player.hpp"
#include <string>



class Game {
public:
    Game();
    void init();
    void printBoard();
    void update(bool &gameOver);
    void checkWin(char _board3[board3Y][board3X], char _board5[board5Y][board5X]);
    //int getNumberOfPlayers(){ return _numberOfPlayers;}


//private:
    int _numberOfPlayers;
    int _boardSize;





};