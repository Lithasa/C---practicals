#include <stdio.h>
#include <stdlib.h>


// Name -Lithasa Jayamaha
//Index - AS2023949



int main()
{
    float fCredit_ICT107,fCredit_ICT105,fCredit_ICT108;  //declaring variables for credit values for each subject
    float fTotal_Credit,ftotal_Credit_obtained,fGPA;



    // Let the user enter the credits for each value

    printf("Enter the credits obtained for ICT 107 1.0:2.0  - ");
    scanf("%f",&fCredit_ICT107);

    printf("Enter the credits obtained for ICT 105 1.5:2.0  - ");
    scanf("%f",&fCredit_ICT105);

    printf("Enter the credits obtained for ICT 108 2.0:2.0  - ");
    scanf("%f",&fCredit_ICT108);

    //Calculating total credit that have obtained by the user

    ftotal_Credit_obtained= fCredit_ICT105+fCredit_ICT107+fCredit_ICT108;


    // Calculating the GPA

    fGPA=(fCredit_ICT107*1.0 + fCredit_ICT105*1.5 + fCredit_ICT108*2.0)/ftotal_Credit_obtained;

    //Displaying the GPA

     printf("The GPA is :%f\n\n",fGPA);

    // Grading according to the GPA

    if(fGPA>=3.5){
        printf("Grade : 1st class\n");
        } else if (fGPA>=3.0){
            printf("Grade : 2nd upper\n");
        } else if (fGPA>=2.5){
            printf("Grade : 2nd lower\n");
        } else if (fGPA>=2.0){
            printf("Grade : Pass\n");
        } else {
            printf("Grade: Fail\n");
            }


    return 0;
}
