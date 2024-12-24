#include <stdio.h>
#include <stdlib.h>

/*
Name -  lithasa jayamaha
Index Number - AS2023949
Project - practical 5 Q-8
(Write a program to check whether the entered year is leap year or not (a year is leap if it
is divisible by 4 and divisible by 100 or 400.))
*/


int findingleapYear(int y);

int main()
{
    int year, leapYear;

    //let the user input the year
    printf("Enter the year : ");
    scanf("%d",&year);

    leapYear = findingleapYear( year);  //function call

    return 0;
}

//function definition

int findingleapYear(int y)
{

    if ((y % 4==0 && y % 100!=0) || y %400==0)  /* A year is a leap year if it is divisible by 400,
                                                or it is divisible by 4 but not by 100 or else it is divisible by 100 but not by4*/
    {

        printf("%d is a Leap Year",y);
    }
    else
    {

        printf("%d is not a Leap Year",y);
    }
    return y;

}
