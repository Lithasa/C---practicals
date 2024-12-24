#include <stdio.h>
#include <stdlib.h>


float perimeterOfSquare(float h);
float areaOfSquare(float h);

int main()
{
    float height, area, perimeter;

    printf("Enter the height of the square: ");
    scanf("%f",&height);

    area = areaOfSquare(height);
    perimeter = perimeterOfSquare(height);

    printf("The area of the square is:%.2f \n",area);
    printf("The perimeter of the square is:%.2f \n",perimeter);

    return 0;
}

//function call
float areaOfSquare(float h)
{

    float a;
    a = h*h;
    return a;
}

//function call
float perimeterOfSquare(float h)
{

    float p;
    p = (h*4);
    return p;
}


