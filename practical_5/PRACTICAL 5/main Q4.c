#include <stdio.h>
#include <stdlib.h>

/*
Name - lithasa jayamaha
Index number - AS2023949
Project - practical 5 Q-4

(Print the value of y for given x=2 & z=4 and analyze the output.
a. y = x>z;
b. y= x>z? x:z;
c. y = x&z;
d. y= x>>2 + z<<1;)

*/


int main()
{
    int x = 2;
    int z = 4;
    int y;

    printf("Here x = 2 and z = 4\n\n");

//(a)y = x>z;
    y = a(x, z);

    printf("y = x>z ---> %d\n",y); // y will be 0 because 2 is not greater than 4

//(b) y= x>z? x:z;
    y = b(x, z);

    printf("y = x>z? x:z ---> %d\n",y); // y will be 4 because 2 is not greater than 4, so z is assigned to y

//(c) y = x&z;
    y = c(x, z);

    printf("y = x&z ---> %d\n",y); // y will be 0 because 2 & 4 (binary 0010 & 0100) results in 0000 (0)

//(d) y= x>>2 + z<<1;
    y = d(x, z);

    printf("y = x>>2 + z<<1 ---> %d\n\n",y); // y will be 8 because (x >> 2) is 0 and (z << 1) is 8
    return 0;
}

// function to calculate y = x>z
int a(int x, int z)
{

    return x>z ;
}

// function to calculate y = x>z ? x:z
int b(int x, int z)
{

    return x>z ? x:z ;
}

// function to calculate y = x&z
int c(int x, int z)
{

    return x & z ;
}

// function to calculate y = x>>2 + z<<1
int d(int x, int z)
{
    return (x>>2)+(z<<1) ;
}
