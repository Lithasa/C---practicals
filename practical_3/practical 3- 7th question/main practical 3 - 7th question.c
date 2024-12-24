#include <stdio.h>
#include <stdlib.h>


float sumOfNumbers(float n1,float n2);
float averageOfNumbers(float n1,float n2);

int main()
{
    float num1, num2, sum, average;

    //let user input the number
    printf("Enter the 1st number: ");
    scanf("%f",&num1);

    //let user input the number
    printf("Enter the 2nd number: ");
    scanf("%f",&num2);

    sum = sumOfNumbers(num1,num2);
    average = averageOfNumbers(num1,num2);

    printf("The sum of %.1f and %.1f =%.2f \n",num1,num2,sum);
    printf("The average of %.1f and %.1f =%.2f\n",num1,num2,average);
    return 0;
}

//function call
float sumOfNumbers(float n1,float n2)
{

    float s;
    s = n1+n2;
    return s;
}

//function call
float averageOfNumbers(float n1,float n2)
{

    float avg;
    avg = (n1+n2)/2;
    return avg;
}
