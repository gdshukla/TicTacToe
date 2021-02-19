#pragma once
#include "board.hpp"
#include "player.hpp"
#include <string>
#include <array>


class Game { 
public:
    Game();
    void init(Player &player);
    void printBoard();
    void update(bool &gameOver, char** _board3,char** _board5, Player &player);
    void checkWin(char* _board3[], char* _board5[], Player &player, bool &endgame);
    //int getNumberOfPlayers(){ return _numberOfPlayers;}


//private:
    int _numberOfPlayers;
    int _boardSize;

    std::array<std::array<char, 3>, 3 > _board3 = {" ", " ", " "}, {" ", " ", " "}, {" ", " ", " "};
    std::array<std::array<char, 5>, 5 > _board5 = {" ", " ", " ", " ", " "}, {" ", " ", " ", " ", " "}, {" ", " ", " ", " ", " "}, {" ", " ", " ", " ", " "}, {" ", " ", " ", " ", " "};




};