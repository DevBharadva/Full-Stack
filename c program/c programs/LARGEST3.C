#include <stdio.h>

int main()
{
	int a,b,c;
	printf("enter the first value");
	scanf("%d",&a);

	printf("enter the secound value");
	scanf("%d",&b);

	printf("enter the thered value");
	scanf("%d",&c);

	if(a>b&&a>c)
	{
		printf("a is largest");
	}
	else
	{
		if(b>a&&b>c)
		{
			printf("b is largest");
		}
		else
		{
			printf("c is largest");
		}
	}


 return 0;

}
