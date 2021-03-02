
#include "game.hpp"
//#include "board.hpp"
//#include "player.hpp"

#include <iostream>
//#include <array>
//#include <string>



 


/* int numberOfPlayers;
std::string boardSize; */
bool gameOver = false;

int main(){
    //how many playes, multiplayer?, 
    Game game;
/*     Player player;
    Board board;
    game.init(board._board3, board._board5, player, board);
    game.printBoard(board._board3, board._board5, board._boardSize); */
    while (!gameOver){
/*         game.update(gameOver, board._board3, board._board5, player, game, board);
        game.checkWin(board._board3, board._board5, player, board, gameOver); */
        game.run();
    }

    return 0;
}