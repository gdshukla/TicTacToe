#pragma once
#include "game.hpp"
#include <limits>
//#include "player.hpp"
//#include <iostream>
//#include <regex>

// Lets use constructor to create game objects instead of c-style init_xxx functions
Game::Game()
{
    //set number of players
    getPlayerCountFromUser();
    std::cout << "playerAmountStringForRegex is : " << playerAmountStringForRegex_ << std::endl;

    for(int i = 0; i < playerCount; i++){
        std::cout << "Enter player "<< i+1 << "'s name : ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> inputone; // string name _N
        std::cout << "Enter player " << i+1  << "'s symbol : ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> inputtwo; // char symbol _S
        players_.emplace_back(std::make_unique<Player>(inputone, inputtwo));
    }   

    // lets just print player details fir shits and giggles
    int index = 1;
    for(auto &player: players_){
        std::cout << index++ << ". Name: " << player->getName() << " ";
        std::cout << "Symbol: " << player->getSymbol() << std::endl;
    }

}
Game::~Game()
{

}
/*----------------------------------------Game Stuff-------------------------------*/
/*---------------------------------------------------------------------------------*/

void Game::run(bool gO){
    updateGame(gO); 
}

void Game::updateGame(bool& gO){
    //TODO -- need to add game loop here/game logic/while loop;3/21/2021 time stamp.

    while(gO){
        updateBoard();
        gO = true;  // TODO - toggle to end game gracefully vs leaving it open loop ended.
    }
}
/*------------------------------------------Player Stuff-----------------------------*/
/*-----------------------------------------------------------------------------------*/

void Game::getPlayerCountFromUser(){ 
    const unsigned int max_players = 4;
    std::string numbers_text[] = {"one", "two", "three", "four"};
    std::map<int, std::regex> conversion_table = get_regex_map(max_players, numbers_text); 
    std::regex regex = getRegex(max_players, numbers_text);
    std::cout << "Enter (1) Player or (2) Players?" << std::endl;
    
    std::cin >> playerAmountStringForRegex_;
    
// validate input and set number of players in a variable.
    while (!std::cin.fail()){ 

        if (!std::regex_match(playerAmountStringForRegex_, regex)){
            std::cout << "Input not recognized." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getPlayerCountFromUser();
        }
        else {
            for(auto &el: conversion_table){ 
                if(std::regex_match(playerAmountStringForRegex_, el.second)){
                    std::cout << "Number of players selected is : " << el.first << std::endl;
                    playerCount = el.first;
                    std::cout << "playerCount is : " << playerCount << std::endl;

                    // once we have found the element, no need to process further
                    break;
                }

            } return; // todo figure out a better way to write this; maybe without cin.fail(), and the return. 
        }
    }
}   

 // TODO - April 8, 2021; 10:37pm, seg fault, debug needed....  still need to try unique_ptr.

std::regex Game::getRegex(unsigned int max_players, std::string *numbers_text){
    std::stringstream ss;
    ss << "[1-";
    ss << max_players;
    std::cout << "TEST : max_players is " << max_players << std::endl;
    ss << "]";

    for (unsigned int i = 0; i < max_players; i++){
        ss << "|";
        ss << numbers_text[i];
    }
    std::string s = "";
    ss >> s;
    std::cout << "s is : " << s << std::endl;
    std::regex regex(s, std::regex::icase);
    return regex;
}

std::map<int, std::regex> Game::get_regex_map(unsigned int max_players, std::string* numbers_text){
    std::map<int, std::regex> convert_table;
    for(unsigned int i = 0; i < max_players; i++){
        std::string s = numbers_text[i] + "|" + std::to_string(i+1);
        std::cout << "std::string s = numbers_text[i] + \"|\" + std::to_string(i+1); is : " << s << std::endl;
        std::regex r(s, std::regex::icase);
        convert_table[i+1] = r;
    }
    return convert_table;
}
/*-------------------------------------------Board Stuff------------------------------*/
/*------------------------------------------------------------------------------------*/
void Game::updateBoard(){

}
void Game::printBoard(){

}