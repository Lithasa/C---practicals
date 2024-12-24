#include <stdio.h>
#include <stdlib.h>




//1st question

// Function to scrape coconut and mix with hot water
void prepareCoconutMilk() {
    printf("QUESTION-1\n\n");
    printf("************Dhal Curry****************\n");
    printf("******************Prepare Coconut Milk*************************\n");
    printf("***Scrape coconut\n");
    printf("***Mix with hot water\n");
    printf("*****************************************************************\n");

}

// Function to wash and drain the dhal
void washAndDrainDhal() {
    printf("***Wash and drain Dhal.\n");
}

// Function to add spices
void addSpices() {
    printf("*******************Add Spices\n");
    printf("***Add turmeric=0.1 t spoon\n");
    printf("***Add pepper=1 t spoon\n");
    printf("***Add lemon grass\n");
    printf("***Add salt=1 t spoon\n");
}

// Function to cook the dhal
void cookDhal() {
    printf("***Add water\n");
    printf("***cook\n");

}

// Function to add coconut milk
void addCoconutMilk() {
    printf("***Add coconut milk\n\n");
}






// Function to scrape coconut and mix with hot water(potato curry)
void prepareCoconutMilkforpotato() {
    printf("************Potato Curry****************\n");
    printf("******************Prepare Coconut Milk*************************\n");
    printf("***Scrape coconut\n");
    printf("***Mix with hot water\n");
    printf("*****************************************************************\n");
}

 // Function to wash and peel potato
void washAndpeelpotato() {
    printf("***Wash and peel potato = 1 kg\n");
    }


 // Function to add spices
void addSpicesforcurry() {
    printf("*******************Add Spices\n");
    printf("***Add turmeric=0.5 t spoon\n");
    printf("***Add pepper=2 t spoon\n");
    printf("***Add lemon grass\n");
    printf("*********************************Add tomato\n");
    printf("***Add salt=1 t spoon\n");
}
// Function to cook the potato
void cookpotato() {
    printf("***Add water\n");
    printf("***cook\n");

}
// Function to add coconut milk
void addCoconutMilktothecurry() {
    printf("***Add coconut milk\n\n");


}







// Function to scrape coconut and mix with hot water(fish curry)
void prepareCoconutMilkforthefish() {

    printf("************fish Curry****************\n");
    printf("******************Prepare Coconut Milk*************************\n");
    printf("***Scrape coconut\n");
    printf("***Mix with hot water\n");
    printf("*****************************************************************\n");
}

 // Function to wash the fish
void washfish() {
    printf("***Wash the fish\n");
    }


 // Function to add spices
void addSpicestothefish() {
    printf("*******************Add Spices\n");
    printf("***Add turmeric=0.5 t spoon\n");
    printf("***Add pepper=3 t spoon\n");
    printf("***Add lemon grass\n");
    printf("******************************\n");
    printf("***Add salt=1 t spoon\n");
}
// Function to cook the fish
void cookfish() {
    printf("***Add water\n");
    printf("***cook\n");

}
// Function to add coconut milk
void addCoconutMilktothefish() {
    printf("***Add coconut milk\n\n");


}




//2nd question

//separating by a newline
void myself(){
    printf("QUESTION-2\n\n");
    printf("Name-Lithasa Jayamaha\nAddress-273/6,Ranawiru Dewananda Rd,Kadawatha\nTelNo-0769498057\n\n ");
}


//escapecharacters

void escapeCharaters(){

    printf("Lithasa\bJayamaha\n");   // '/b'
    printf("Lithasa\fJayamaha\n");   // '/f'
    printf("Lithasa\nJayamaha\n");   // '/n'
    printf("Lithasa\rJayamaha\n");   // '/r'
    printf("Lithasa\tJayamaha\n");   // '/t'
    printf("Lithasa\aJayamaha\n\n");   // '/a'

}



//3rd question

//full name with a frame
void fullname(){
    printf("QUESTION-3\n\n");
    printf("********************************\n");
    printf("|           Lithasa            |\n");
    printf("|           Sehansi            |\n");
    printf("|           Jayamaha           |\n");
    printf("********************************\n\n");
}



