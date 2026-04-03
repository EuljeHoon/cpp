# Header Files #

C++ files: Compilation files, Header files
Header Files: Used to declare the certain types of function.

## Why we need header files ##

If we create a function in one file and we want to use it in other file<br>
To make C++ to know that function is exists, so we need common place to store just declarations not definitions (Just to say hey this function is exists).<br>

## Declaration example ##
```main.cpp
#include <iostream>

void Log(const char* message) {
    std::cout << message << std::endl;
}
int main() {
    Log("Hello World!");
    std::cin.get();
}
```
```Log.cpp
// Declaration of the Log function
void Log(const char* message);

void InitLog() {
    Log("Initializing Log");
}
```
I used declaration in Log.cpp<br>
Instead of using Declaration in .cpp file, we can use header file instead.<br>
We can just simply copy and paste all of declaration into the header file.

## #pragma once ##

\#pragma once helps to include .h files only once<br>
If some .h file is included in bunch of files, with out pragma once -> redefinition error<br>
<br>
Pragma once checks if this file is already included or not,<br>
Initial -> include<br>
Otherwise -> ignore<br>

## #ifndef ##
```
#ifndef MY_HEADER_H
#define MY_HEADER_H

// code

#endif
```
Same functionality as pragma once, but code will be longer and uncomfortable.<br>
It is easy to make macro naming mistakes.<br>
\#pragma once is using more often.