
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

