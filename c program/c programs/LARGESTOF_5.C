#include <stdio.h>

int main()
{
  int a,b,c;
  printf("enter the A value");
  scanf("%d",&a);

  printf("enter B value");
  scanf("%d",&b);

  printf("enter the C value");
  scanf("%d",&c);


  printf("%d",(a>b?(a>c?a:c):(b>c?b:c)));

  return 0;
  }