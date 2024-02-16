#include <stdio.h>
int main()
{
	int salary,hra,da,total;
	printf("enter the salary value\n");
	scanf("%d",&salary);

	if(salary<=5000)
	{
		hra=salary*0.08;
		da=salary*0.20;
		total=salary+hra+da;
		printf("your total salary%d\n",total);
	}
	else if(salary>5000&&salary<10000)
	{
		hra=salary*0.12;
		da=salary*0.30;
		total=salary+hra+da;
		printf("your total salary%d\n",total);

	}
	else if(salary>10000&&salary<15000)
	{
		hra=salary*0.15;
		da=salary*0.40;
		total=salary+hra+da;
		printf("your total salary%d\n",total);
	}
	else
	{
		if(salary<=15000)
		{
			hra=salary*0.20;
			da=salary*0.50;
			total=salary+hra+da;
			printf("your total salary%d\n",total);

		}
	}




return 0;
}