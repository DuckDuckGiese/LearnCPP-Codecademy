// 1 and 3
#include <iostream>
#include <cstdlib>

int main() {

// 2
    std::cout << "MAGIC 8-BALL: \n\n";

// 5
    srand(time(NULL));

// 3 and 4
    int answer = std::rand() % 10;

// 6, 7 and 8
    if (answer == 0) {
        std::cout << "It is certain.\n";
    }
    else if (answer == 1) {
        std::cout << "It is decidedly so.\n";
    }
    else if (answer == 2) {
        std::cout << "Without a doubt.\n";
    }
    else if (answer == 3) {
        std::cout << "Yes - definitely.\n";
    }
    else if (answer == 4) {
        std::cout << "You may rely on it.\n";
    }
    else if (answer == 5) {
        std::cout << "As I see it, yes.\n";
    }
    else if (answer == 6) {
        std::cout << "Most likely.\n";
    }
    else if (answer == 7) {
        std::cout << "Outlook good.\n";
    }
    else if (answer == 8) {
        std::cout << "Yes.\n";
    } else {
        std::cout << "Very doubtful.\n";
    }

    return 0;

}