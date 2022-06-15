#include<stdio.h>
int main ()
{
   float r,h,volume_cylinder;
   printf("Enter radious and height of a Cylinder = ");
   scanf("%f%f",&r,&h);
   volume_cylinder = 3.1416 *(r*r)*h;
   printf("Volume of that cylinder = %f",volume_cylinder);
   return 0;
}
