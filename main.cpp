
#include "game.hpp"
#include <iostream>

bool gameOver = false;

int main(){
    Game game;
    while (!gameOver){
        game.run(gameOver);
    }
    return 0;
}