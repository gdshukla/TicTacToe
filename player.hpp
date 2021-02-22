#pragma once

class Player {
public:
    int Player::getPlayerNumber();
    std::string Player::getPlayerOneName();
    std::string Player::getPlayerTwoName();
    char Player::getPlayerOneSymbol();
    char Player::getPlayerTwoSymbol();
    void Player::updatePlayerOne(int BoardSize, int NumberOfPlayers,  std::array<  std::array<char, Rows3>, Cols3> &_board3,  std::array<  std::array<char, Rows5>, Cols5 > &_board5);
    void Player::updatePlayerTwo(int BoardSize, int NumberOfPlayers,  std::array<  std::array<char, Rows3>, Cols3> &_board3,  std::array<  std::array<char, Rows5>, Cols5 > &_board5);


    std::string playerOneName;
    std::string playerTwoName;
    char playerOneSymbol;
    char playerTwoSymbol;
} player;