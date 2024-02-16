
#include <stdio.h>
int.0
0 main()
{
	int unit;
	float bill,charg;

	printf("enter the unilt value");
	scanf("%d",&unit);

	if(unit<=100)
	{
		bill=unit*0.6;
		printf("bill= %f",bill);
	}
	if(unit>100&&unit<=300)
	{
		bill=100*0.6+(unit-100)*0.8;
		printf("bill=%f",bill);
	}
	if(unit>300)
	{
		bill=100*0.6+200*0.8+(unit-300)*0.9;
		printf("bill=%f",bill);
	}
	if(bill<50)
	{
		bill=50;
		printf("bill=%f",bill);
	}
	if(bill>300)
	{
		charg=bill*0.15;
		printf("bill=%f",bill);
	}

	 return 0;

}