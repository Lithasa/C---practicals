#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *arrayPoint = arr;

    for (int i = 0; i < 5; i++)
    {

        printf("Value at arr[%d] = %d\n", i, *(arrayPoint + i));
        printf("Memory address of arr[%d] = %p\n", i, *(arrayPoint + i));
    }
    return 0;
}
