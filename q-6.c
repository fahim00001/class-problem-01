#include<stdio.h>
int main ()
{
   int mhour ,mMinute,duration_minute;
   float duration_fraction;
   printf("Enter movie duration hour and minute = ");
   scanf("%d%d",&mhour,&mMinute);
   duration_minute = mhour *60 + mMinute;
   duration_fraction =   duration_minute/60.0;
   printf("Duration of that moive in minutes:%d ",duration_minute);
   printf("Duration of that moive in minutes:%f ",duration_fraction);
   return 0;
}

