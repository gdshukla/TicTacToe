
#include "game.hpp"
#include <iostream>
#include <string>


 


/* int numberOfPlayers;
std::string boardSize; */
bool gameOver = false;

int main(){
    //how many playes, multiplayer?, 
    Game game;
    Player player;
    game.init(player);
    game.printBoard();
    while (!gameOver){
        game.update(gameOver, game._board3, game._board5, player);
        game.checkWin(game._board3, game._board5, player);
    }


    //ask for board size, 3x3, 5x5

    //ask for symbols

    //maybe confirm or option to redo steps
    //init and print board to screen
    //player 1 turn
    //player 2 turn
    //check for win condition
    //if win, print winner, print loser, and ask for rematch.



    return 0;
}