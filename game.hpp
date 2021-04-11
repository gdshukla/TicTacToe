#pragma once
#include <vector>
#include <map>
#include <regex>
#include <memory>
#include "board.hpp"
#include "player.hpp"


class Game { 
    int playerCount;
    bool gameOver_ = false;
    std::string playerAmountStringForRegex_;
    void updateBoard();
    void printBoard();

public:
    Game();
    ~Game();
    void run(bool gO);
    void updateGame(bool& gO);

    int& getPlayerCount(){return playerCount;}
    bool getGameOver(){return gameOver_;}
    // we have vector, we don't need individual pointers
    // std::unique_ptr<Player> p1; // = std::make_unique<Player>(inputone, inputtwo);
    // std::unique_ptr<Player> p2; // = std::make_unique<Player>(inputone, inputtwo);
    // std::unique_ptr<Player> p3; // = std::make_unique<Player>(inputone, inputtwo);
    // std::unique_ptr<Player> p4; // = std::make_unique<Player>(inputone, inputtwo);
 
private:
    std::regex getRegex(unsigned int max_players, std::string *numbers_text);
    std::map<int, std::regex> get_regex_map(unsigned int max_players, std::string* numbers_text);
    std::string getPlayerAmountStringForRegex(){return playerAmountStringForRegex_;}
    std::string inputone;
    char inputtwo;
    std::vector<std::unique_ptr<Player>> players_;
    void getPlayerCountFromUser();

};