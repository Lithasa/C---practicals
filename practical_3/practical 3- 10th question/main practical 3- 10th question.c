#include <stdio.h>
#include <stdlib.h>



int max(int a, int b,int c );

int main()
{
    int value1, value2, value3, result ;

    printf("Enter the value1 :");
    scanf("%d",&value1);

    printf("Enter the value2:");
    scanf("%d",&value2);

    printf("Enter the value3:");
    scanf("%d",&value3);

    result = max(value1,value2,value3);

    printf("The largest number from %d,%d,%d is: %d\n\n",value1,value2,value3,result);
    return 0;
}

int max(int a, int b,int c )
{
    int largest = a;
    if (b > largest)
    {
        largest = b;
    }
    if (c > largest)
    {
        largest = c;
    }
    return largest;
}
