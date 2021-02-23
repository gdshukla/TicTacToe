
#include "game.hpp"
#include "board.hpp"
#include "player.hpp"
//#include "board.hpp"
#include <iostream>
#include <array>
//#include <string>



 


/* int numberOfPlayers;
std::string boardSize; */
bool gameOver = false;

int main(){
    //how many playes, multiplayer?, 
/*     Game game;
    Player player; */
    game.init(board._board3[board.Cols3][board.Rows3], board._board5[board.Cols5][board.Rows5]);
    game.printBoard();
    while (!gameOver){
        game.update(gameOver, board._board3[board.Cols3][board.Rows3], board._board5[board.Cols5][board.Rows5], player, game);
        game.checkWin(board._board3[board.Cols3][board.Rows3], board._board5[board.Cols5][board.Rows5], player, gameOver);
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