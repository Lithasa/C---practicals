#include <stdio.h>
#include <stdlib.h>

/*
Name - lithasa jayamaha
Index Number - AS2023949
Project - practical 5 Q-10
(10. Write C code to produce the output as shown below
Contents of x before | Expression| Value of expression| contents of x after
         5           |  x++      |      5             |
         5           |  x--      |      5             |
         5           |  ++x      |      6             |
         5           |  --x      |      4             |
)
*/



int main()
{
    int x;
    int result;

    // Printing the header of the table
    printf("Contents of x before | Expression | Value of Expression | Contents of x after\n\n");

    //  x++
    x = 5;
    result = x++;
    printf("%-20d | x++        | %-20d|  %-20d\n", 5, result, x);

    //  x--
    x = 5;
    result = x--;
    printf("%-20d | x--        | %-20d|  %-20d\n", 5, result, x);

    //  ++x
    x = 5;
    result = ++x;
    printf("%-20d | ++x        | %-20d|  %-20d\n", 5, result, x);

    //  --x
    x = 5;
    result = --x;
    printf("%-20d | --x        | %-20d|  %-20d\n", 5, result, x);

    return 0;
}





