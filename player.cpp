
#include <iostream>
#include <limits>
#include <regex>
#include <array>
#include <string>
#include "player.hpp"
//#include "board.hpp"

    Player::Player()
    {

    }
    Player::~Player()
    {

    }
    //getters
    std::string Player::getPlayerAmountString(){return playerAmountString;}
    std::regex Player::getRegex(){return regex;}
    //setters
    void Player::initPlayers(){
        getPlayerAmount(playerAmountString);
    }
    //main functions
    int Player::getPlayerAmount(std::string playerAmountString){
        std::string pas;  // Use <regex> to validate input of string to check for 1 or 2, then convert to the integer playerAmount.
        std::regex regex("[1-2]"); //todo update to include multiple variants that could possibly be input, eg. "one player", or "1 player", or "one", etc.etc.etc.

        std::cout << "Enter (1) Player or (2) Players?" << std::endl;
        while(std::cin.fail()){ 
            // Validate input; copy paste from player.hpp comment-->
            // Use <regex> to validate input of string to check for 1 or 2, then convert to the integer playerAmount.

            if (std::cin.fail()){ 
            std::cout << "Input not recognized." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        } else {
            std::string matchResults;
            if (std::regex_search(playerAmountString, regex)){
                std::cout << "hello from inside getPlayerAmount(), inside else statement (cin.fail())" << std::endl;
                std::cout << std::regex_search(playerAmountString, regex) << std::endl; //todo delete this testing line
            }

            return playerAmount;
        }
        return 55;
        // End While Loop; playerAmount should be validated first as string input, using <regex>,
        // then converted to integer playerAmount and returned.
        
        }
        return 0;
    }


    /* int Player::getPlayerNumber(){
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
    std::string Player::getPlayerOneName(){
        std::cout << "Enter Player 1 name :" << std::endl;
        std::cin >> playerOneName;
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        return playerOneName;
    }
    std::string Player::getPlayerTwoName(){
        std::cout << "Enter Player 2 name :" << std::endl;
        std::cin >> playerTwoName;
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        //std::cout << "from player.hpp, inside getPlayerOneName, If statement using if(getPlayerNumber() == 2)" << std::endl;
        return playerTwoName;
    }
    char Player::getPlayerOneSymbol(){
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
    char Player::getPlayerTwoSymbol(){
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
    void Player::updatePlayerOne(int &_boardSize, std::array< std::array<char, Rows3>, Cols3> &_board3,  std::array< std::array<char, Rows5>, Cols5> &_board5){
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
        if (_boardSize == 3){
                        _board3[imoveNumber][imoveLetter] = playerOneSymbol;
        } else if (_boardSize == 5){
                        _board5[imoveNumber][imoveLetter] = playerOneSymbol;
        }
    }

    void Player::updatePlayerTwo(int &_boardSize, std::array< std::array<char, Rows3>, Cols3> &_board3,  std::array< std::array<char, Rows5>, Cols5> &_board5){
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
        if (_boardSize == 3){
                        _board3[imoveNumber][imoveLetter] = playerTwoSymbol;
        } else if (_boardSize == Rows5){
                        _board5[imoveNumber][imoveLetter] = playerTwoSymbol;
        }
    }
 */
