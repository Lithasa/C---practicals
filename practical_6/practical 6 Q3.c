#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{

    int num,sum=0;
    float avg;

    printf("Enter 10 integers:\n");

    for( int i = 0; i < 10; i++)
    {

        scanf("%d",&num);
        sum += num;
    }

    avg = sum / 10.0;

    printf("Sum : %d\n", sum);
    printf("Average : %.2f\n", avg);

    return 0;
}


