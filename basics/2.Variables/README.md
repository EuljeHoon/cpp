# Variables in C++ #

Focusing on how big are each variables.<br>

## Range of signed Integer -> -2^(b-1) ~ 2^(b-1) - 1 ##

Why? Is there any reason?<br>

Reason: Two's Complement<br>
Variables are going to be n bits.<br>
And each bit has two number of cases which are 0 and 1. <br>
So the total number of cases will be 2^b<br>

## The reason why signed integer is -2^(b-1) ~ 2^(b-1) - 1 ##

First bit of signed integer bits will decide positive or negative, so we need to exclude first bit.<br>

Why 2^(b-1) - 1?: For the positive, 0 is included so we have to substract 1.

## Variable types ##

* char(1 byte): Characters
* bool(1 bytes): 
* short(2 bytes): Small number
* int(4 bytes)
* float(4 bytes): 3.14f(Have to have 'f' for the float variable.)
* double(8 bytes)
* long(8 bytes): size depends on system, typically 8 bytes on Mac/Linux, 4 bytes on Windows
* long long(8 bytes): Fixed 8 bytes of number.
* etc...

## sizeof() ##
To check the size of variable.


