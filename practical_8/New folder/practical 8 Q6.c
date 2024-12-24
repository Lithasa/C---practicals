#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][3];

    printf("Enter the elements for 3x3 array : \n");

    for(int i=0; i<3; i++){

        for(int j =0; j<3 ; j++){

            printf("The element [%d][%d] :",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    printf("The 3x3 matrix is:\n\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
