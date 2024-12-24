#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for(i = 0; i<=4; i++) //first pattern with "*"
    {

        for(j=1; j<=i; j++)
        {

            printf("*");
        }

        printf("\n");
    }
    printf("\n\n");

    for(i = 0; i<=4; i++)  // second pattern with numbers
    {

        for(j=1; j<=i; j++)
        {

            printf("%d",i);
        }

        printf("\n");
    }

    return 0;
}
