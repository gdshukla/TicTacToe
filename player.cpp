
#include <iostream>
#include <limits>
#include <regex>
#include <array>
#include <string>
#include <map>
#include <sstream>
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

    std::regex prepare_regex(unsigned int max_players, std::string *numbers_text)
    {
        std::stringstream ss;
        // prepare regex string
        ss << "[1-";
        ss << max_players;
        ss << "]";
        for (unsigned int i=0; i< max_players; i++)
        {
            ss << "|";
            ss << numbers_text[i];
        }
        std::string s="";
        // copy it to normal string
        ss >> s;
        // prepare regex
        std::regex regex(s, std::regex::icase);
        return regex;

    }
    std::map<int, std::regex> prepare_regex_map(unsigned int max_players, std::string *numbers_text)
    {
        std::map<int, std::regex> conv_table;
        for(int i=0; i<max_players; i++)
        {
            std::regex r(numbers_text[i], std::regex::icase);
            conv_table[i+1] = r;
        } 
        return conv_table;
    }
    int Player::setPlayerAmount(std::string playerAmountString){
        std::string pas;  // Use <regex> to validate input of string to check for 1 or 2, then convert to the integer playerAmount.
        const unsigned int max_players = 4;
        std::string numbers_text[] {"one", "two", "three", "four"};
        //std::regex regex("[1-3]|one|two|three", std::regex::icase); //todo update to include multiple variants that could possibly be input, eg. "one player", or "1 player", or "one", etc.etc.etc.
        std::regex regex = prepare_regex(max_players, numbers_text);
        std::map<int, std::regex> conversion_table = prepare_regex_map(max_players, numbers_text);
        std::cout << "Enter (1) Player or (2) Players?" << std::endl;
        std::cin >> playerAmountString;
        //template <class CharT, class Traits = std::regex_traits<CharT> > class basic_regex;

        while(!std::cin.fail()){ 
            // Validate input; copy paste from player.hpp comment-->
            // Use <regex> to validate input of string to check for 1 or 2, then convert to the integer playerAmount.
            std::cout << "first statement inside while(std::cin.fail()){}; playerAmountString:"<< playerAmountString << std::endl;//todo delete test line
            std::cout << "std::cin.fail() is : " <<std::cin.fail() << std::endl;
            if (!std::regex_match(playerAmountString, regex)){  //todo fix regex_replace/try regex_replace 3-6 on cppreference.
            std::cout << "Input not recognized." << std::endl;
            //std::cout << regex_replace(playerAmountString, regex) << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
        } else {
                std::cout << "hello from inside setPlayerAmount(), inside else statement (cin.fail())" << std::endl;
                //std::cout << "std::regex_replace(playerAmountString, regex) is : " << std::regex_match(playerAmountString, regex) << std::endl; //todo delete this testing line

                //todo forgot to set playerAmount to correct integer values, do that!
                //std::string m;
                for(auto &i: conversion_table)
                {
                    if (std::regex_match(playerAmountString, i.second)){
                        return this->playerAmount = i.first;
                    }
                }
                // if (std::regex_match(playerAmountString, std::regex("one", std::regex::icase))){
                //     this->playerAmount = 1;
                // }else if (std::regex_match(playerAmountString, std::regex("two", std::regex::icase))){
                //     this->playerAmount = 2;
                // }
                // return this->playerAmount;
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

