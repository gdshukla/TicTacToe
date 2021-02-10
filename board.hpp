#pragma once
#include <iostream>


 static const int board3Y = 3, board3X = 3, board5Y = 5, board5X = 5;
 static char _board3[board3Y][board3X];
 static char _board5[board5Y][board5X];

int inline getBoardSize(char &check2, int &_boardSize){
    std::cout << "What size game?  (Enter a 3 for a 3 x 3 game, or 5 for a 5 x 5 game)" << std::endl;
    int input;
    std::cin >> input;
    switch(input){
        // 1, 3 are for board size 3 x 3, people might press 1 or 3
        case 1:
        case 3:
        check2 = 'F';
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        _boardSize = board3Y; // board3Y is just so it's not hardcoded to 3, Y because board x,y might be different, not sure yet
        return _boardSize;
        break;
            // 2, 5 are for board size 5 x 5, people might press 2 or 5
        case 2:
        case 5:
        check2 = 'F';
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        _boardSize = board5Y; // board5Y is just so it's not hardcoded to 5, Y because board x,y might be different, not sure yet
        return _boardSize;
        break;
        default:
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        std::cout << "That input doesn't make sense!" << std::endl;
        return _boardSize;
        break;
    }
    return _boardSize;

}

void inline boardInit(int &_boardSize, char _board3[board3Y][board3X], char _board5[board5Y][board5X], char &check){


        if (_boardSize == board3Y){

            for (int y = 0; y < board3Y; y++){
                for (int x = 0; x < board3Y; x++) {
                    if ((x % 2) == 0){
                        _board3[y][x] = '.';
                    } else {
                        _board3[y][x] = '*';
                    }
                }
            }
            check = 'F';
            return;
        }
        else if (_boardSize == board5Y){
            for (int y = 0; y <= board5Y; y++){
                for (int x = 0; x <= board5Y; x++) {
                    if ((x % 2) == 0){
                        _board5[y][x] = '.';
                    } else {
                        _board5[y][x] = '*';
                    }
                }
            }
            check = 'F';
            return;
        } else {
        std::cout << "That input doesn't make sense!  Try again." << std::endl;
        return;
        }
}