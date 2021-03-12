#pragma once
#include <string>
#include <regex>
//#include <array>
//#include "board.hpp"


class Player /* : public Board */{
public:
    Player();
    ~Player();
    //getters
    std::string getPlayerAmountString();
    std::regex getRegex();
    //setters

    //main functions
    //void initPlayers();
    int setPlayerAmount(std::string pas);
    void setPlayerNames();



private:
    int playerAmount;
    char playerOneSymbol;
    char playerTwoSymbol;
    std::string playerAmountString;
    std::regex regex;

    std::string playerOneName;
    std::string playerTwoName;
    
    
};