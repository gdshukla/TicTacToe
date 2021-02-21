
#include "game.hpp"
#include <iostream>
#include <string>


 


/* int numberOfPlayers;
std::string boardSize; */
bool gameOver = false;
void boardInit(int &_boardSize,  std::array < std::array <char, Rows3>, Cols3> _board3,  std::array < std::array<char, Rows5>, Cols5> _board5, char &check);
void getBoardSize(char &check2, int &_boardSize,  const unsigned int &Rows3,  const unsigned int &Rows5);
int main(){
    //how many playes, multiplayer?, 
    Game game;
    Player player;
    game.init(player, game._board3, game._board5);
    game.printBoard();
    while (!gameOver){
        game.update(gameOver, game._board3, game._board5, player);
        game.checkWin(game._board3, game._board5, player, gameOver);
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