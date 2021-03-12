
#include <iostream>
#include <limits>
#include <regex>
#include <array>
#include <string>
#include "player.hpp"
//#include "board.hpp"

    Player::Player()
    {
        setPlayerAmount(playerAmountString);
        setPlayerNames();
    }
    Player::~Player()
    {

    }
    //getters
    std::string Player::getPlayerAmountString(){return playerAmountString;}
    std::regex Player::getRegex(){return regex;}
    //setters

    //main functions
/*     void Player::initPlayers(){
          
    } */
    int Player::setPlayerAmount(std::string playerAmountString){
        std::string pas;  // Use <regex> to validate input of string to check for 1 or 2, then convert to the integer playerAmount.
        std::regex regex("[^1-2$]"); //todo update to include multiple variants that could possibly be input, eg. "one player", or "1 player", or "one", etc.etc.etc.
        std::cout << "Enter (1) Player or (2) Players?" << std::endl;
        std::cin >> playerAmountString;
        //template <class CharT, class Traits = std::regex_traits<CharT> > class basic_regex;

        while(!std::cin.fail()){ 
            // Validate input; copy paste from player.hpp comment-->
            // Use <regex> to validate input of string to check for 1 or 2, then convert to the integer playerAmount.
            std::cout << "first statement inside while(std::cin.fail()){}; playerAmountString:"<< playerAmountString << std::endl;//todo delete test line
            std::cout << "std::cin.fail() is : " <<std::cin.fail() << std::endl;
            if (!std::regex_replace(playerAmountString, regex,)){  //todo fix regex_replace/try regex_replace 3-6 on cppreference.
            std::cout << "Input not recognized." << std::endl;
            std::cout << regex_replace(playerAmountString, regex) << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
        } else {
                std::cout << "hello from inside setPlayerAmount(), inside else statement (cin.fail())" << std::endl;
                std::cout << "std::regex_replace(playerAmountString, regex) is : " << std::regex_replace(playerAmountString, regex) << std::endl; //todo delete this testing line

                //todo forgot to set playerAmount to correct integer values, do that!
                std::string m;
                if (std::regex_replace(playerAmountString, regex, ) == "1"){

                }else {

                }
                return this->playerAmount;
            }
        return 55;
        // End While Loop; playerAmount should be validated first as string input, using <regex>,
        // then converted to integer playerAmount and returned.
        }
        return 0;
    }
    void Player::setPlayerNames(){
        if (this->playerAmount == 1){
            // one player game
            std::cout << "What is player's Name : ";
            std::cin >> this->playerOneName;
        } else if (this->playerAmount == 2){
            // two player game
            std::cout << "What is player one's Name : ";
            std::cin >> this->playerOneName;
            std::cout << "What is player two's Name : ";
            std::cin >> this->playerTwoName;
        } else {
            // error
            std::cout << "setPlayerNames() error; made it to else statement." << std::endl;
        }
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
