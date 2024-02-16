#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the A value");
	scanf("%d",&a);

	printf("enter the B value");
	scanf("%d",&b);

	printf("enter the c value");
	scanf("%d",&c);

	printf("1st number =%d\n",a);
	printf("2nd number =%d\n",b);
	printf("3nd number =%d\n",c);
	if(c<a&&a>b)
	{
		printf("1st number is gretest \n");

	}
	if(a<b&&c<b)
	{
		printf("2nd number is gretest \n");
	}
	if(c>a&&b<c)
	{
		printf("3rd number is gretest \n");
	}


	return 0;

}
