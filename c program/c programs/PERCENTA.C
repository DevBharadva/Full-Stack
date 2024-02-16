#include <stdio.h>
int main()
{
	int phy,maths,che,total,per;
	printf("enter the phy value\n");
	scanf("%d",&phy);
	printf("enter the maths value\n");
	scanf("%d",&maths);
	printf("enter the che value\n");
	scanf("%d",&che);

	total=phy+maths+che;
	printf("your total marks%d\n",total);
	per=total/3;
	printf("your total per%d\n",per);

	if(75<=per)
	{
		printf("you have got A grade\n");
	}
	else if(per>=60&&per<75)
	{
		printf("you have got B grade\n");
	}
	else if(per<=45&&per<60)
	{
		printf("you have got C grade");

	}
	else if(per<=35&&per<45)
	{
		printf("you have got D grade");
	}
	else
	{
		if(per<=35)
		{
			printf("you have fail");
		}
	}
	return 0;
}