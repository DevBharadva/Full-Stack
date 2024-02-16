#include <stdio.h>

int main()
{
		char i,j;
		int a=65;
		
		for(i=1;i<=5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%c\t",a++);
				
			}
			printf("\n");
		}
return 0;
}