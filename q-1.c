#include<stdio.h>
int main ()
{
    int cm ;
    float in;
    printf("Enter book length in cm =");
    scanf("%d",&cm);
    in = cm / 2.54;
    printf("Book length in inch = %f\n",in);
    return 0;

}

