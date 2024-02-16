#include <stdio.h>

int main()
{

   int a;
   int b;
   int c;
   int ans;

   printf("enter A value :");
   scanf("%d",&a);

   printf("enter B value :");
   scanf("%d",&b);

   printf("enter C value:");
   scanf("%d",&c);

   ans = (a+b+c)/3;

   printf("%d",ans);

   return 0;
 }