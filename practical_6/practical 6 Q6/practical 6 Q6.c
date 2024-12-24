#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    unsigned long long value = 0, sum = 0;

    printf("Enter the required number of terms : ");
    scanf("%d",&n);

    printf("The series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%llu", value); // Print the current term
        if (i < n)
        {
            printf(" + ");
        }
        sum += value;
        value = value * 10 + 1; // calculating the next term
    }

    printf("\nSum of the series: %llu\n", sum);




    return 0;
}
