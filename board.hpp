#pragma once
#include <array>


class Board {
public:
    Board();
    ~Board();
    void getBoardSize(char &check2, int &_boardSize,  const unsigned int Rows3,  const unsigned int Rows5);
    void boardInit(int &_boardSize,  std::array< std::array<char, 3>, 3> _board3,  std::array< std::array<char, 5>, 5> _board5, char &check);

    int _boardSize;
    static const int Rows3 = 3;
    static const int Cols3 = 3;
    static const int Rows5 = 5;
    static const int Cols5 = 5;
    std::array< std::array<char, Rows3 >, Cols3>  _board3;
    std::array< std::array<char, Rows5 >, Cols5>  _board5;
};