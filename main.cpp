#include <iostream>




int numberOfPlayers;
std::string boardSize;

int main(){
    //enter player names, store them in player variables
    std::cout << "How many players? (1-3)"  << std::endl;
    std::cin >> numberOfPlayers;

    //ask for board size, 3x3, 5x5
    std::cout << "What size board to play on? (3 x 3 or 5 x 5)" << std::endl;
    std::cin >> boardSize;
    //ask for symbols
    std::cout << "What symbol/character for "; //<< playerOne << 

    //maybe confirm or option to redo steps
    //init and print board to screen
    //player 1 turn
    //player 2 turn
    //check for win condition
    //if win, print winner, print loser, and ask for rematch.



    return 0;
}