//4th question
//Prompt user to input two numbers
#include <stdlib.h>

  int question4 (){
    double num1, num2;
    double sum, difference, division;

    // Prompt user for input
    printf("QUESTION-4\n\n");
    printf("***Let's find the sum,diffrence,division of the given numbers***\n\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform calculations
    sum = num1 + num2;
    difference = num1 - num2;
    division = num1 / num2;

    // Display results
    printf("Sum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", difference);
    printf("Division: %.2lf\n\n", division);

    return 0;

}


//5th question
//Prompt user to enter a number
#include <stdlib.h>

  int question5 (){
    double height1, width1,height2,width2;
    double area1,area2,perimeter1,perimeter2;

    printf("QUESTION-5\n\n");

    printf("***Lets find the area/perimeter of a square***\n\n");

    // Prompt user for calculate the area & perimeter of a square
    printf("Enter the height/width of the square : ");
    scanf("%lf", &height1);


    // Perform calculations for sqaure
    area1 = height1*height1;
    perimeter1 = height1*4;

    // Display results
    printf("area of the square is : %.2lf\n", area1);
    printf("perimeter of the square is : %.2lf\n\n\n", perimeter1);

    printf("***Lets's find the area/perimeter of a rectangle***\n\n");



    // Prompt user for calculate the area & perimeter of a rectangle
    printf("Enter the height of the rectangle : ");
    scanf("%lf", &height2);

    printf("Enter the width of the rectangle : ");
    scanf("%lf", &width2);

    // Perform calculations for rectangle
    area2 = height2*width2;
    perimeter2 = height2*2 +width2*2;


    //display the result
    printf("area of the rectangle is : %.2lf\n", area2);
    printf("perimeter of the rectangle is : %.2lf\n\n\n", perimeter2);


    return 0;

}


//6th question
//Prompt user to enter a number
#include <stdlib.h>

  int question6 (){

      int number;

       printf("QUESTION-6\n\n");

      printf("***Let's find even & odd numbers***\n\n");

      //prompt user to enter the specific number
      printf("Enter the number :");
      scanf("%d" , &number);

      // Check if the number is odd or even
    if (number % 2 == 0) {
        printf("%d is an even number.\n\n", number);
    }

    else {
        printf("%d is an odd number.\n\n", number);
    }

    return 0;


}


//Prompt user to input two numbers
#include <stdlib.h>

  int question7 (){
    float n1, n2;
    double Sum,average;

    // Prompt user for input
     printf("QUESTION-7\n");
    printf("***Let's find the sum & average of a number***\n\n");
    printf("Enter the first number: ");
    scanf("%f", &n1);

    printf("Enter the second number: ");
    scanf("%f", &n2);

    // Perform calculations
    Sum = n1 + n2;
    average = (n1+n2)/2;

    // Display results
    printf("Sum : %.2lf\n", Sum);
    printf("Average : %.2lf\n\n", average);


    return 0;

}


//8th question
#include <stdlib.h>


// Function to calculate the square
int square(int Num) {
    return Num * Num;
}

int question8() {
    int Number1;
     printf("QUESTION-8\n");
    printf("***Let's find the square of a number***\n\n");

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &Number1);

    // Calculate the square using the function
    int result = square(Number1);

    // Display the result
    printf("Square of %d is = %d\n\n", Number1, result);

    return 0;
}
//9th question
#include <stdio.h>

static int max1(int a, int b) { //defined parameters as a & b
    return (a > b) ? a : b;
}

int question9() {
    int x,y ;  //variables x & y

    printf("QUESTION-9\n");

    printf("***Let's find the large number***\n\n");
    //prompt user to enter values
    printf("Enter the value x:");
    scanf("%d",&x);
    printf("Enter the value y:");
    scanf("%d",&y);
    int result = max1(x, y);
    printf("The larger number is: %d\n\n", result);
    return 0;
}


//10th question
#include <stdio.h>

 static int max2(int a1, int b1,int c1 ) { //defined parameters as a1,b1,c1
    int largest = a1;
    if (b1 > largest) {
        largest = b1;
    }
    if (c1 > largest) {
        largest = c1;
    }
    return largest;
}

int question10() {
    int v1,v2,v3 ;  //variables v1,v2,v3

    printf("QUESTION-10\n");

    printf("***Let's find the largest number***\n\n");
    //prompt user to enter values
    printf("Enter the value1 :");
    scanf("%d",&v1);
    printf("Enter the value2:");
    scanf("%d",&v2);
    printf("Enter the value3:");
    scanf("%d",&v3);

    int Result = max2(v1,v2,v3);
    printf("The largest number is: %d\n\n", Result);
    return 0;
}









 int main() {
    //Dhal curry
    prepareCoconutMilk();
    washAndDrainDhal();
    addSpices();
    cookDhal();
    addCoconutMilk();

     //potato curry
    prepareCoconutMilkforpotato();
    washAndpeelpotato();
    addSpicesforcurry();
    cookpotato();
    addCoconutMilktothecurry();

    //fish curry
    prepareCoconutMilkforthefish();
    washfish();
    addSpicestothefish();
    cookfish();
    addCoconutMilktothefish();

    //2nd question-myself
    myself();

    //3rd question-escape characters
    escapeCharaters();
    //full name
    fullname();

    //4th question
    question4();

    //5th question
    question5();

    //6th question
    question6();

    //7th question
    question7();

    //8th question
    question8();

    //9th question
    question9();

    //10th question
    question10();



printf("Name-Lithasa Jayamaha  Index_num- AS2023949  ");



    return 0;
}

