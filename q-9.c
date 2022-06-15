#include<stdio.h>
int main ()
{
   int x1,y1,x2,y2;
   float ans;
   printf("Enter 2 points value x1,y1,x2,y2 = ");
   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
   ans = sqrt((x2-x2)+(y2-y1));
   printf("distance between those two points = %f",ans);
   return 0;
}

