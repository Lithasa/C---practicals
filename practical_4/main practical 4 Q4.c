#include <stdio.h>
#include <stdlib.h>

//Name -Lithasa Jayamaha
//Index - AS 2023949

int main()
{
    int month,day,year;   // Declaring variables

    //Letting user to input the information

    printf("Enter the day :");
    scanf("%d",&day);

    printf("Enter the month :");
    scanf("%d",&month);

    printf("Enter the year :");
    scanf("%d",&year);

    //Displaying the relevant date(output)

    printf("The date is %02d/%02d/%d",day,month,year);

    return 0;
}
