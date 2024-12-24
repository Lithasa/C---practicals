#include <stdio.h>
#include <stdlib.h>


float volumeOFCube(float sideLength);

int main()
{
    float lenghtSize, cubeVolume;

    //let the user enter the value
    printf("Enter the length size of the cube: ");
    scanf("%f",&lenghtSize);

    cubeVolume = volumeOFCube(lenghtSize);

    //display the volume
    printf("The volume of the cube is:%.2f \n",cubeVolume );

    return 0;
}

//function call
float volumeOFCube(float sideLength)
{

    float vol;

    vol = sideLength*sideLength*sideLength ;
    return vol;

}
