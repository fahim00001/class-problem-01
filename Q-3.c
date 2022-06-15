#include<stdio.h>
int main ()
{
   int in ;
    float cm;
    printf("Enter book length in inch =");
    scanf("%d",&cm);
    cm = in * 2.54;
    printf("Book length in cm = %f\n",cm);
    return 0;
}
