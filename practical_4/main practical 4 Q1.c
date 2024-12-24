#include <stdio.h>
#include <stdlib.h>
// Name- lithasa jayamaha
//Index- AS2023949


//Question-1

//Addition

int  add(n1,n2){ //Add the "add" function to get sum of two numbers
return n1+n2;

}
int question1_addition(){
    int intNum1,intNum2;
    printf("***Addition of two numbers***\n\n");

    printf("Enter the Number1: "); //prompt user to input a value
    scanf("%d",&intNum1);

    printf("Enter the Number2: "); //prompt user to input a value
    scanf("%d",&intNum2);

    int addition= add(intNum1,intNum2);// parsing the values to the add() function

    printf("The Addition  of %d and %d is :%d\n\n",intNum1,intNum2,addition);

}

//Subtraction

int subtract(n1,n2){ // getting the difference between two numbers
    return n1-n2;
}
int question1_subtraction(){
    int intNum_1,intNum_2;
    printf("***Subtraction of two numbers***\n\n");

      printf("Enter the Number1: "); //prompt user to input a value
      scanf("%d",&intNum_1);

      printf("Enter the Number1: "); //prompt user to input a value
      scanf("%d",&intNum_2);

      int sub= subtract(intNum_1,intNum_2);// parsing the values to the subtract() function


      printf("The Subtraction of %d and %d is :%d\n\n",intNum_1,intNum_2,sub);

}

//Multiplication

int multiplies(n1,n2){ //getting the multiplication of two numbers
    return n1*n2;
}

int question1_mul(){
    int intN1,intN2;
    printf("***Multiplication of two numbers***\n\n");

      printf("Enter the Number1: "); //prompt user to input a value
      scanf("%d",&intN1);

      printf("Enter the Number1: "); //prompt user to input a value
      scanf("%d",&intN2);

      int multi= multiplies(intN1,intN2);// parsing the values to the multiplies() function


      printf("The Multiplication of %d and %d is :%d\n\n",intN1,intN2,multi);

}

//Division

int divides(n1,n2){ //getting the division of two numbers
    return n1/n2;
}

int question1_div(){
    int intN_1,intN_2;
    printf("***Division of two numbers***\n\n");

      printf("Enter the Number1: "); //prompt user to input a value
      scanf("%d",&intN_1);

      printf("Enter the Number1: "); //prompt user to input a value
      scanf("%d",&intN_2);

      int div= divides(intN_1,intN_2);// parsing the values to the divides() function

      printf("The Division of %d and %d is :%d\n\n",intN_1,intN_2,div);


}




int main()
{
    question1_addition();
    question1_subtraction();
    question1_mul();
    question1_div();

    return 0;
}
