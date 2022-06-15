#include<stdio.h>
int main ()
{
   int a,b,c,d;
   float value;
   printf("Enter four number:");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   value = a-b/c-d;
   printf("ratio value of those number: %f",value);
   return 0;

}

