#include <stdio.h>

int main()
{
  int a;
  int b;
  int c;

  printf("enter A value");
  scanf("%d",&a);

  printf("enter B value");
  scanf("%d",&b);
  c = a;
  a = b;
  b = c;

  printf("%d\n %d",a,b);



  return 0;
 }