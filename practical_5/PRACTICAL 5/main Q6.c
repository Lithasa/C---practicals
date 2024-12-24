#include <stdio.h>
#include <stdlib.h>


/*
Name - lithasa jayamaha
Index number - AS2023949
project - practical 5 Q6

Given X=3.0, y=12.5, z= 523.3, A=300.0, B=1200.5, C=5300.3,
Write a program to display the following:

x  y  z=    3.0|     12.5|     523.3|
A  B  C=  300.0|   1200.5|    5300.3|
----------------------------------------
x  y  z=   |3.0     |12.5     |523.3
A  B  C=   |300.0   |1200.5   |5300.3

*/




int main()
{
    float X = 3.0, y = 12.5, z = 523.3, A = 300.0, B = 1200.5, C = 5300.3;

    printf("%4 X %4 y %4 z= %10.1f|%10.1f|%10.1f|\n",X,y,z);
    printf("%4 A %4 B %4 C= %10.1f|%10.1f|%10.1f|\n",A,B,C);

    printf("--------------------------------------------------\n");

    printf("%4 X %4 y %4 z=  |%-10.2f|%-10.2f|%-10.2f\n",X,y,z);
    printf("%4 A %4 B %4 C=  |%-10.2f|%-10.2f|%10.2f\n",A,B,C);

    return 0;
}
