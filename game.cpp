#include "game.hpp"
#include "board.hpp"
#include "player.hpp"
#include <iostream>
#include <array>
//#include <string>


Game::Game()
{

}
Game::~Game()
{

}


void Game::init(std::array< std::array<char, Rows3>, Cols3> _board3,  std::array< std::array<char, Rows5>, Cols5> _board5, Player &player, Board &board){
    std::cout << "** Tic Tac Toe **" << std::endl;
    _numberOfPlayers = player.getPlayerNumber();

    char check2 = 'T';  //switch check to 'F' inside boardInit() to exit while loop
    while (check2 == 'T'){
    board.getBoardSize(check2, board._boardSize, board.Rows3 , board.Rows5);
    }

    char check = 'T';  //switch check to 'F' inside boardInit() to exit while loop
    while (check == 'T'){
    board.boardInit(board._boardSize, board._board3, board._board5, check);
    }

    player.getPlayerOneName();
    player.getPlayerOneSymbol();
    if (_numberOfPlayers == 2){
        player.getPlayerTwoName();
        player.getPlayerTwoSymbol();
    }

}
void Game::printBoard(std::array< std::array<char, Rows3>, Cols3> _board3,  std::array< std::array<char, Rows5>, Cols5> _board5, int &_boardSize){
    if (_boardSize == Rows3){  //todo _boardSize not being initialized here
        for (int y = 0; y < Rows3; y++){
            for (int x = 0; x < Rows3; x++){
                std::cout << _board3[y][x];
            }
            std::cout << std::endl;
        }

    } else if(_boardSize == Rows5){
        for (int y = 0; y < Rows5; y++){
            for (int x = 0; x < Rows5; x++){
                std::cout << _board5[y][x];
            }
            std::cout << std::endl;
        }
    }
        
}
void Game::update(bool &gameOver,  std::array< std::array<char, Rows3>, Cols3> &_board3,  std::array< std::array<char, Rows5>, Cols5> &_board5, Player &player, Game &game, Board board){
    player.updatePlayerOne(board._boardSize, board._board3, board._board5);
    printBoard(_board3, _board5, board._boardSize); //todo fuck all of this, too many different classes maybe, also std::array container doing stuff I don't understand in <array> file...  
    if (_numberOfPlayers == 2){
        player.updatePlayerTwo(board._boardSize, _board3, _board5);
        printBoard(_board3, _board5, _boardSize);
    }
    return;

}

void Game::checkWin(std::array< std::array<char, Rows3>, Cols3> _board3,  std::array< std::array<char, Rows5>, Cols5> _board5, Player player, Board board, bool &endgame){
    // int vertFlag = 0;
    if(board._boardSize == Rows3){ 
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