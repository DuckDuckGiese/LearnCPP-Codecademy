// 1 and 2
#include <iostream>

int main() {
// 3
    for (int i = 1; i <= 100; i++) {
//5
        if (i % 15 == 0) {
        std::cout << "FizzBuzz\n";
        } else if (i % 5 == 0) {
        std::cout << "Buzz\n";
        } else if (i % 3 == 0) {
        std::cout << "Fizz\n";
        } else {
//6
        std::cout << i << "\n";
        }
    }
    return 0;
}