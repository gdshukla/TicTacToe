
#include "game.hpp"
//#include "board.hpp"
//#include "player.hpp"

#include <iostream>
//#include <array>
//#include <string>



 



bool gameOver = false;

int main(){
    Game game;
    while (!gameOver){
        game.run(gameOver);
    }
    return 0;
}