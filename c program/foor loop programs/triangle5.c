#include <stdio.h>

int main()
{

		int num,i,j;
		printf("enter the value");
		scanf("%d",&num);
		
		for(j=1;j<=num;++j)
		{
			for(j=1;j<=num;j++)
			{
				printf(" ");
			}
			for(i=1;i<=5;i++)
			{
				printf("*");
			}
			printf("\n");
		}
return 0;
}
