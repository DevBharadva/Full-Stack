#include<stdio.h>
int main()
{
	int a,b,c,total;
	printf("enter the value of a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);

	total=a+b+c;

	if(total==180&&a>0&&b>0&&c>0)
	{
		printf("this triangle is valid");

	}else{
		printf("this triangle is not valid");
	}



return 0;}