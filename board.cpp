#include "board.hpp"

#include <iostream>
#include <array>


    Board::Board(){

    }
    Board::~Board(){

    }
    Board Board::initBoard(Board& Board){
        
    }




    /* void Board::getBoardSize(char &checkA, int &_boardSize,  const unsigned int &Rows3,  const unsigned int &Rows5){
    std::cout << "What size game?  (Enter a 3 for a 3 x 3 game, or 5 for a 5 x 5 game)" << std::endl;
    int input;
    std::cin >> input;
    switch(input){
        // 1, 3 are for board size 3 x 3, people might press 1 or 3
        case 1:
        case 3:
        checkA = 'F';
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        _boardSize = Rows3; // rows3 is just so it's not hardcoded to 3, Y because board x,y might be different, not sure yet
        
        break;
            // 2, 5 are for board size 5 x 5, people might press 2 or 5
        case 2:
        case 5:
        checkA = 'F';
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        _boardSize = Rows5; // rows5 is just so it's not hardcoded to 5, Y because board x,y might be different, not sure yet
        
        break;
        default:
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        std::cout << "That input doesn't make sense!" << std::endl;
        
        break;
    }
    

}

    void Board::boardInit(int &_boardSize,  std::array< std::array<char, Rows3>, Cols3> &_board3,  std::array< std::array<char, Rows5>, Cols5> &_board5, char &checkB){


        if (_boardSize == Rows3){

            for (int y = 0; y < Cols3; y++){
                for (int x = 0; x < Rows3; x++) {
                    if ((x % 2) == 0){
                        _board3[y][x] = '.';
                    } else {
                        _board3[y][x] = '*';
                    }
                }
            }
            checkB = 'F';
            return;
        }
        else if (_boardSize == Rows5){
            for (int y = 0; y <= Cols5; y++){
                for (int x = 0; x <= Rows5; x++) {
                    if ((x % 2) == 0){
                        _board5[y][x] = '.';
                    } else {
                        _board5[y][x] = '*';
                    }
                }
            }
            checkB = 'F';
            return;
        } else {
        std::cout << "That input doesn't make sense!  Try again." << std::endl;
        boardInit(_boardSize, _board3, _board5, checkB);
        }
        return;
    } */


