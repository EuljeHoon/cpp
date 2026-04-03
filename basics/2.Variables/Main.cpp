#include <iostream>

int main()
{
    // In this case it will return 'A' instead of 65 because we assinged variable as a char and 65 is the ASCII number for 'A'.
    char variable = 65;

    std::cout << variable << std::endl;
    // 1, since char is 1 byte
    std::cout << sizeof(variable) << std::endl;
    std::cin.get();
}