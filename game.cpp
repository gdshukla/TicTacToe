#include "game.hpp"
//#include "board.hpp"
//#include "player.hpp"
#include <iostream>
#include <array>
//#include <string>


Game::Game()
{

}
Game::~Game()
{

}


void Game::init(char &_board3, char &_board5){
    std::cout << "** Tic Tac Toe **" << std::endl;
    _numberOfPlayers = player.getPlayerNumber();

    char check2 = 'T';  //switch check to 'F' inside boardInit() to exit while loop
    while (check2 == 'T'){
    board.getBoardSize(check2, board._boardSize, board.Rows3 , board.Rows5);
    }

    char check = 'T';  //switch check to 'F' inside boardInit() to exit while loop
    while (check == 'T'){
    board.boardInit(board._boardSize, board._board3[board.Cols3][board.Rows3], board._board5[board.Cols5][board.Rows5], check);
    }

    player.getPlayerOneName();
    player.getPlayerOneSymbol();
    if (_numberOfPlayers == 2){
        player.getPlayerTwoName();
        player.getPlayerTwoSymbol();
    }

}
void Game::printBoard(){
    if (board._boardSize == board.Rows3){
        for (int y = 0; y < board.Rows3; y++){
            for (int x = 0; x < board.Rows3; x++){
                std::cout << board._board3[y][x];
            }
            std::cout << std::endl;
        }
    } else if(board._boardSize == board.Rows5){
        for (int y = 0; y < board.Rows5; y++){
            for (int x = 0; x < board.Rows5; x++){
                std::cout << board._board3[y][x];
            }
            std::cout << std::endl;
        }
    }
        
}
void Game::update(bool &gameOver,  char &_board3,  char &_board5, Player &player, Game &game){
    player.updatePlayerOne(board._boardSize, _numberOfPlayers, board._board3[board.Cols3][board.Rows3], board._board5[board.Cols5][board.Rows5]);
    printBoard();
    if (_numberOfPlayers == 2){
        player.updatePlayerTwo(board._boardSize, _numberOfPlayers, board._board3[board.Cols3][board.Rows3], board._board5[board.Cols5][board.Rows5]);
        printBoard();
    }
    return;

}

void Game::checkWin(char &_board3,  char &_board5, Player &player, bool &endgame){
    // int vertFlag = 0;
    if(board._boardSize == board.Rows3){
        for(int col = 0; col < board.Cols3; col++){
            for(int row = 0; row < board.Rows3; row++){ //todo check win for vertical and diagonal
                if((board._board3[col][row] == player.playerOneSymbol) && (board._board3[col][row+1] == player.playerOneSymbol) && (board._board3[col][row+2] == player.playerOneSymbol)){
                    std::cout << player.playerOneName << " wins!!" << std::endl;
                    endgame = true;
                    return; 
                }
            }
        }
    } else if(board._boardSize == board.Rows5){
        for (int col = 0; col < board.Cols5; col++){
            for (int row = 0; row < board.Rows5; row++){ //todo check win for vertical and diagonal
                if((board._board5[col][row] == player.playerOneSymbol) && (board._board5[col][row+1] == player.playerOneSymbol) && (board._board5[col][row+2] == player.playerOneSymbol)
                && (board._board5[col][row+3] == player.playerOneSymbol) && (board._board5[col][row+4] == player.playerOneSymbol)){
                    std::cout << player.playerOneName << " wins!!" << std::endl;
                    endgame = true;
                    return;
                }
            }
        }
    } 
        return;
}