#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *intPointerPtr, intNumber;


    printf("Enter the integer number: ");
    scanf("%d",&intNumber);


    printf("Address of the variable: %p\n", &intNumber);
    printf("Value of the variable: %d\n", intNumber);

    intPointerPtr = &intNumber;

    printf("Address of the pointer : %p\n", intPointerPtr );
    printf("Content of the pointer : %d\n", *intPointerPtr );

    intNumber = 32;

    printf("Address of the pointer : %p\n", intPointerPtr );
    printf("Content of the pointer : %d\n", *intPointerPtr );

    *intPointerPtr = 154;

    printf("Address of the variable: %p\n", &intNumber);
    printf("Value of the variable: %d\n", intNumber);

    return 0;
}
