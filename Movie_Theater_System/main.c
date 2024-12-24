#include <stdio.h>
#include <stdlib.h>

const int maxrows = 6;
const int maxcols = 10;

void displayseats(char seats[maxrows][maxcols]);
void bookSeat(char seats[maxrows][maxcols],float *totalPrice);
void bookMultipleSeat(char seats[maxrows][maxcols],float *totalPrice);
void checkAvailabilityOfSeats(char (*seats)[maxcols]);
void cancelBooking(char seats[maxrows][maxcols]);
float calculatePrice(int row, int column);


int main()
{


    int choice;
    char seats[maxrows][maxcols];
    float totalPrice = 0.0;


    while(1){

    printf("--------------------------\n");
    printf("   Movie Booking System   \n");
    printf("--------------------------\n");
    printf("   1.Display Seats\n");
    printf("   2.Book a Seat\n");
    printf("   3.Book Multiple Seats\n");
    printf("   4.Check Seat Availability\n");
    printf("   5.Cancel Booking\n");
    printf("   6.Check Total Price\n");
    printf("   7.Exit\n");
    printf("--------------------------\n\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("\n");


    switch(choice){

        case 1:
            displayseats(seats);
        break;

        case 2:
            bookSeat(seats,&totalPrice);
        break;

        case 3:
            bookMultipleSeat(seats,&totalPrice);
        break;

        case 4:
            checkAvailabilityOfSeats(seats);
        break;

        case 5:
            cancelBooking(seats);
        break;

        case 6:
           printf("Total price =Rs.%.2f\n",totalPrice);
        break;

        case 7:
            printf("Thank you for using movie booking system......");
        break;







    }


    }



    return 0;
}

// Display Seat function

void displayseats(char seats[maxrows][maxcols])
{
    for (int i = 0; i < maxrows; i++) {

        for (int j = 0; j < maxcols; j++) {
            seats[i][j] = 'O';
        }
    }

    printf("Seats\n");

    for(int count=0; count< maxcols; count++)
    {

        printf("%3d",count+1);
    }
    printf("\n");

    for(int rCount=0; rCount< maxrows; rCount++)
    {

        printf("%2d",rCount+1);

        for(int cCount=0; cCount< maxcols; cCount++)
        {

            printf("%2c", seats[rCount][cCount]);

        }
        printf("\n");
    }
    printf("\n");
}

//book a seat function
void bookSeat(char seats[maxrows][maxcols],float *totalPrice)
{
    int row, column;


    printf("Enter the row number (0-%d): ", maxrows - 1);
    scanf("%d", &row);
    printf("Enter the column number (1-%d): ",maxcols);
    scanf("%d", &column);

    // Check if row and column are valid
    if (row < 0 || row >= maxrows || column < 1 || column >maxcols)
    {
        printf("Invalid row or column. Please try again.\n");
        return;
    }

    // Adjust column to be 0-indexed
    column -= 1;

    // Check if the seat is already booked
    if (seats[row][column] == 'X')
    {
        printf("Seat is not available for booking.\n");
    }
    else
    {
        // Book the seat
        seats[row][column] = 'X';

        float price = calculatePrice(row, column);
        *totalPrice += price;

        printf("Seat is successfully booked.\n");
    }
}

//Book multiple seats
void bookMultipleSeat(char seats[maxrows][maxcols], float *totalPrice)
{
    int row, column;
    char choice;


    do{

    printf("Enter the row number (0-%d): ", maxrows - 1);
    scanf("%d", &row);
    printf("Enter the column number (1-%d): ",maxcols);
    scanf("%d", &column);

    // Check if row and column are valid
    if (row < 0 || row >= maxrows || column < 1 || column >maxcols)
    {
        printf("Invalid row or column. Please try again.\n");
        return;
    }



    column -= 1;


    if (seats[row][column] == 'X')
    {
        printf("Seat is not available for booking.\n");
    }
    else
    {


        seats[row][column] = 'X';

        float price = calculatePrice(row, column);
        *totalPrice += price;

        printf("Seat is successfully booked.\n");
    }


        printf("Do you want to book another seat? (y/n): ");
        scanf(" %c",&choice);

    } while(choice == 'y' || choice == 'Y');
}

//check for availability of the seats

void checkAvailabilityOfSeats(char (*seats)[maxcols])
{
    int row, column;
    char choice;

    do
    {

        printf("Enter the row and column to check the availability (Eg: 3 5): ");
        scanf("%d %d", &row, &column);


        if (row < 0 || row >= maxrows || column < 1 || column > maxcols)
        {
            printf("Invalid row or column. Please try again.\n");
            continue;
        }


        column -= 1;


        char *seatPtr = &seats[row][column];


        if (*seatPtr == 'X')
        {
            printf("Seat is not available for booking.\n");
        }
        else
        {
            printf("The seat is available for booking.\n");
        }


        printf("Do you want to check another seat? (y/n): ");
        scanf(" %c", &choice);

    }
    while (choice == 'y' || choice == 'Y');
}

// cancel booking

void cancelBooking(char seats[maxrows][maxcols])
{
    int row, column;
    char choice;

    do
    {

        printf("Enter the row and column of the seat you want to cancel (Eg: 3 5): ");
        scanf("%d %d", &row, &column);


        if (row < 0 || row >= maxrows || column < 1 || column > maxcols)
        {
            printf("Invalid row or column. Please try again.\n");
            continue;
        }


        column -= 1;


        if (seats[row][column] == 'O')
        {
            printf("Seat is not booked. Nothing to cancel.\n");
        }
        else
        {

            seats[row][column] = 'O';
            printf("Seat is successfully cancelled!\n");
        }


        printf("Do you want to cancel another booking? (y/n): ");
        scanf(" %c", &choice);

    }
    while (choice == 'y' || choice == 'Y');
}
// calculate total price

float calculatePrice(int row, int column)
{
    float basePrice = 10.0;
    float rowDiscount = 0.0;
    float columnDiscount = 0.0;


    if (row == 3 || row == 4)
    {
        rowDiscount = 0.20 * basePrice;
    }


    if (column >= 5 && column <= 8)
    {
        columnDiscount = 0.10 * basePrice;
    }



    float price = basePrice - rowDiscount - columnDiscount;

    return price;
}

