#include <stdio.h>
#include <stdlib.h>



float averageConsumption(float distance,float fuelSpent);

int main()
{
    float totalDistance, fuelInLiters,bikeAvgConsumption;

    //let user to input data
    printf("Enter the distance that bike have traveled : ");
    scanf("%f",&totalDistance);

    //let user to input data
    printf("Enter the fuel that spent: ");
    scanf("%f",&fuelInLiters);

    //calculate the average consumption
    bikeAvgConsumption = averageConsumption(totalDistance, fuelInLiters );

    //display the result
    printf("The bike's Average Consumption is: %.2f (km/lt)\n",bikeAvgConsumption);


    return 0;
}

//calling the function

float averageConsumption(float distance,float fuelSpent)
{

    float avgConsumption;

    avgConsumption = distance/fuelSpent ;

    return avgConsumption;

}
