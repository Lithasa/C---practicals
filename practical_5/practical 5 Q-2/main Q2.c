#include <stdio.h>
#include <stdlib.h>

/*

Name - lithasa jayamaha
Index Number - AS2023949
project - practical 5 Q-2
(Write a Program to calculate and display the volume of a CUBE having its height
(h=10cm), width (w=12cm) and depth (8cm))

*/

int volumeOfCube(int height, int width,int depth)
{

    return height*width*depth;

}

int main()
{
    int height, width, depth, volume;
    height = 10;  // in cm
    width = 12;  // in cm
    depth = 8;  // in cm

    volume = volumeOfCube(height, width, depth);

    // Display the volume of the cube
    printf("The volume of the cube = %d (cm3)\n",volume);
    return 0;
}

