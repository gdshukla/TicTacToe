#pragma once
#include <string>
#include <array>
#include "board.hpp"


class Player : public Board{
public:
    int getPlayerNumber();
    std::string getPlayerOneName();
    std::string getPlayerTwoName();
    char getPlayerOneSymbol();
    char getPlayerTwoSymbol();
    void updatePlayerOne(int BoardSize, int NumberOfPlayers, std::array< std::array<char, 3>, 3> &_board3,  std::array< std::array<char, 5>, 5> &_board5);
    void updatePlayerTwo(int BoardSize, int NumberOfPlayers, std::array< std::array<char, 3>, 3> &_board3,  std::array< std::array<char, 5>, 5> &_board5);


    std::string playerOneName;
    std::string playerTwoName;
    char playerOneSymbol;
    char playerTwoSymbol;
};