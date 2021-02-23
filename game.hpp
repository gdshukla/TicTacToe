#pragma once
#include <array>
/* #include "player.hpp"
#include "board.hpp" */



class Game : public Player{ 
public:
    Game();
    ~Game();
    void init(char &_board3, char &_board5, Player &player, Board &board);
    void printBoard(Board);
    void update(bool &gameOver,  char &_board3,  char &_board5, Player &player, Game &game);
    void checkWin(std::array< std::array<char, 3>, 3> _board3,  std::array< std::array<char, 5>, 5> _board5, Player player, Board board, bool &endgame);
    //int getNumberOfPlayers(){ return _numberOfPlayers;}


//private:
    int _numberOfPlayers;
 
};