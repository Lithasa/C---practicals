#include <stdio.h>
#include <stdlib.h>



//function definition for the first method
void firstMethod(float marks)
{
    if (marks >= 80)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 45)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 30)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }
}

//function definition for the second method
void secondMethod(float marks)
{
    if (marks < 30)
    {
        printf("Grade: F\n");
    }
    else if (marks < 45)
    {
        printf("Grade: D\n");
    }
    else if (marks < 60)
    {
        printf("Grade: C\n");
    }
    else if (marks < 80)
    {
        printf("Grade: B\n");
    }
    else
    {
        printf("Grade: A\n");
    }
}
int main()
{
    float marks;

    printf("---Using the first method---\n\n");

    //let the user input the marks for the first method
    printf("Enter the marks: ");
    scanf("%f", &marks);

    //display the relevant grade
    printf("Using the first method the grade:\n");
    firstMethod(marks);  //function calling

    printf("\n");

    printf("---Using the second method---\n\n");

    //let the user the marks for the second method
    printf("Enter the marks: ");
    scanf("%f", &marks);

    //display the relevant grade
    printf("Using the second method the grade:\n");
    secondMethod(marks);  //function calling


    return 0;
}
