#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float fX_1,fX_2,fY_1,fY_2,fD_1,fD_2,f_distance;  //Declaring variables, Lets assume that the coordinates are A( x1,y1) and B(x2,y2)

    //Letting user to input the coordinates

    printf("Lets print the coordinates of point A\n\n");

    printf("Enter the X1 coordinate :");
    scanf("%f",&fX_1);

    printf("Enter the  Y1 coordinate :");
    scanf("%f",&fY_1);

    printf("\nLets print the coordinates of point B\n\n");

    printf("Enter the X2 coordinate :");
    scanf("%f",&fX_2);

    printf("Enter the Y2 coordinate :");
    scanf("%f",&fY_2);

    // Calculating the distance

    fD_1=fX_2-fX_1;
    fD_2=fY_2-fY_1;

    f_distance=sqrt(pow(fD_1,2) + pow(fD_2,2));


    // Display the distance between A coordinate and B coordinate

    printf("\nThe distance between A and B is : %0.2f",f_distance);

















    return 0;
}
