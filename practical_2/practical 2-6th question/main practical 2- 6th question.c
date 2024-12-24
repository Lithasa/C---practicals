#include <stdio.h>
#include <stdlib.h>


float volumeOfCylinder(float radius,float height);

int main()
{
    float volume,radius,height;

    //let the user input the values
    printf("Enter the radius of the cylinder : ");
    scanf("%f",&radius);

    //let the user input the values
    printf("Enter the height of the cylinder : ");
    scanf("%f",&height);

    volume = volumeOfCylinder(radius,height);

    //display the volume
    printf("The volume of the cylinder is :%.2f\n",volume);
    return 0;
}


//function call
float volumeOfCylinder(float r,float h){

    float vol;
    float PI=3.14285;

    vol= PI*r*r*h;
    return vol;


}
