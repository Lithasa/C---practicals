#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("***Integer Arrays***\n\n");
    integerArray1And2();

    printf("\n");

    printf("***String Arrays***\n\n");
    stringArray1And2();

    return 0;
}

void integerArray1And2()
{

    int arraySize;

    printf("Enter the array size - ");
    scanf("%d",&arraySize);

    int integerArray1[arraySize];
    int integerArray2[arraySize];

    for(int n=0; n < arraySize; n++)
    {

        printf("Enter the %d element - ",n);
        scanf("%d",&integerArray1[n]);

    }
    printf("The integer_array_1 - ");
    for(int i=0; i <arraySize; i++)
    {

        printf("%d ",integerArray1[i]);
    }

    printf("\n\n");

    for(int i=0; i <arraySize; i++)
    {

        integerArray2[i] = integerArray1[i];
    }
    printf("The integer_array_2 - ");
    for(int i=0; i <arraySize; i++)
    {

        printf("%d ",integerArray2[i]);
    }

    printf("\n\n");


    return 0;

}

void stringArray1And2()
{

    int arraySize;

    printf("Enter the array size - ");
    scanf("%d",&arraySize);

    char stringArray1[arraySize];
    char stringArray2[arraySize];

    for(int n=0; n < arraySize; n++)
    {

        printf("Enter the %d element - ",n);
        scanf(" %c",&stringArray1[n]);

    }
    printf("The string_array_1 - ");
    for(int j=0; j <arraySize; j++)
    {

        printf(" %c ",stringArray1[j]);
    }

    printf("\n\n");

    for(int j=0; j <arraySize; j++)
    {

        stringArray2[j] = stringArray1[j];
    }
    printf("The string_array_2 - ");
    for(int j=0; j <arraySize; j++)
    {

        printf(" %c ",stringArray2[j]);
    }

    printf("\n\n");


    return 0;





}
