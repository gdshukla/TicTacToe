#include "game.hpp"
/* #include "board.hpp"
#include "player.hpp" */
#include <iostream>
#include <array>
#include <regex>
//#include <string>


Game::Game()
{
    board.initBoard();

}
Game::~Game()
{

}

void Game::run(bool& gO){
    //players.initPlayers();
    updateGame(gO, &board, &players);
}
void Game::updateGame(bool& gO, Board *Board, Player *Players){
/*     int i = 0;   //todo delete this test code
    while (i < 3){
        std::string inputString;
        std::getline(std::cin, inputString);
        i++;
    }
    gO = true; */
}
