#pragma once
#include "board.hpp"
#include "player.hpp"
#include <string>
#include <array>


class Game { 
public:
    Game();
    ~Game();
    void init(Player& player, std::array< std::array<char, Rows3>, Cols3> , std::array< std::array<char, Rows5>, Cols5>);
    void printBoard();
    void update(bool &, std::array< std::array<char, Rows3>, Cols3> , std::array< std::array<char, Rows5>, Cols5> , Player &);
    void checkWin(std::array< std::array<char, Rows3>, Rows3>, std::array< std::array<char, Rows5>, Rows5>, Player &, bool &);
    //int getNumberOfPlayers(){ return _numberOfPlayers;}


//private:
    int _numberOfPlayers;
    int _boardSize;
    std::array<std::array<char, Rows3>, Cols3 > _board3;
    std::array<std::array<char, Rows5>, Cols5 > _board5;





};