#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intNumber ;
    int *intPointer ;

    printf("Enter the integer number : ");
    scanf("%d",&intNumber);

    intPointer = &intNumber;

    printf("Value of the pointer is:%p", intPointer );
           return 0;
}
