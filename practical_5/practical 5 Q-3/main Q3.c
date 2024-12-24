#include <stdio.h>
#include <stdlib.h>

/*
Name - lithasa jayamaha
Index number - AS2023949
Project - practical 5 Q-3
(Write a program to check odd or even number (a) using modulus operator (b) using
bitwise operator (c) using conditional operator.)

*/


// Function to check odd or even using modulus operator
void checkOddEvenModulus(int number) {
    if (number % 2 == 0) {
        printf("%d is even (modulus operator)\n", number);
        }
    else {
        printf("%d is odd (modulus operator)\n", number);
    }
}

// Function to check odd or even using bitwise operator
void checkOddEvenBitwise(int number) {
    if ((number & 1) == 0) {
        printf("%d is even (bitwise operator)\n", number);
    }
    else {
        printf("%d is odd (bitwise operator)\n", number);
    }
}

// Function to check odd or even using conditional operator
void checkOddEvenConditional(int number) {
    if(number % 2 == 0) {
    printf("%d is even (conditional operator)\n", number);
    }
    else{

     printf("%d is odd (conditional operator)\n", number);
    }
}

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number : ");
    scanf("%d", &number);

    // Check if the number is odd or even using different methods
    checkOddEvenModulus(number);
    checkOddEvenBitwise(number);
    checkOddEvenConditional(number);

    return 0;
}
