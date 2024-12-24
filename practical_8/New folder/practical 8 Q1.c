#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerArray [5] = {1,2,3,4,5};
    char stringArray [5] = {'A','B','C','D','E'};

    printf("Elements of integer arryay : ");
    for(int i=0; i<5; i++){

         printf("%d ",integerArray[i]);
    }

    printf("\n");

    printf("Elements of string array : ");
    for(int j=0; j<5; j++){

         printf("%c ",stringArray[j]);
    }


    return 0;
}
