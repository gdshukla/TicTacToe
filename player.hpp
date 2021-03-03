#pragma once
#include <string>
//#include <array>
//#include "board.hpp"


class Player /* : public Board */{
public:
    Player();
    ~Player();
    void initPlayers();
    int getPlayerAmount();


private:
    std::string playerAmountString;  // Use <regex> to validate input of string to check for 1 or 2, then convert to the integer playerAmount.
    int playerAmount;
    char playerOneSymbol;
    char playerTwoSymbol;
    std::string playerOneName;
    std::string playerTwoName;
    
    /* int getPlayerNumber();
    std::string getPlayerOneName();
    std::string getPlayerTwoName();
    char getPlayerOneSymbol();
    char getPlayerTwoSymbol();
    void updatePlayerOne(int &_boardSize, std::array< std::array<char, Rows3>, Cols3> &_board3,  std::array< std::array<char, Rows5>, Cols5> &_board5);
    void updatePlayerTwo(int &_boardSize, std::array< std::array<char, Rows3>, Cols3> &_board3,  std::array< std::array<char, Rows5>, Cols5> &_board5);


    std::string playerOneName;
    std::string playerTwoName;
    char playerOneSymbol;
    char playerTwoSymbol;
    int _numberOfPlayers; */
};