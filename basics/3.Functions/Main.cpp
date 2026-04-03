#include <iostream>

int Multiply(int a, int b) {
    return a * b;
}

void MultiplyAndLog(int a, int b) {
    int multiply = a * b;
    std::cout << multiply << std::endl;
}

int main() {
    int multiply = Multiply(2, 3);
    std::cout << multiply << std::endl; //6

    // OR better way
    MultiplyAndLog(2, 3);
    MultiplyAndLog(5, 6);
    MultiplyAndLog(10, 60);
    std::cin.get();
}