/* 2 
Rock Paper Scissors Lizard Spock
*/

// 3 and 4
#include <iostream>
#include <stdlib.h>

int main() {
    srand (time(NULL));

    int computer = rand() % 3 + 1;

    int user = 0;

// 5 - compile

// 6 
    std::cout << "====================\n";
    std::cout << "Rock Paper Scissors!\n";
    std::cout << "====================\n\n";

    std::cout << "  1) Rock\n";
    std::cout << "  2) Paper\n";
    std::cout << "  3) Scissors\n\n";

    std::cout << "shoot! ";

    std::cin >> user;

    if (user == 1) {
        std::cout << "You picked Rock\n";
    } else if (user == 2) {
        std::cout << "You picked Paper\n";
    } else if (user == 3) {
        std::cout << "You picked Scissors\n";
    } else {
        std::cout << "You are defenseless\n";
    }

    if (computer == 1) {
        std::cout << "The Computer picked Rock\n";
    } else if (computer == 2) {
        std::cout << "The Computer Paper\n";
    } else {
        std::cout << "The Computer Scissors\n";
    } 

    if (user == computer) {
        std::cout << "You were so equally matched, you tied this time!\n";
    } else if (user == 1){
    // Rock User
        if (computer == 2) {
        std::cout << "Paper covers Rock... You Lose...\n";
        }
        if (computer == 3) {
        std::cout << "Rock smashes Scissors! You Won!\n";
        }
    } else if (user == 2){
    // Paper User
        if (computer == 1) {
        std::cout << "Paper covers Rock! You Won!\n";
        }
        if (computer == 3) {
        std::cout << "Scissors cuts through Paper... You Lose...\n";
        }
    } else if (user == 3){
    // Scissors User
        if (computer == 1) {
        std::cout << "Rock smashes Scissors... You Lose...\n";
        }
        if (computer == 2) {
        std::cout << "Scissors cuts through Paper! You Win\n";
        }
    } else if (user != 1 || user != 2 || user != 3){
        // invalid choice
        if (computer == 1) {
        std::cout << "The Computer bludgeons you with a rock\n";
        std::cout << "You Lose...\n";
        }
        if (computer == 2) {
        std::cout << "The Computer gives you 1,000 paper cuts\n";
        std::cout << "You Lose...\n";
        }
        if (computer == 3) {
        std::cout << "The Computer stabs you with scissors\n";
        std::cout << "You Lose...\n";
        }

        return 0;
    }
}

