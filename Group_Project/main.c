/*
Group Project - C Programming Lab
Group members indexes - AS2023949 , AS2023972 , AS2023934 , AS2023933

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declare constants for the maximum number of contractors and properties
const int MAX_CONTRACTORS = 50;
const int MAX_PROPERTIES = 100;

//Declaration structure for the new data type "contractors"
typedef struct {
    int id;
    char name[50];
    int contactNo;
} Contractors;

Contractors contractors[50];

//Declaration structure for the new data type "properties"
typedef struct {
    int pID;
    char address[100];
    int rooms;
    float area;
    float price;
    char status[10];  // Status as a string to accept "sale" or "rent"
    int contractorID;
} Properties;

Properties properties[100];

//Function Declarations for the system
void addContractor();
void addProperty();
void updateStatusOfProperty();
void generateReportForSale();
void generateReportForRent();
void exitTheProgram();

int main() {

    int category;

    while (1) {
        printf("*****System Menu*****\n\n"); //Menu selection for the user
        printf("   1- Add a contractor.\n");
        printf("   2- Add a property.\n");
        printf("   3- Update the status of a property.\n");
        printf("   4- Generate a report of properties for sale.\n");
        printf("   5- Generate a report of properties for rent.\n");
        printf("   6- Exit the program.\n\n");

        printf("Select the Option: ");
        scanf("%d", &category);

        // Control flow using switch statement to handle menu options
        switch (category) {
            case 1:
                printf("\n");
                addContractor(); // Function call to add a contractor
                break;
            case 2:
                printf("\n");
                addProperty(); // Function call to add a property
                break;
            case 3:
                printf("\n");
                updateStatusOfProperty(); // Function call to update property status
                break;
            case 4:
                printf("\n");
                generateReportForSale(); // Function call to generate report for properties for sale
                break;
            case 5:
                printf("\n");
                generateReportForRent(); // Function call to generate report for properties for rent
                break;
            case 6:
                printf("\n");
                exitTheProgram(); // Function call to exit the program
                return 0;
            default:
                printf("\n");
                printf("Invalid choice! Please try again.\n\n"); // Handle invalid input
        }
    }
    return 0;
}

//Function definition to add contractor
void addContractor() {
    // Static variable to track the number of contractors added; retains its value between function calls
    static int contractorCount = 0;
    char continueOption;  // Variable to store the user's choice to continue adding contractors or not

    do {
        // Check if the maximum number of contractors has been reached
        if (contractorCount >= MAX_CONTRACTORS) {
            printf("Cannot add more contractors, storage full.\n");  // Inform the user if the limit is reached
            return;  // Exit the function if no more contractors can be added
        }

        // Assign a unique ID to the new contractor
        int contractorID = contractorCount + 1;
        printf("Contractor ID: %d\n", contractorID);
        contractors[contractorCount].id = contractorID;  // Store the contractor ID in the array

        // Get the name of the contractor
        printf("Contractor Name: ");
        scanf(" %s", contractors[contractorCount].name);

        // Get the contractor's telephone number
        printf("Contractor Tel No: ");
        scanf("%d", &contractors[contractorCount].contactNo);

        // Increment the contractor count after successfully adding a contractor
        contractorCount++;

        // Ask the user if they want to add another contractor
        printf("Do you want to add another contractor? (y/n): ");
        scanf(" %c", &continueOption);

    } while (continueOption == 'y' || continueOption == 'Y');  // Continue if the user enters 'y' or 'Y'

    printf("\n");  // Print a newline for spacing after finishing the operation
}


// Function definition to add properties
void addProperty() {

    static int propertyCount = 0;  // Keeps track of how many properties have been added
    char continueOption;  // To check if the user wants to add another property

    do {

        // Check if the property limit has been reached
        if (propertyCount >= MAX_PROPERTIES) {
            printf("Cannot add more properties, storage full.\n");  // Notify if storage is full
            return;  // Exit the function if the limit is reached
        }

        // Assign a unique property ID
        int propertyID = propertyCount + 1;

        printf("Property ID: %d\n", propertyID);
        properties[propertyCount].pID = propertyID;  // Store the property ID

        // Get the address of the property
        printf("Property address: ");
        scanf(" %s", properties[propertyCount].address);

        // Get the number of rooms in the property
        printf("Number of rooms: ");
        scanf("%d", &properties[propertyCount].rooms);

        // Get the area of the property in square meters
        printf("Area (in square meters): ");
        scanf("%f", &properties[propertyCount].area);

        // Get the price per square meter
        printf("Price per square meter: ");
        scanf("%f", &properties[propertyCount].price);

        // Get the status of the property (whether it's for sale or rent)
        printf("Status of property (sale/rent): ");
        scanf(" %s", properties[propertyCount].status);

        // Get the contractor ID who is responsible for the property
        printf("Contractor ID: ");
        scanf("%d", &properties[propertyCount].contractorID);

        // Increment the property count after adding the property
        propertyCount++;

        // Ask the user if they want to add another property
        printf("Do you want to add another property? (y/n): ");
        scanf(" %c", &continueOption);

    } while (continueOption == 'y' || continueOption == 'Y');  // Repeat if the user chooses 'y'

    printf("\n");
}

// Function definition to update the status of the properties
void updateStatusOfProperty() {

    int selectID;  // To store the selected property ID
    char continueOption;  // To store the user's choice to continue or not

    do {
        // Let the user to enter the property ID they want to update
        printf("Enter Property ID you want to update: ");
        scanf("%d", &selectID);

        int propertyFound = 0;  // Flag to check if the property was found

        // Loop through all properties to find the one with the entered ID
        for (int i = 0; i < MAX_PROPERTIES; i++) {

            if (selectID == properties[i].pID) { // Check if the property ID matches

                // Display the current status and prompt for the new status
                printf("Current Status: %s\n", properties[i].status);
                printf("Enter Updated Status of property (sale/rent/sold/rented): ");
                scanf(" %s", &properties[i].status);

                propertyFound = 1;  // Mark that the property was found

                break;  // Exit the loop once the property is found
            }
        }

        // If the property was not found, display an error message
        if (!propertyFound) {

            printf("Property ID not found.\n");
        }

        // Ask the user if they want to update another property
        printf("Do you want to update the status of another property? (y/n): ");
        scanf(" %c", &continueOption);

    } while (continueOption == 'y' || continueOption == 'Y');  // Continue if the user chooses 'y'
}

//Function definition to generate reports for the sale
void generateReportForSale() {

    printf("\nProperties available for sale:\n");

    // Loop through all properties to find those available for sale
    for (int i = 0; i < MAX_PROPERTIES; i++) {

        if (strcmp(properties[i].status, "sale") == 0) {  // Check if the status is 'sale'

            float totalPrice = properties[i].area * properties[i].price;  // Calculate total price

            // Display the property details
            printf("Property ID: %d\nProperty address: %s\nNumber of rooms: %d\nArea: %.2f\nTotal Price: %.2f\n",
                   properties[i].pID, properties[i].address, properties[i].rooms, properties[i].area, totalPrice);

            // Find the contractor responsible for this property
            for (int j = 0; j < MAX_CONTRACTORS; j++) {
                if (properties[i].contractorID == contractors[j].id) {  // Check if contractor ID matches

                    // Display contractor details
                    printf("Contractor ID: %d\nContractor Name: %s\nContractor Contact No: %d\n\n",
                           contractors[j].id, contractors[j].name, contractors[j].contactNo);

                    break;  // Exit the loop once the contractor is found
                }
            }
        }
    }
}

//Function definition to generate the report for the rent
void generateReportForRent() {

    printf("\nProperties available for rent:\n");

    // Loop through all properties to find those available for rent
    for (int i = 0; i < MAX_PROPERTIES; i++) {

        if (strcmp(properties[i].status, "rent") == 0) {  // Check if the status is 'rent'

            float totalPrice = properties[i].area * properties[i].price;  // Calculate total price

            // Display the property details
            printf("Property ID: %d\nProperty address: %s\nNumber of rooms: %d\nArea: %.2f\nTotal Price: %.2f\n",
                   properties[i].pID, properties[i].address, properties[i].rooms, properties[i].area, totalPrice);

            // Find the contractor responsible for this property
            for (int j = 0; j < MAX_CONTRACTORS; j++) {

                if (properties[i].contractorID == contractors[j].id) {  // Check if contractor ID matches

                    // Display contractor details
                    printf("Contractor ID: %d\nContractor Name: %s\nContractor Contact No: %d\n\n",
                           contractors[j].id, contractors[j].name, contractors[j].contactNo);

                    break;  // Exit the loop once the contractor is found
                }
            }
        }
    }
}

//Function definition to exit the program
void exitTheProgram() {

    // Display exit message and terminate the program
    printf("Exiting the program. Thank you!\n");
    exit(0);  // Exit the program successfully
}
