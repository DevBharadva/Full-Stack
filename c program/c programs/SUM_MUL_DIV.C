#include <stdio.h>

int main()
{
  int a;
  int b;
  int sum,sub,mal;
  float div,modul;

  printf("enter the  A value");
  scanf("%d",&a);

  printf("enter thr B value");
  scanf("%d",&b);

  sum = a+b;
  sub = a-b;
  mal = a*b;
  div = a/b;
  modul = a%b;

  printf("%d\n",sum);
  printf("%d\n",sub);
  printf("%d\n",mal);
  printf("%f\n",div);
  printf("%f\n",modul);

  return 0;

 }
