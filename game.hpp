#pragma once
#include <vector>
#include <string>



class Game {
public:
    Game();
    void init();
    void printBoard();
    void update(bool &gameOver);
    void checkWin();
    //int getNumberOfPlayers(){ return _numberOfPlayers;}


//private:
    int _numberOfPlayers;
    int _boardSize;





};