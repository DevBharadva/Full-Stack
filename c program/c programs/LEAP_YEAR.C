#include<stdio.h>
int main()
{
	int y;
	printf("enter the y");
	scanf("%d",&y);


	if(y%4==0)
	{
		printf("leap year");
	}
	if(y%4!=0)
	{
		printf("not leap year");
	}

	return 0;

}