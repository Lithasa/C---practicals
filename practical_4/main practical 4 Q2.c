#include <stdio.h>
#include <stdlib.h>

//Name- Lithasa Jayamaha
//Index- AS 2023949

//Question-2


int main()
{
    int intBread, intEggs, intButter, intMilk, intJam;
    int intPrice_bread = 150, intPrice_eggs = 100, intPrice_butter = 800, intPrice_milk = 500, intPrice_jam = 500;
    float fTotal_price_bread, fTotal_price_eggs, fTotal_price_butter, fTotal_price_milk, fTotal_price_jam, fTotal_bill;

    // Display items and prices

    printf("-------------------------\n");
    printf("|   %-10s - %4d   |\n", "bread",intPrice_bread );
    printf("|   %-10s - %4d   |\n", "eggs", intPrice_eggs);
    printf("|   %-10s - %4d   |\n", "butter", intPrice_butter);
    printf("|   %-10s - %4d   |\n", "milk", intPrice_milk);
    printf("|   %-10s - %4d   |\n", "jam",intPrice_jam );
    printf("-------------------------\n");

    // Let the user input the required quantities

    printf("Enter the quantity of bread purchased: ");
    scanf("%d", &intBread);

    printf("Enter the quantity of eggs purchased: ");
    scanf("%d", &intEggs);

    printf("Enter the quantity of butter purchased: ");
    scanf("%d", &intButter);

    printf("Enter the quantity of milk purchased: ");
    scanf("%d", &intMilk);

    printf("Enter the quantity of jam purchased: ");
    scanf("%d", &intJam);


    // Calculate total prices

    fTotal_price_bread = intBread * intPrice_bread;
    fTotal_price_eggs = intEggs * intPrice_eggs;
    fTotal_price_butter = intButter * intPrice_butter;
    fTotal_price_milk = intMilk * intPrice_milk;
    fTotal_price_jam = intJam * intPrice_jam;


    // Calculate total bill amount

    fTotal_bill = fTotal_price_bread + fTotal_price_eggs + fTotal_price_butter + fTotal_price_milk + fTotal_price_jam;

    // Print the bill summary

    printf("\n----------------------BILL SUMMARY-----------------------\n");
    printf("SL NO.\t ITEM NAME\t QTY\t PRICE\n");
    printf("---------------------------------------------------------\n");
    printf("1.\t bread\t \t%d\t %.2f\n", intBread, fTotal_price_bread);
    printf("2.\t eggs\t \t%d\t %.2f\n", intEggs, fTotal_price_eggs);
    printf("3.\t butter\t \t%d\t %.2f\n",intButter,fTotal_price_butter);
    printf("4.\t milk\t \t%d\t %.2f\n", intMilk,fTotal_price_milk);
    printf("5.\t jam\t \t%d\t %.2f\n", intJam,fTotal_price_jam);
    printf("---------------------------------------------------------\n");
    printf("TOTAL BILL AMOUNT = %.2f\n", fTotal_bill);

    printf("---------------------------------------------------------\n");
    printf("......................HAPPY SHOPPING.....................\n");






    return 0;
}
