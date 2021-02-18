#include "game.hpp"
//#include "player.hpp"

#include <iostream>
//#include <string>


Game::Game(){

}
void Game::init(Player& player){
    std::cout << "** Tic Tac Toe **" << std::endl;
    _numberOfPlayers = player.getPlayerNumber();

    char check2 = 'T';  //switch check to 'F' inside boardInit() to exit while loop
    while (check2 == 'T'){
    getBoardSize(check2, _boardSize, rows3 , rows5);
    }

    char check = 'T';  //switch check to 'F' inside boardInit() to exit while loop
    while (check == 'T'){
    boardInit(_boardSize, _board3, _board5, cols3, rows3, cols5, rows5, check);
    }

    player.getPlayerOneName();
    player.getPlayerOneSymbol();
    if (_numberOfPlayers == 2){
        player.getPlayerTwoName();
        player.getPlayerTwoSymbol();
    }

}
void Game::printBoard(){
    if (_boardSize == rows3){
        for (int y = 0; y < rows3; y++){
            for (int x = 0; x < rows3; x++){
                std::cout << _board3[cols3][rows3];
            }
            std::cout << std::endl;
        }
    } else if(_boardSize == rows5){
        for (int y = 0; y < rows5; y++){
            for (int x = 0; x < rows5; x++){
                std::cout << _board5[cols5][rows5];
            }
            std::cout << std::endl;
        }
    }
        
}
void Game::update(bool &gameOver, char* _board3[cols3],char* _board5[cols5], Player &player){
    player.updatePlayerOne(_boardSize, _numberOfPlayers, _board3, _board5, cols3, rows3, cols5, rows5);
    printBoard();
    if (_numberOfPlayers == 2){
        player.updatePlayerTwo(_boardSize, _numberOfPlayers, _board3, _board5, cols3, rows3, cols5, rows5);
        printBoard();
    }
    return;

}

void Game::checkWin(char* _board3[cols3], char* _board5[cols5], Player &player, bool &endgame){
    // int vertFlag = 0;
    if(_boardSize == rows3){
        for(int col = 0; col < cols3; col++){
            for(int row = 0; row < cols3; row++){ //todo check win for vertical and diagonal
                if((_board3[col][row] == player.playerOneSymbol) && (_board3[col][row+1] == player.playerOneSymbol) && (_board3[col][row+2] == player.playerOneSymbol)){
                    std::cout << player.playerOneName << " wins!!" << std::endl;
                    endgame = true;
                    return; 
                }
            }
        }
    } else if(_boardSize == rows5){
        for (int col = 0; col < cols5; col++){
            for (int row = 0; row < rows5; row++){ //todo check win for vertical and diagonal
                if((_board5[col][row] == player.playerOneSymbol) && (_board5[col][row+1] == player.playerOneSymbol) && (_board5[col][row+2] == player.playerOneSymbol)
                && (_board5[col][row+3] == player.playerOneSymbol) && (_board5[col][row+4] == player.playerOneSymbol)){
                    std::cout << player.playerOneName << " wins!!" << std::endl;
                    endgame = true;
                    return;
                }
            }
        }
    } 
        return;
}