#include "Log.h"
#include <iostream>
// Declaration of the Log function
void Log(const char* message) {
    std::cout << message << std::endl;
}

void InitLog() {
    Log("Initializing Log");
}