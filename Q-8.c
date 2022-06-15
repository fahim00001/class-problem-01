#include<stdio.h>
int main ()
{
   float c,f;
   printf("Enter celsius temperature value : ");
   scanf("%f",&c);
   f= 1.8*c+ 32;
   printf("Fahrenheit value: %f",f);
   return 0;
}

