# C---Sort
A simple ascending sorter with validation written in C

This was a college class assignment.

Below is the mysort.h prototype

#include <stdlib.h>
#include <stdio.h>

void generateNums(int *myarr);
void sortNums(int *myarr);
void verifyOrder(int *myarr);

 mysort.h must contain only the prototypes listed above
 generateNums function should generate 100 random integers (stdlib.h:rand()) in an array
 sortNums function should sort them into ascending order (you must write your own sort function)
 verifyOrder should use code to validate that the array is sorted as intended

1. Write a single C program (name it “mysort.c”) that includes the mysort.h header and implementation of the prototypes and a main function that demonstrates the working code. 
2. Place each of the functions in their own classes (genNums.c, sortNums.c, veriOrder.c and myMain.c), compile and link the classes and header file to demonstrate the working code. 
3. Write a C macro that takes as input 2 numbers and return the larger of the two numbers. Write a main that demonstrates the working code.
