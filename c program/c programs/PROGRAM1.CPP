#include <stdio.h>

int main()
{
 int a;
 int b;
 int c;
 int d;

 printf("enter A value");
 scanf("%d",&a);

 printf("enter B value");
 scanf("%d",&b);

 printf("enter C value");
 scanf("%d",&c);

 printf("%d",(a>b)&&(a>c));
 printf("%d",(b>a)&&(b>c));
 printf("%d",(c>a)&&(c>b));


 return 0;

}
