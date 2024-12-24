#include <stdio.h>
#include <stdlib.h>

const int maxrooms =40;

void spendTheDay();
float spendDayTotal(int adults, int kids, int facility);
void stayTheNight(int room[]);
void checkIn(int room[]);
void checkout(int room[]);
void checkAvailability(int room[]);
float calculateTotalBill();


int main()
{
    int choice;
    int room[maxrooms];


    while(1){

            printf("*** QUEENS HOLIDAY RESORT ***\n\n");

            printf("---------Main menu----------\n\n");
            printf("   1.Spend the day package.\n");
            printf("   2.Stay the night.\n");
            printf("   3.Exit.\n\n");
            printf("-----------------------------\n\n");

            printf("Select an option from above list: ");
            scanf("%d",&choice);

            printf("\n");

            switch(choice){

            case 1:
                 spendTheDay();
            break;

            case 2:
                stayTheNight(room);
            break;

            case 3:
                printf("Thank you for joining with us.....\n");
            break;

            default:
                printf("Invalid operation.......\n");
            break;

            }


    }

    return 0;
}

//spend the day
void spendTheDay(){

    int adults, kids, facility;
    float totalbill;

    printf("--------Spend the day package--------\n\n");
    printf("Number of adults: ");
    scanf("%d",&adults);
    printf("Number of kids: ");
    scanf("%d",&kids);
    printf("Do you want to use gym/pool facilities? (1.Yes 2.No): ");
    scanf("%d",&facility);

    printf("\n\n");

    totalbill = spendDayTotal(adults,kids,facility);

    printf("-------Spend the day package bill-------\n\n");
    printf("Package details: %d Adults , %d Kids with %s facility\n\n",adults,kids,facility==1?"gym/pool" : "no gym/pool");
    printf("Total amount: Rs.%.2f\n\n",totalbill);
    printf("-------------------------------------------\n\n");

}

//calculating the total bill for spend the day

float spendDayTotal(int adults, int kids, int facility){

    float adultPrice = 6000.0;
    float kidPrice = 3000.0;
    float faciltyPrice = 1500.0;
    float total = 0.0;

    total = (adults*adultPrice + kids*kidPrice);

    if(facility==1){

        total+=faciltyPrice;
    }

    return total;

}

//stay the night

void stayTheNight(int room[]){

    int choice;

    while(1){

        printf("-------Stay the night package-------\n\n");
        printf("    1.Check In.\n");
        printf("    2.Calculate bill.\n");
        printf("    3.Check out.\n");
        printf("    4.Check availability.\n");
        printf("--------------------------------------\n\n");

        printf("Select an option from above list: ");
        scanf("%d",&choice);

        printf("\n");


        switch(choice){

        case 1:
            checkIn(room);
        break;

        case 2:
            calculateTotalBill();
        break;

        case 3:
            checkout(room);
        break;

        case 4:
            checkAvailability(room);
        break;

        default:
            printf("Invalid operation.....\n");
        break;

        }

    }

}

//check in

void checkIn(int room[]){

    int roomtype, roomfound = 0;

    printf("-------Check In process--------\n\n");

    printf("What is the room type that you want to reserve? (1.Double rooom 2.Triple room)  ");
    scanf("%d",&roomtype);

    for(int count = 0; count< maxrooms;count++){

        if(room[count]==0){

            room[count]=1;
            printf("\nRoom number %d (%s) is reserved.\n\n",count+1,roomtype == 1 ? "Double room" : "Triple room");
            roomfound = 1;
            break;
        }
    }
    if(!roomfound){
        printf("Room is not available...\n");
    }
}

void checkout(int room[]){

    int roomNumber;

    printf("-------Check out process--------\n");
    printf("Enter the room number: ");
    scanf("%d",&roomNumber);

    printf("\n");


    if(roomNumber<1 || roomNumber> 40||room[roomNumber-1]==0){

        printf("Invalid room number / Room is still available\n");
    }
    else{
        room[roomNumber-1]=0;
        printf("\nRoom number %d is released and available for new customers\n\n",roomNumber);
    }

}

//check availability

void checkAvailability(int room[]){

    printf("---------Available rooms---------\n");

    for( int count=0 ; count < maxrooms; count++){

        if(room[count]==0){
            printf("Room number %d (%s) is available\n\n",count+1,count<20 ? "Double room":"Triple room");
        }
    }

}

//calculate the total bill

float calculateTotalBill(){

    int roomtype , paymentMethod , chargePerNight, numberOfNights;
    float total;


    printf("***Room Type (Input-code)*** \n\n");
    printf("Double room - Half board (1)\n");
    printf("Double room - Full board (2)\n");
    printf("Triple room - Half board (3)\n");
    printf("Triple room - Full board (4)\n");
    printf("--------------------------------------------\n\n");

    printf("***Payment Method (Input-code)***\n\n");
    printf("Cash (1)\n");
    printf("ABS bank credit card (2)\n");
    printf("Other credit card (3)\n");
    printf("--------------------------------------------\n\n");

   printf("----------Calculate Bill Process----------\n\n");
   printf("Enter room type: ");
   scanf("%d",&roomtype);
   printf("Number of nights stayed in the hotel: ");
   scanf("%d",&numberOfNights);
   printf("Payment method: ");
   scanf("%d",&paymentMethod);


   if(roomtype==1){
    total = (numberOfNights*40000);
   }
   else if(roomtype==2){
    total = (numberOfNights*50000);
    }
    else if(roomtype==3){
        total = (numberOfNights*45000);
    }
    else{
        total = (numberOfNights*55000);
    }



    if(paymentMethod==2){
            if(total<=50000){
                total = total - (total*0.20);
            }
            else{
                total = total - (total*0.40);
            }
    }
    else if(paymentMethod==3){
        if(total<=50000){
            total = total - (total*0.15);
        }
        else{
            total = total -(total*0.35);
        }
    }

    printf("\nPackage details: %s for %d nights\n",roomtype==1? "Double room-Half board":"Double room-full board"||roomtype==3? "Triple room-Half board":"Triple room-Full board",numberOfNights);
    printf("Total amount: Rs.%.2f\n\n",total);



    return total;
}










