#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b,c\n");
	scanf("%d%d%d",&a,b,c);

	if(a==b&&b==c)
	{
		printf("this is equilateral\n");

	} else
	{

		if(a==b||a==c||b==c)
		{
		printf("this is an isosceles\n");
	      }

	else{
		printf("this is scalene\n");
	     }
	     }



return 0;
}