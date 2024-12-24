#include <stdio.h>
#include <stdlib.h>

int main()
{
    integerArrayReverseOrder();
    printf("\n\n");
    stringArrayReverseOrder();



    return 0;
}

void integerArrayReverseOrder(){

    int arraySize ;

    printf("Enter the array size - ");
    scanf("%d",&arraySize);

    int integerArray[arraySize];

    for(int n = 0; n < arraySize; n++){

        printf("Enter the %d element - ",n);
        scanf("%d", &integerArray[n]);
    }

    printf("The integer Array : ");
    for(int i=0; i<arraySize; i++){

         printf("%d ",integerArray[i]);
    }

    printf("\n");

    printf("The reverse order of the integer array : ");
     for(int i=(arraySize-1) ; i >= 0; i--){

         printf("%d ",integerArray[i]);
    }


    printf("\n\n");

    int integer_Array [5] = {1,2,3,4,5};

    printf("Elements of integer array : ");
    for(int j=0; j<5; j++){

         printf("%d ",integer_Array[j]);
    }

    printf("\n");

    printf("The reverse order of the integer array : ");
     for(int j=4 ; j >= 0; j--){

         printf("%d ",integer_Array[j]);
    }

    return 0;

}

void stringArrayReverseOrder(){

    int arraySize ;

    printf("Enter the array size - ");
    scanf("%d",&arraySize);

    char stringArray[arraySize];

    for(int j = 0; j < arraySize; j++){

        printf("Enter the %d element - ",j);
        scanf(" %c",&stringArray[j]);
    }

    printf("The string Array : ");
    for(int k=0; k<arraySize; k++){

         printf(" %c ",stringArray[k]);
    }

    printf("\n");

    printf("The reverse order of the string array : ");
     for(int k=(arraySize-1) ; k >= 0; k--){

         printf("%c ",stringArray[k]);
    }


    printf("\n\n");

    char string_Array [5] = {'A','B','C','D','E'};

    printf("Elements of string array : ");
    for(int j=0; j<5; j++){

         printf("%C ",string_Array[j]);
    }

    printf("\n");

    printf("The reverse order of the string array : ");
     for(int j=4 ; j >= 0; j--){

         printf("%c ",string_Array[j]);
    }

    return 0;











}
