#include<stdio.h>
int main()
{
	int a;
	printf("enter the A value");
	scanf("%d",&a);

	if(a%3==0 || a%5==0)
	{
		printf("a is divide by 3");
	}
	if(a%3!=0 || a%5!=0)
	{
		printf("a is not divide by 3");
	}
	return 0;

}