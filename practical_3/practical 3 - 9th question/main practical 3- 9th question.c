#include <stdio.h>
#include <stdlib.h>

static int max(int a, int b);

int main()
{
    int value1, value2, result;

    //let user input the value
    printf("Enter the 1st value:");
    scanf("%d",&value1);

    //let user input the value
    printf("Enter the 2nd value :");
    scanf("%d",&value2);

    result = max(value1, value2);

    //display the largest value
    printf("From %d and %d , the largest number is: %d\n\n",value1,value2,result);
    return 0;
}

//function call
static int max(int a, int b)
{

    return (a > b) ? a : b;
}
