#include <iostream>
#include "Log.h"

int main() {
    for (int i = 0; i < 5; i++) {
        Log("Hello World!");
    }

    std::cout << " " << std::endl;

    int i = 0;
    while(i < 5) {
        Log("Hello World!");
        i++;
    }

    std::cout << " " << std::endl;
    
    int j = 0;
    do {
        Log("Hello World");
        j++;
    }while (j < 5);

    std::cin.get();
}
