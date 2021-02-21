#pragma once
//#include "board.hpp"
#include "player.hpp"
#include <string>
#include <array>

int _boardSize;const unsigned int Cols3 = 3;  const unsigned int Rows3 = 3;  const unsigned int Cols5 = 5;  const unsigned int Rows5 = 5;

class Game { 
public:
    Game();
    ~Game();
    void init(Player& player,  std::array<  std::array<char, Rows3>, Cols3> _board3,  std::array<  std::array<char, Rows5>, Cols5> _board5);
    void printBoard();
    void update(bool &gameOver,  std::array<  std::array<char, Rows3>, Cols3> _board3,  std::array<  std::array<char, Rows5>, Cols5> _board5, Player &player);
    void checkWin(std::array< std::array<char, Rows3>, Rows3>, std::array< std::array<char, Rows5>, Rows5>, Player &, bool &);
    //int getNumberOfPlayers(){ return _numberOfPlayers;}


//private:
    int _numberOfPlayers;

    std::array< std::array<char, Rows3>, Cols3> _board3;
    std::array< std::array<char, Rows5>, Cols5> _board5;





};