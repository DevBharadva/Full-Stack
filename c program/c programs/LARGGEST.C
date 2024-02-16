#include <stdio.h>

int main()
{
	int a,b,c;
	printf("enter the A value");
	scanf("%d",&a);

	printf("enter the B value");
	scanf("%d",&b);

	printf("enter the C value");
	scanf("%d",&c);



	if(a>b&&c<a)
	{
		printf("a is larggest");

	}
	if(b>a&&c<b)
	{
		printf("b is larggest");

	}
	if(c>a&&b<c)
	{
		printf("c is larggest");

	}
 return 0;

}
