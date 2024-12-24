#include <stdio.h>
#include <stdlib.h>

int main()

{
    char L1,L2,L3;
    L1='X';
    L2='M';
    L3='L';

    printf("The reverse of XML is:%c %c %c\n\n",L3,L2,L1);

    int a=125;
    int b=12345;
    long ax=1234567890;
    short s=4043;
    float x=2.13459;
    double dx=1.1415927;
    char c='W';
    unsigned long ux=2541567890;

    printf("a + c = %d\n", a + c);
    printf("x + c = %f\n", x + c);
    printf("dx + x = %f\n", dx + x);
    printf("a + x = %f\n", a + x);
    printf("s + b = %d\n", s + b);
    printf("ax + b = %ld\n", ax + b);
    printf("s + c = %d\n", s + c);
    printf("ax + c = %ld\n", ax + c);
    printf("ax + ux = %lu\n\n", ax + ux);


    float F,C;
    C=100;
    F=(C*9/5)+32;

    printf("100 Celsius= %f Fahrenheit\n\n",F);


    float dis,liters,avg;
    dis=350;
    liters=5;
    avg=dis/liters;
    printf("The Average consumption(km/l)= %f\n\n",avg);


    int v1,vol;
    v1=4;
    vol=v1*v1*v1;
    printf("Volume of the cube is =%d \n\n",vol);


    int height=38;
    int radius=35;
    double pie=3.14285714286;
    double volume=pie*(radius*radius)*height;

    printf("Volume of the cylinder=%f\n\n",volume);


    printf("Name-Lithasa Jyamaha  Index num-2023949\n\n");









    return(0);

}
