# C++ Compiler and Linker #

## What C++ compiler does? ##

It takes out the text file and convert them into an intermediate format called an object file.<br>

## Compiling process ##

.cpp file -> Preprocessing -> Compilation -> Linking -> Execution file<br>
Preprocessing: Get rid off comments, put iostream into the code ... etc<br>
Compilation: C++ -> Assembly -> Object file(.o), Checking syntax error, type and translate the code into the machine code.<br>
Linking: Creates execution file by combining existing .o files.<br>

## Linking ##

In C++ we usually makes many seperated files, and Linking is a technique to binds them together.<br>
```
// Main.cpp
Log("Hello");
```
In this example Linker will try to find 'Log' function by exploring many different .o files.