#include<stdio.h>
int main ()
{
   int r,l;
   float volume_sphere ,volume_cubic;
   printf("Enter radious of a sphere-shaped container = ");
   scanf("%d",&r);
   printf("Enter length of each side of the cubic shaped container = ");
   scanf("%d",&l);
   volume_sphere = 4/3.0*3.1416*r*r*r;
   volume_cubic = l*l*l;
   printf("\nvolume of sphere shaped container = %f\n",volume_sphere);
   printf("\nvolume of cubic shaped container =%f\n",volume_cubic);
   return 0;
}

