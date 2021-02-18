#pragma once
#include <iostream>
#include <typeinfo>


class Player {
public:
    std::string playerOneName;
    std::string playerTwoName;
    char playerOneSymbol;
    char playerTwoSymbol;

    int getPlayerNumber(){

        std::cout << "How many players? (Enter 1 or 2)" << std::endl;
        int input;

        std::cin >> input;
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        if (input == 1 || input == 2){
            return input;
        } else {
            getPlayerNumber();
        }
        return 0;
    }
    std::string getPlayerOneName(){
        std::cout << "Enter Player 1 name :" << std::endl;
        std::cin >> playerOneName;
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        return playerOneName;
    }
    std::string getPlayerTwoName(){
        std::cout << "Enter Player 2 name :" << std::endl;
        std::cin >> playerTwoName;
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        //std::cout << "from player.hpp, inside getPlayerOneName, If statement using if(getPlayerNumber() == 2)" << std::endl;
        return playerTwoName;
    }
    char getPlayerOneSymbol(){
        std::cout << "Player 1: Enter what Symbol you would like to play as?" << std::endl;
        std::cin >> playerOneSymbol;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Hit Enter to confirm play as: " << playerOneSymbol << std::endl;
        std::cin;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        return playerOneSymbol;
    }
    char getPlayerTwoSymbol(){
        std::cout << "Player 2: Enter what Symbol you would like to play as?" << std::endl;
        std::cin >> playerTwoSymbol;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Hit Enter to confirm play as: " << playerTwoSymbol << std::endl;
        std::cin;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        return playerTwoSymbol;
    }
    void updatePlayerOne(int BoardSize, int NumberOfPlayers, char* _board3[], char* _board5[], int Cols3, int Rows3, int Cols5, int Rows5){
    char moveLetter; //todo pass player as arg for function
    char moveNumber;
    int imoveLetter, imoveNumber;
    std::cout << "\t" << playerOneName << ", place your symbol." << std::endl;
    std::cout << "Enter row (letter): " << " ";
    std::cin >> moveLetter;
    std::cout << "Enter column (number): " << " \n";
    std::cin >> moveNumber;
    //todo parse move string into separate ints, convert letter to number probably
    switch (moveLetter){
        case 'a':
        case 'A':
        case '1':
            imoveLetter = 0;
            break;
        case 'b':
        case 'B':
        case '2':
            imoveLetter = 1;
            break;
        case 'c':
        case 'C':
        case '3':
            imoveLetter = 2;
            break;
        case 'd':
        case 'D':
        case '4':
            imoveLetter = 3;
            break;
        case 'e':
        case 'E':
        case '5':
            imoveLetter = 4;
            break;
    }
    switch (moveNumber){
        case '1':
            imoveNumber = 0;
            break;
        case '2':
            imoveNumber = 1;
            break;
        case '3':
            imoveNumber = 2;
            break;
        case '4':
            imoveNumber = 3;
            break;
        case '5':
            imoveNumber = 4;
            break;
    }

    if (BoardSize == Rows3){
        //todo update board 3x3
        for (int j = 0; j < Cols3; j++){
            for (int i = 0; i < Rows3; i++){
                if (i == imoveLetter && j == imoveNumber){
                    _board3[Cols3][Rows3] = playerOneSymbol;
                }
            }
        }

    } else if (BoardSize == Rows5){
        // todo update board 5x5
        for (int j = 0; j < Cols5; j++){
            for (int i = 0; i < Rows5; i++){
                if (i == imoveLetter && j == imoveNumber){
                    _board5[j][i] = playerOneSymbol;
                }
            }
        }
    }
    
    }

    void updatePlayerTwo(int BoardSize, int NumberOfPlayers, char* _board3[], char* _board5[], int Cols3, int Rows3, int Cols5, int Rows5){
    char moveLetter;
    char moveNumber;
    int imoveLetter, imoveNumber;
    std::cout << "\t" << playerTwoName << ", place your symbol." << std::endl;
    std::cout << "Enter row (letter): " << " ";
    std::cin >> moveLetter;
    std::cout << "Enter column (number): " << " \n";
    std::cin >> moveNumber;
    //todo parse move string into separate ints, convert letter to number probably
    switch (moveLetter){
        case 'a':
        case 'A':
        case '1':
            imoveLetter = 0;
            break;
        case 'b':
        case 'B':
        case '2':
            imoveLetter = 1;
            break;
        case 'c':
        case 'C':
        case '3':
            imoveLetter = 2;
            break;
        case 'd':
        case 'D':
        case '4':
            imoveLetter = 3;
            break;
        case 'e':
        case 'E':
        case '5':
            imoveLetter = 4;
            break;
    }
    switch (moveNumber){
        case '1':
            imoveNumber = 0;
            break;
        case '2':
            imoveNumber = 1;
            break;
        case '3':
            imoveNumber = 2;
            break;
        case '4':
            imoveNumber = 3;
            break;
        case '5':
            imoveNumber = 4;
            break;
    }

    if (BoardSize == Rows3){
        for (int j = 0; j < Cols3; j++){
            for (int i = 0; i < Rows3; i++){
                if (i == imoveLetter && j == imoveNumber){
                    _board3[j][i] = playerTwoSymbol;
                }
            }
        }

    } else if (BoardSize == Rows5){
        
        for (int j = 0; j < Cols5; j++){
            for (int i = 0; i < Rows5; i++){
                if (i == imoveLetter && j == imoveNumber){
                    _board5[j][i] = playerTwoSymbol;
                }
            }
        }
    }
    }

    //todo check win condition with loop
} ;
