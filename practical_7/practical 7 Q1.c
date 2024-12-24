#include <stdio.h>
#include <stdlib.h>

/*
Name - lithasa jayamaha
Index num - AS2023949
*/


int main()
{
    int n = 1;
    int word = 0;

    //outer loop
    for(int i=1; i <= 5; i++)
    {
        // switch case for the relevant pattern
        switch (i)
        {
        case 1: word = 3; // display 123 Hello world
                break;
        case 2: word = 6; // display 123456 Hello world
                break;
        case 3: word = 9; // display 123456789 Hello world
                break;
        case 4: word = 12; // display 123456789101112 Hello world
                break;
        case 5: word = 15; //display 123456789101112131415 Hello world
                break;
        }


        //inner loop
        for(int j=1 ; j <= word ; j++)
        {

            printf("%d",n); // print the value of n
            n++; // increments n

            if(n==(word +1)) // (if(n%(word +1)==0)--> this is also can use ) numbers will start to print again from 1
            {
                n =1;
            }
        }
        printf("Hello world\n");
    }
    return 0;
}

