#include <stdio.h>

int main()
{
	int unit;
	float bill,charg;
	printf("enter the unit value");
	scanf("%d",&unit);

	if(unit<=100)
	{
		bill=unit*0.6;
		printf("bill=%f",bill);

	}
	else if(unit>100&&unit<=300)
	{
		bill=100*0.6+(unit-100)*0.8;
		printf("bill=%f",bill);

	}
	else if(bill<50)
	{
		bill=50;
		printf("bill=%f",bill);
	}
	else
	{
		if(bill>300)
		{
			charg=bill*0.15;
			printf("bill=%f",bill);
		}
	}
 return 0;
}
