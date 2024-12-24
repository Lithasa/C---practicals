#include <stdio.h>
#include <stdlib.h>

/*
Name - lithasa jayamaha
Index number - AS2023949
Project - practical 5 Q-4

(Write a program to print the size of char, float, double and long double data types in C)

*/


int main()
{
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    return 0;
}
