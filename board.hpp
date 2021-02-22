#pragma once
#include <array>


class Board {
public:
    Board();
    ~Board();
    void Board::getBoardSize(char &check2, int &_boardSize,  const unsigned int Rows3,  const unsigned int Rows5);
    void Board::boardInit(int &_boardSize,  std::array < std::array <char, Rows3>, Cols3> &_board3,  std::array < std::array<char, Rows5>, Cols5> &_board5, char &check);

    int _boardSize;
    const unsigned int Rows3 = 3;
    const unsigned int Cols3 = 3;
    const unsigned int Rows5 = 5;
    const unsigned int Cols5 = 5;
    std::array< std::array<char, Rows3 >, Cols3 > _board3;
    std::array< std::array<char, Rows5 >, Cols5 > _board5;
} board;