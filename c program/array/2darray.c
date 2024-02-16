#include <stdio.h>
int main()
{
		int a[4][2]={{1,2},{3,4},{5,6},{7,8}},i,j;
		
		for(i=0;i<4;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d,",a[i][j]);
			}
			printf("\n");
		}
return 0;
}