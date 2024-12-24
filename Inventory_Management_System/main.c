#include <stdio.h>
#include <stdlib.h>

//Name - Lithasa jayamaha
//Index number - AS2023949

int const maxProduct = 100; //maximum amount of products

// Structure for the product details
typedef struct
{
    int productId;
    char productName[50];
    char category[30];
    int quantity;
    float price;
    float discount;
} Product;

//Function calling for the product management

void addingProducts(Product products[], int *count);
void updatingProducts(Product products[], int count);
void deletingProducts(Product products[], int *count);
void displayProduct(Product products[], int count);
int findProductIndex(Product products[], int count, int productId);
void checkQuantity(Product products[], int count);
void calculateDiscountedPrice(Product products[], int count);
void generateInventoryReport(Product products[], int count);
void generateDiscountedInventoryReport(Product products[], int count);


int main()
{
    Product products[maxProduct]; //Declaration of the array to the products

    int count = 0;
    int choice;
    char res;

    while (1) //Using a while loop to display the menu after the user response
    {
        printf("--Menu of the Inventory Management--\n\n");
        printf("       1. Adding products\n");
        printf("       2. Updating product details\n");
        printf("       3. Deleting products\n");
        printf("       4. Display products\n");
        printf("       5. Check product quantity\n");
        printf("       6. Calculate discounted price\n");
        printf("       7. Generate inventory report\n");
        printf("       8. Generate discounted inventory report\n");
        printf("       9. Exit...\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        //Switch statement for the user choices

        switch (choice)
        {
        case 1:
            do
            {
                addingProducts(products, &count); //function call to add the products
                printf("Do you want to add more products? (y/n): "); //letting user input the response to add more products
                scanf(" %c", &res);
            }
            while (res == 'y' || res == 'Y');
            break;

        case 2:
            do
            {
                updatingProducts(products, count); //function call to update the products
                printf("Do you want to update more products? (y/n): "); //letting user input the response to update more products
                scanf(" %c", &res);

            }
            while (res == 'y' || res == 'Y');
            break;

        case 3:
            do
            {
                deletingProducts(products, &count); //function call to delete the products
                printf("Do you want to delete more products? (y/n): "); //letting user input the response to delete more products
                scanf(" %c", &res);

            }
            while (res == 'y' || res == 'Y');
            break;

        case 4:
            displayProduct(products, count); //function call to delete the products
            break;

        case 5:
             do
            {
                checkQuantity(products, count);  //function call to check the quantity of the products
                printf("Do you want to check more quantity of products? (y/n): "); //letting user to  input the response to check the quantity of more products
                scanf(" %c", &res);

            }
            while (res == 'y' || res == 'Y');

            break;

        case 6:
             do
            {
                calculateDiscountedPrice(products, count);  //function call to calculate the discount price
                printf("Do you want to check more quantity of products? (y/n): "); //letting user to  input the response to calculate discount price of more products
                scanf(" %c", &res);

            }
            while (res == 'y' || res == 'Y');

            break;

        case 7:
            generateInventoryReport(products, count); //Function call to generate inventory report
            break;

        case 8:
            generateDiscountedInventoryReport(products, count); //Function call to generate Discounted Inventory Report
            break;

        case 9:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

//Function declaration to add Products

void addingProducts(Product products[], int *count)
{
    if (*count >= maxProduct)
    {
        printf("Inventory is full! Cannot add more products.\n");
        return;
    }

    Product newProduct; // declaring a variable called newProduct

    printf("--Adding new product--\n\n");
    printf("Enter Product ID: ");
    scanf("%d", &newProduct.productId);
    printf("Enter Product Name: ");
    scanf(" %[^\n]%*c", newProduct.productName);
    printf("Enter Product Category: ");
    scanf(" %[^\n]%*c", newProduct.category);   //"%[^\n]%*c" is used to read a string of input until the newline character, and then discard the newline.
    printf("Enter Quantity: ");
    scanf("%d", &newProduct.quantity);
    printf("Enter Price: ");
    scanf("%f", &newProduct.price);
    printf("Enter Discount Percentage: ");
    scanf("%f", &newProduct.discount);

    products[*count] = newProduct;
    (*count)++;

    printf("Product added successfully.\n");
}

//Function declaration to update Products

void updatingProducts(Product products[], int count)
{
    int productId, choice, productIndex;

    printf("Enter the Product ID to update: ");
    scanf("%d", &productId);

    productIndex = findProductIndex(products, count, productId);

    if (productIndex == -1)
    {
        printf("Product not found.\n");
        return;
    }

    printf("1. Update quantity\n");
    printf("2. Update discount\n");
    printf("Select your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter new Quantity: ");
        scanf("%d", &products[productIndex].quantity);
        printf("Quantity updated successfully.\n");
    }
    else if (choice == 2)
    {
        printf("Enter new Discount: ");
        scanf("%f", &products[productIndex].discount);
        printf("Discount updated successfully.\n");
    }
    else
    {
        printf("Invalid choice.\n");
    }
}

//Function declaration to delete Products

void deletingProducts(Product products[], int *count)
{
    int productId, productIndex;

    printf("Enter Product ID to delete: ");
    scanf("%d", &productId);

    productIndex = findProductIndex(products, *count, productId);

    if (productIndex == -1)
    {
        printf("Product not found.\n");
        return;
    }

    for (int i = productIndex; i < *count - 1; i++)
    {
        products[i] = products[i + 1];
    }

    (*count)--;
    printf("Product deleted successfully.\n");
}

//Function declaration to display Products

void displayProduct(Product products[], int count)
{
    printf("\n%-10s %-20s %-15s %-10s %-10s %-10s\n", "ID", "Name", "Category", "Quantity", "Price", "Discount");

    for (int i = 0; i < count; i++)
    {
        printf("%-10d %-20s %-15s %-10d %-10.2f %-10.2f\n", products[i].productId, products[i].productName, products[i].category, products[i].quantity, products[i].price, products[i].discount);
    }
}

//Function declaration to find the Products index

int findProductIndex(Product products[], int count, int productId)
{
    for (int i = 0; i < count; i++)
    {
        if (products[i].productId == productId)
        {
            return i;
        }
    }
    return -1;
}

//Function declaration to check the quantity Products

void checkQuantity(Product products[], int count)
{
    int productId, productIndex;

    printf("Enter Product ID to check quantity: ");
    scanf("%d", &productId);

    productIndex = findProductIndex(products, count, productId);

    if (productIndex == -1)
    {
        printf("Product not found.\n");
        return;
    }

    printf("Product ID: %d, Name: %s, Quantity: %d\n", products[productIndex].productId, products[productIndex].productName, products[productIndex].quantity);
}

//Function declaration to calculate the discount price of Products

void calculateDiscountedPrice(Product products[], int count)
{
    int productId, productIndex;

    printf("Enter Product ID to calculate discounted price: ");
    scanf("%d", &productId);

    productIndex = findProductIndex(products, count, productId);

    if (productIndex == -1)
    {
        printf("Product not found.\n");
        return;
    }

    float discountedPrice = products[productIndex].price * (1 - (products[productIndex].discount / 100));

    printf("Product ID: %d, Name: %s, Discounted Price: %.2f\n", products[productIndex].productId, products[productIndex].productName, discountedPrice);
}

//Function declaration to generate inventory report of the Products

void generateInventoryReport(Product products[], int count)
{
    printf("\nInventory Report\n");
    printf("%-10s %-20s %-15s %-10s %-10s %-10s\n", "ID", "Name", "Category", "Quantity", "Price", "Discount");

    for (int i = 0; i < count; i++)
    {
        printf("%-10d %-20s %-15s %-10d %-10.2f %-10.2f\n", products[i].productId, products[i].productName, products[i].category, products[i].quantity, products[i].price, products[i].discount);
    }
}

//Function declaration to generate the discounted inventory report of the Products

void generateDiscountedInventoryReport(Product products[], int count)
{
    printf("\nDiscounted Inventory Report\n");
    printf("%-10s %-20s %-15s %-10s %-10s\n", "ID", "Name", "Category", "Quantity", "Discounted Price");

    for (int i = 0; i < count; i++)
    {
        float discountedPrice = products[i].price * (1 - (products[i].discount / 100));

        printf("%-10d %-20s %-15s %-10d %-10.2f\n", products[i].productId, products[i].productName, products[i].category, products[i].quantity, discountedPrice);
    }
}
