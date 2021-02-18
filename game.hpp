#pragma once
#include "board.hpp"
#include "player.hpp"
#include <string>



class Game {
public:
    Game();
    void init(Player &player);
    void printBoard();
    void update(bool &gameOver, char** _board3,char** _board5, Player &player);
    void checkWin(char** _board3, char** _board5, Player &player, bool &endgame);
    //int getNumberOfPlayers(){ return _numberOfPlayers;}


//private:
    int _numberOfPlayers;
    int _boardSize;

    static const int rows3 = 3, cols3 = 3, rows5 = 5, cols5 = 5;
    char _board3[rows3][cols3];
    char _board5[rows5][cols5];



};