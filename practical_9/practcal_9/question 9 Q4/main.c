#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intNumber ;
    int *intPointer ;

    printf("Enter the integer number : ");
    scanf("%d",&intNumber);

    intPointer = &intNumber;

    calculateSquare(intPointer);


    printf("The square of the number is : %d",*intPointer);


    return 0;
}

void calculateSquare(int *numPointer)
{
    *numPointer = (*numPointer) * (*numPointer);
}
