# C++ Functions #

Every program is built from a collection of functions.

## Why functions are good? ##

* Reusability: Instead of copy and paste same code, we can simply call the function
* Readability: Makes easier to understand the code.
* Maintainability
* Abstraction
* Modularity: Devide the program into small units.

Prevent code duplication.

## Limitation for Function ##

* Function Call Overhead: Function call -> it creates stack frame, save return address and deliver the parameter(Kind of Expensive).
* Cache / Pipeline: Function call -> Jump to another function call -> Predicted commands are useless -> pipeline flush
* etc

Jumping around memory in order to execute function instructions and all of these take time -> slow down a program

## Main function ##
Main function is the special function so does not have to return a value.
