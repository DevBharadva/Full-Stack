#include <stdio.h>
void main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;i<=25;j++)
		{
			printf("%d\t",i++);
			if(j%5==0)
			{
			printf("\n");
			}
			
		}
		
		printf("\n");
	}
}