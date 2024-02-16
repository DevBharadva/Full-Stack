#include<stdio.h>
int main()
{
	int temp;
	printf("enter the temp value\n");
	scanf("%d",&temp);

	if(temp<0)
	{
		printf("temp is freezing weather \n ");
	}
	if((temp>0)&&(temp<=10))
	{
		printf("temp is very cold \n");
	}
	if((temp>10)&&(temp<=20))
	{
		printf("temp is cold weather \n");
	}
	if((temp>20)&&(temp<=30))
	{
		printf("temp is normal\n");
	}
	if((temp>30)&&(temp<=40))
	{
		printf("temp is hot\n");
	}
	if(temp>=40)
	{
		printf("temp is very hot\n");
	}

return 0;
}