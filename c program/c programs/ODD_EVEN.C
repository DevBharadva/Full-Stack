#include <stdio.h>
int main()
{
	int a;
	printf("enter  the A value");
	scanf("%d",&a);

	if(a%2==0)
	{
		printf("this value is eiven");

	}
	if(a%2!=0)
	{
		printf("this value is odd");
	}
	return 0;
}