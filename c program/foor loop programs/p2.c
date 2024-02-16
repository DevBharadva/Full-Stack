#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=10;j++)
		{
			printf("%d\t",j++);
		}
		printf("\n");
	}
}