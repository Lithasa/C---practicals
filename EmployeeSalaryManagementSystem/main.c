/*
Name - Lithasa Sehansi Anne Jayamaha
Index Number - AS2023949
Project -

Employee Salary Management System with Leave-Based Deduction

Scenario:

You are designing a salary management system where the salary increment is based on the number
of years an employee has worked, and deductions are based on the number of leave days taken.
You will use a switch statement to determine the increment based on years worked and apply a
fixed deduction per leave day.

Requirements:

1. Use a constant variable to define the base salary of employees.
2. Use a static variable to count the total number of salary calculations performed.
3. Use a switch statement to apply different increments based on the number of years
worked (up to a maximum of 10 years).
4. Deduct a fixed amount for each leave day taken.
5. Print the total number of salary calculations performed after each calculation

*/

#include <stdio.h>
#include <stdlib.h>

int calculateSalary(int numberOfYearsWorked, int leaveCount);
int calculateIncrementedSalary(int numberOfYearsWorked);

static int totalCalculations = 0; //A static variable to count the total number of salary calculations performed

int main()
{
    int empId;
    int final_Salary;
    int numberOfYearsWorked;
    int leaveCount;

    do  //A loop to perform the salary calculation while checking the validity of the employee ID
    {
        //Let the employer input his/her employee ID
        printf("Enter your employee ID - E_NO_");
        scanf("%d", &empId);

        if (empId == 0 || empId == -1) //checking the validity of the employee ID
        {
            break;
        }

        //Let the employer input
        printf("Enter the number of experienced years that you have: ");
        scanf("%d", &numberOfYearsWorked);

        if (numberOfYearsWorked > 10) //If the experienced years are greater than 10 , then display the ERROR message while ignore it and continue with the other calculation
        {
            printf("ERROR - maximum is 10 years of experience\n\n");
            continue;
        }


        //Let the employer input
        printf("Number of leaves (within a month): ");
        scanf("%d", &leaveCount);

        final_Salary = calculateSalary(numberOfYearsWorked, leaveCount); //Function call

        printf("Final salary for employee ID %d: Rs.%d\n\n", empId, final_Salary); //Display the final salary
        printf("Total salary calculations performed: %d\n\n", totalCalculations); //Display the total calculation performed

    }
    while (empId != 0 && empId != -1);   // Condition to continue looping



    printf("Total number of salary calculations performed: %d\n", totalCalculations); //Displaying the total number of calculations performed

    return 0;
}

//Function definition to calculate the incremented salary based on number of years of experience

 int calculateIncrementedSalary(int numberOfYearsWorked)
{

    int salaryIncrement = 0;

    switch (numberOfYearsWorked)
    {
    case 1:
        salaryIncrement = 2500; //One year of experience
        break;
    case 2:
        salaryIncrement = 5000; //Two years of experience
        break;
    case 3:
        salaryIncrement = 7500; //Three years of experience
        break;
    case 4:
        salaryIncrement = 10000; //Four years of experience
        break;
    case 5:
        salaryIncrement = 20000; //Five years of experience
        break;
    case 6:
        salaryIncrement = 25000; //Six years of experience
        break;
    case 7:
        salaryIncrement = 30000; //Seven years of experience
        break;
    case 8:
        salaryIncrement = 35000; //Eight years of experience
        break;
    case 9:
        salaryIncrement = 40000; //Nine years of experience
        break;
    case 10:
        salaryIncrement = 50000; //Ten years of experience
        break;
    default:

        printf("ERROR - maximum is 10 years of experience\n"); // If someone has more than more than 10 years of experience, it will give and error message
        break;

    }


    printf("Increment amount - Rs.%d\n",salaryIncrement); //Display the relevant incremented salary based on their number of years of experience
    return salaryIncrement;
}

//Function definition to calculate the salary

 int calculateSalary(int numberOfYearsWorked, int leaveCount)
{
    int const baseSalary = 50000; //Base salary for each employer
    int bonusSalary = calculateIncrementedSalary(numberOfYearsWorked); //Function call
    int const leaveDeductionPerDay = 500; //Deducted salary amount per leave day
    int finalSalary;

    int deductionAmount = (leaveDeductionPerDay * leaveCount); // Deduction amount calculation
    int bonusPlusSalary = baseSalary + bonusSalary; // Salary increment + base salary

    int max_leaveDays = 10;
    if (leaveCount <= max_leaveDays) //Displaying the deducted amount, comparing with the maximum leave days (per month)
    {

        printf("Deducted amount - Rs.%d\n",deductionAmount);
        finalSalary = bonusPlusSalary  - deductionAmount ; //Final salary calculation (after the deduction)
    }
    else
    {

        printf("Deducted amount - Rs.%d\n",(deductionAmount*2 ));
        finalSalary = (bonusPlusSalary  - (deductionAmount*2)); //Final salary calculation (after the deduction)
    }





    totalCalculations++;
    return finalSalary;
}
