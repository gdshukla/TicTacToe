#pragma once
#include <string>
#include <iostream>

class Player
{
public:
    Player( std::string _N, char _S): name_(_N), symbol_ (_S)
    { 
        std::cout << "Player is created : " << _N << " with symbol " << _S << std::endl; 
    }
    Player(Player&&) = default;
    ~Player(){ 
        std::cout << "Player " << name_ << " is destroyed." << std::endl; 
    }
    void sayName() { 
        std::cout << "Player " << name_ << " rules!" << std::endl; 
    }
    std::string getName(){return name_;}
    char getSymbol(){return symbol_;}

private:
    std::string name_;
    char symbol_;
};