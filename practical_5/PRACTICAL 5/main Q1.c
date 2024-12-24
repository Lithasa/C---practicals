#include <stdio.h>
#include <stdlib.h>
/*
Name - Lithasa Jayamaha
Index Number - AS2023949
Project - Practical 5 Q-1

(Write a program to calculate the distance travel using the given formula below:
S = vt + ½ at2
In your program ask user to input through keyboard the value of: v = initial velocity a =
acceleration t = time of travel)

*/


float distanceTravel(float v,float t, float a);   //assigned variables

int main()
{
    float velocity, timeOfTravel, distance_S, acceleration;

    //let the user input the values through keyboard
    printf("Input the VELOCITY : ");
    scanf("%f",&velocity);

    //let the user input the values through keyboard
    printf("Input the ACCELERATION : ");
    scanf("%f",&acceleration);

    //let the user input the values through keyboard
    printf("Input the TIME of travel : ");
    scanf("%f",&timeOfTravel);

    distance_S = distanceTravel(velocity,timeOfTravel,acceleration);  //function call

    printf("So the distance of the travel with %.1f velocity, %.1f acceleration and %.1f time is  : %.2f(m)\n\n",velocity,acceleration,timeOfTravel,distance_S);
    return 0;
}

//function definition
float distanceTravel(float v,float t, float a)
{

    float s;

    s = (v*t) +1/2*a*t*t;
    return s;
}
