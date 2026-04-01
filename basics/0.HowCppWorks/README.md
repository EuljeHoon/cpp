# How C++ works?

```
#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    std::cin.get();
}
```

## include <iostream> ##

#include: Brings other library or file<br>
<iostream>: A standard C++ Input/Output library<br>
* std::cout -> print output<br>
* std::cin -> input<br>
* std::endl -> newline<br>

## int main() ##

int main() is program entry point.<br>
Why int?: When this function main is over, it returns integer.<br>

<<: << is a symbol that sends data to 'cout'<br>
```
std::cout << "Hello World!" << std::endl;
```
this could be same as 
```
std::cout.print("Hello World!").print(std::endl);
```
<br>

```
std::cin.get()
```
This makes the program wait us to press enter.<br>

## How multiple files work ##
```
#include <iostream>

void Log(const char* message)

{
    std::cout << message << std::endl;
}
```
```
#include <iostream>

// Declaration
void Log(const char* message);

int main() {
    Log("Hello World!);
    std::cin.get();
}
```
Declaration: Let a function know this function is exist.<br>
In the code above, we can findout we used decalration:
```
void Log(const char* message)
```
to let main know function Log is existing somewhere.

## Compiling example code ##

```
clang++ Main.cpp Log.cpp -o main
./main
```