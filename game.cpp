#include "game.hpp"
#include "board.hpp"
//#include "player.hpp"

#include <iostream>
//#include <string>


Game::Game(){

}
Game::~Game(){

}
const unsigned int Cols3 = 3;  const unsigned int Rows3 = 3;  const unsigned int Cols5 = 5;  const unsigned int Rows5 = 5;

void Game::init(Player& player, std::array< std::array<char, Rows3>, Cols3> _board3, std::array< std::array<char, Rows5>, Cols5> _board5){
    std::cout << "** Tic Tac Toe **" << std::endl;
    _numberOfPlayers = player.getPlayerNumber();

    char check2 = 'T';  //switch check to 'F' inside boardInit() to exit while loop
    while (check2 == 'T'){
    getBoardSize(check2, _boardSize, Rows3 , Rows5);
    }

    char check = 'T';  //switch check to 'F' inside boardInit() to exit while loop
    while (check == 'T'){
    boardInit(_boardSize, _board3, _board5, check);
    }

    player.getPlayerOneName();
    player.getPlayerOneSymbol();
    if (_numberOfPlayers == 2){
        player.getPlayerTwoName();
        player.getPlayerTwoSymbol();
    }

}
void Game::printBoard(){
    if (_boardSize == Rows3){
        for (int y = 0; y < Rows3; y++){
            for (int x = 0; x < Rows3; x++){
                std::cout << _board3[Cols3][Rows3];
            }
            std::cout << std::endl;
        }
    } else if(_boardSize == Rows5){
        for (int y = 0; y < Rows5; y++){
            for (int x = 0; x < Rows5; x++){
                std::cout << _board5[Cols5][Rows5];
            }
            std::cout << std::endl;
        }
    }
        
}
void Game::update(bool &gameOver, std::array< std::array<char, Rows3>, Cols3> _board3, std::array< std::array<char, Rows5>, Cols5> _board5, Player &player){
    player.updatePlayerOne(_boardSize, _numberOfPlayers, _board3, _board5, Cols3, Rows3, Cols5, Rows5);
    printBoard();
    if (_numberOfPlayers == 2){
        player.updatePlayerTwo(_boardSize, _numberOfPlayers, _board3, _board5, Cols3, Rows3, Cols5, Rows5);
        printBoard();
    }
    return;

}

void Game::checkWin(std::array< std::array<char, Rows3>, Cols3> _board3, std::array< std::array<char, Rows5>, Cols5> _board5, Player &player, bool &endgame){
    // int vertFlag = 0;
    if(_boardSize == Rows3){
        for(int col = 0; col < Cols3; col++){
            for(int row = 0; row < Rows3; row++){ //todo check win for vertical and diagonal
                if((_board3[col][row] == player.playerOneSymbol) && (_board3[col][row+1] == player.playerOneSymbol) && (_board3[col][row+2] == player.playerOneSymbol)){
                    std::cout << player.playerOneName << " wins!!" << std::endl;
                    endgame = true;
                    return; 
                }
            }
        }
    } else if(_boardSize == Rows5){
        for (int col = 0; col < Cols5; col++){
            for (int row = 0; row < Rows5; row++){ //todo check win for vertical and diagonal
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