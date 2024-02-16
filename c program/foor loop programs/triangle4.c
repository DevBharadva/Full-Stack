#include <stdio.h>

int main()
{

		int i,j,k;
		
		for(j=1;j<=5;j++)
		{
			for(i=1;i<=j;i++)
			{
				for(k=1;k<=i;k++)
				{
						printf("*\t");
					
				}
				printf("*\t");
			}
			printf("\n");
		}
return 0;
}
