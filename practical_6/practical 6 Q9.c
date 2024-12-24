#include <stdio.h>
#include <stdlib.h>


//functions to call a upon different catogories
int theCategories();
void menCategory();
void womenCategory();
void kidsCategory();

int main()
{
    //the switch statement to run the necessary function to the user's input
    switch (theCategories())
    {
    case 1:
        menCategory();
        break;
    case 2:
        womenCategory();
        break;
    case 3:
        kidsCategory();
        break;
    default:
        printf("action is not found!!\n");
    }


    return 0;
}

//defining the functions
int theCategories()
{
    int category;

    printf("---Categories---\n\n");
    printf("1-Men\n");
    printf("2-Women\n");
    printf("3-Kids\n");
    printf("enter the desired category number:");
    scanf("%d",&category);
    return category;
}

void menCategory()
{
    printf("\nMens' category\n");
    printf("1 - Shorts\n");
    printf("2 - Tshirts\n");
    printf("3 - Trousers\n");
}

void womenCategory()
{
    printf("\nWomens' category\n");
    printf("1 - Blouses\n");
    printf("2 - Skirts\n");
    printf("3 - Frocks\n");
    printf("4 - Trousers\n");
}

void kidsCategory()
{
    printf("\nkids' category\n");
    printf("1 - Toys\n");
    printf("2 - Frocks\n");
    printf("3 - Shorts\n");
    printf("4 - Tshirts\n");
}
