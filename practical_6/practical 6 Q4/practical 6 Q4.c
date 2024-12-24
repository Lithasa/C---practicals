#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Enter the value for x : "); // display the multiplication , until the given value "X"
    scanf("%d",&x);

    for(int i = 1; i<=x ; i++)
    {

        for(int j = 1; j<=10; j++)
        {

            printf("%d x %d = %d\n",i,j, i*j); //display the product of values
        }

        printf("\n");

    }
    return 0;
}
