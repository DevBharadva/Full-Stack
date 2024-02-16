#include <stdio.h>

int main()
{
        int i,j,k=5;
		
		for(i=1;i<=5;i++)
		{
		k++;
			for(j=1;j<=i;j++)
			{
				printf("%d\t",k);
			}
			printf("\n");
		}
return 0;
}