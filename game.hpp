#pragma once
#include <array>
#include "player.hpp"
#include "board.hpp"



class Game { 
public:
    Game();
    ~Game();
    void run(bool& gO);
    void updateGame(bool& gO, Board* Board, Player* Players);


<<<<<<< HEAD>>>>>>> 406760ab35b19e7f4ccb1a954f8a3647854324f5

 
};