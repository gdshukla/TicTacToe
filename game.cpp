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
    getBoardSize(check2, _boardSize);
    }

    char check = 'T';  //switch check to 'F' inside boardInit() to exit while loop
    while (check == 'T'){
    boardInit(_boardSize,  _board3, _board5, check);
    }

    player.getPlayerOneName();
    player.getPlayerOneSymbol();
    if (_numberOfPlayers == 2){
        player.getPlayerTwoName();
        player.getPlayerTwoSymbol();
    }

}
void Game::printBoard(){
    if (_boardSize == 3){
        for (int y = 0; y < 3; y++){
            for (int x = 0; x < 3; x++){
                std::cout << _board3[y][x];
            }
            std::cout << std::endl;
        }
    } else if (_boardSize == 5){
        for (int y = 0; y < 5; y++){
            for (int x = 0; x < 5; x++){
                std::cout << _board5[y][x];
            }
            std::cout << std::endl;
        }
    }
        
}
void Game::update(bool &gameOver, char (&_board3)[rows3][cols3],char (&_board5)[rows5][cols5], Player &player){
    player.updatePlayerOne(_boardSize, _numberOfPlayers, _board3, _board5);
    printBoard();
    if (_numberOfPlayers == 2){
        player.updatePlayerTwo(_boardSize, _numberOfPlayers, _board3, _board5);
        printBoard();
    }
    

}

void Game::checkWin(char _board3[rows3][cols3], char _board5[rows5][cols5], Player &player){
    if(_boardSize == 3){
        //todo check for win condition for 3x3
        for(int y = 0; y < 3; y++){
            for(int j = 0; j < 3; j++){
                if((_board3[y][j] == player.playerOneSymbol) && (_board3[y][j+1] == player.playerOneSymbol) && (_board3[y][j+2] == player.playerOneSymbol)){
                    std::cout << player.playerOneName << " wins!!" << std::endl;
                    return;
                }
            }
        }
    } else if(_boardSize == 5){
        //todo check for win condition for 5x5
        return;
    } else {
        //todo  not sure here
        return;
    }
}