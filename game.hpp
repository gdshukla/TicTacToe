#pragma once
#include <array>
//#include "player.hpp"
#include "board.hpp"



class Game { 
public:
    Game();
    ~Game();
    void init(std::array<  std::array<char, Rows3>, Cols3> board->_board3,  std::array<  std::array<char, Rows5>, Cols5> _board5);
    void printBoard();
    void update(bool &gameOver,  std::array<  std::array<char, Rows3>, Cols3> _board3,  std::array<  std::array<char, Rows5>, Cols5> _board5, Player &player, Game &game);
    void checkWin(std::array< std::array<char, Rows3>, Rows3>, std::array< std::array<char, Rows5>, Rows5>, Player &, bool &);
    //int getNumberOfPlayers(){ return _numberOfPlayers;}


//private:
    int _numberOfPlayers;
 
} game;