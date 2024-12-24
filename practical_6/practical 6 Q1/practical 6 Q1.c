#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum ;

    printf("Enter two integer numbers : ");
    scanf("%d %d",&num1,&num2);

    sum = num1+num2;

    if(num1==30 || num2==30 ||sum==30)
    {

        printf("True\n"); //displays "true" if one of the entered numbers =30 or if their sum =30
    }
    else
    {
        printf("False\n"); //displays "flase" if any of the entered numbers are not equal to 30 or their sum is not equal to 30
    }

    return 0;
}
