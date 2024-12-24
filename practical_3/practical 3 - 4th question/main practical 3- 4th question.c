#include <stdio.h>
#include <stdlib.h>


int addition(int num1,int num2);
int subtract(int num1, int num2);
int division(int num1,int num2);

int main()
{
    int n1, n2, addNumbers, subtractNumbers, divideNumbers;;


    //let the user input the 1st number
    printf("Enter the first number: ");
    scanf("%d",&n1);

    //let the user input the 2nd number
    printf("Enter the second number: ");
    scanf("%d",&n2);

    addNumbers = addition(n1,n2);
    subtractNumbers = subtract(n1,n2);
    divideNumbers = division(n1,n2);

    printf("The addition of %d and %d is: %d\n",n1,n2,addNumbers);
    printf("The subtraction of %d and %d is: %d\n",n1,n2,subtractNumbers);
    printf("The division of %d/%d is: %d\n",n2,n1,divideNumbers);

    return 0;
}

//function call
int addition(int num1,int num2)
{

    int add;
    add = num1+num2;
    return add;
}

//function call
int subtract(int num1, int num2)
{

    int sub;
    sub = num2 - num1;
    return sub;
}

//function call
int division(int num1,int num2)
{

    int div;
    div = num2/num1;
    return div;
}
