#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Enter two integer numbers :");
    scanf("%d %d",&num1,&num2);

    if ((num1 >= 100 && num1 <= 200) || (num2 >= 100 && num2 <= 200))
    {

        if (num1 >= 100 && num1 <= 200)
        {

            printf("The %d is in the range of 100 - 200\n", num1);
        }

        if (num2 >= 100 && num2 <= 200)
        {

            printf("The %d is in the range of 100 - 200\n", num2);
        }
    }
    else
    {
        printf("Neither %d nor %d is in the range of 100 - 200\n", num1, num2);
    }

    return 0;
}
