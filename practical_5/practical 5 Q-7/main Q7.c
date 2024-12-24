#include <stdio.h>
#include <stdlib.h>

/*
Name - lithasa jayamaha
Index number - AS2023949
project - practical 5 Q7

(Write a program to find the largest and smallest among three entered numbers and also
display whether the identified largest/smallest number is even or odd)
*/




int LargestNumber(int a, int b, int c);
int evenOddLargestNumber(int large);

int main()
{
    int num1, num2, num3, largest; //assigning variables

    //let the user input the value1
    printf("Enter the NUMBER 1 : ");
    scanf("%d",&num1);

    //let the user input the value2
    printf("Enter the NUMBER 2 : ");
    scanf("%d",&num2);

    //let the user input the value3
    printf("Enter the NUMBER 3 : ");
    scanf("%d",&num3);

    largest = LargestNumber(num1,num2,num3); //function call

    evenOddLargestNumber(largest); //function call

    return 0;
}

//finding the largest number(function definition)
int LargestNumber(int a, int b, int c){

    int large = a ;

    if(large<b ){

        large = b;
    }
    if(large<c){

        large = c;
    }
    return large;
}

//finding whether the largest number is even or odd(function definition)
int evenOddLargestNumber(int large){

    if(large %2 ==0){

        printf("%d is the largest number and it is even",large);
    }
    else{
         printf("%d is the largest number and it is odd",large);
    }
}
