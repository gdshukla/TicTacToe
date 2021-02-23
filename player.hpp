#pragma once
#include <string>
#include <array>


class Player : public Board{
public:
    int getPlayerNumber();
    std::string getPlayerOneName();
    std::string getPlayerTwoName();
    char getPlayerOneSymbol();
    char getPlayerTwoSymbol();
    void updatePlayerOne(int BoardSize, int NumberOfPlayers, char &_board3, char &_board5);
    void updatePlayerTwo(int BoardSize, int NumberOfPlayers, char &_board3, char &_board5);


    std::string playerOneName;
    std::string playerTwoName;
    char playerOneSymbol;
    char playerTwoSymbol;
};