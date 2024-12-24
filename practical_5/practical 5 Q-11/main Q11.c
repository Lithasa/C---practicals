#include <stdio.h>
#include <stdlib.h>

/*
Name - lithasa jayamaha
Index Number - AS2023949
Project - practical 5 Q11

(Write a program to prompt the user to input the integral value of a and print out the result
as shown below.
Result:
The value of a is: 10
……………………..
The value of ++a is: 11
Now the value of a is: 11

The value of a++ is: 11
Now the value of a is: 12

The value of --a is:11
Now the value of a is:11

The value of a-- is: 11
Now the value of a is: 10)
*/

int main()
{
   int a ;

   printf("enter the value of 'a' : ");
   scanf("%d",&a);

   //let the user input the value
   printf("The value of a is :%d\n\n",a);

   printf("...............................\n\n");

   //display the result for ++a
   printf("The value of ++a is :%d\n",++a);
   printf("Now the value of a is :%d\n\n",a);

   //display the result for a++
   printf("The value of a++ is :%d\n",a++);
   printf("Now the value of a is :%d\n\n",a);

   //display the result for --a
   printf("The value of --a is :%d\n",--a);
   printf("Now the value of a is :%d\n\n",a);

   // display the result for a--
   printf("The value of a-- is :%d\n",a--);
   printf("Now the value of a is :%d\n\n",a);


    return 0;
}
