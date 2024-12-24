#include <stdio.h>
#include <stdlib.h>

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
