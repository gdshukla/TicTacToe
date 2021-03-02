#pragma once
#include <array>
#include "player.hpp"
//#include "board.hpp"



class Game : public Player { 
public:
    Game();
    ~Game();
    void run();


/*     void init(std::array< std::array<char, Rows3>, Cols3> _board3,  std::array< std::array<char, Rows5>, Cols5> _board5, Player &player, Board &board);
    void printBoard(std::array< std::array<char, Rows3>, Cols3> _board3,  std::array< std::array<char, Rows5>, Cols5> _board5, int &_boardSize);
    void update(bool &gameOver,  std::array< std::array<char, Rows3>, Cols3> &_board3,  std::array< std::array<char, Rows5>, Cols5> &_board5, Player &player, Game &game, Board &board);
    void checkWin(std::array< std::array<char, Rows3>, Cols3> _board3,  std::array< std::array<char, Rows5>, Cols5> _board5, Player player, Board board, bool &endgame); */
    //int getNumberOfPlayers(){ return _numberOfPlayers;}



    //int _numberOfPlayers;
 
};