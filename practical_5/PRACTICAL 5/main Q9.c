#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Name - lithasa jayamaha
Index Number - AS2023949
Project - practical 5 Q-9
(Write a program to read the values of coefficients a, b and c of a quadratic equation
ax2+bx+c=0 and find roots of the equation.)

*/



float findRoots(float a, float b, float c);

int main()
{
    float a, b, c;

    // let the user to enter coefficients a, b and c
    printf("Enter coefficient a : ");
    scanf("%f", &a);

    printf("Enter coefficient b : ");
    scanf("%f", &b);

    printf("Enter coefficient c : ");
    scanf("%f", &c);

    // Displaying the what the quadratic equation is:
    printf("The quadratic equation is %.0f(x^2)+%.0fx+%.0f\n\n",a,b,c);


    // Checking if the entered coefficients form a quadratic equation
    if (a == 0)
    {
        printf("The value of 'a' should not be 0 in a quadratic equation.\n");
    }
    else
    {
        // Function call to find the roots
        findRoots(a, b, c);
    }

    return 0;
}

// Function to calculate and print the roots of the quadratic equation
float findRoots(float a, float b, float c)
{

    float discriminant, root1, root2, realPart, imagPart;

    discriminant = b*b - 4*a*c;

    // for real and different roots
    if (discriminant > 0)
    {

        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different\n\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }

    // for real and equal roots
    else if (discriminant == 0)
    {

        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal\n\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }

    // If roots are not real
    else
    {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and different\n\n");
        printf("Root1 = %.2f+%.2fi\n",realPart, imagPart);
        printf("Root2 = %.2f %.2fi\n ", realPart, imagPart);
    }
    return discriminant;
}

