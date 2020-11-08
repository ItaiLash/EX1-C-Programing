# EX1-C-Programing
This is an assignment in a systems programming course at Ariel University.
The assignment consists of several files:
* myMath.h: A directory that exposes the user to a number of mathematical functions.
* basicMath.c: that contains the implementations of the addition functions subtraction, multiplication and division
* power.c: which contains the implementations of the hold and exponential functions
* main.c: A main program that receives a number from the user and calculates the following functions:
1. f (x) = ex + 𝑥3 - 2
2. f (x) = 3x + 2X ^ 2
3. f (x) = (4x ^ 3) / 5 -2x

## makefile:

* makefile: A file that supports the following commands:
* make mymaths - The compiler will create the static library libmyMath.a which will contain the implementations of all functions.
* make mymathd - The compiler will create the dynamic library libmyMath.so which will contain the implementations of all functions.
* make mains - The compiler will create the main program called mains while linking to the static directory. If the directory already exists the compiler will not compile it again.
* make maind - The compiler will create the main program called maind when it is linked to the dynamic library. If the directory already exists the compiler will not compile it again.
* make all - will compile all libraries and programs. If a particular file already exists the compiler will not compile it again.
* make clean - will clean the folder of all the compiled files and leave only h .c .txt files.
