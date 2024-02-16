#include <stdio.h>

int main()
{
		int i,j,a=65,l;
		l=a+32;
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=i;j++)
			{
				if(i%2==0)
				{
					printf("%c\t",l++);
					a++;
				}else
				{
				printf("%c\t",a++);
				l++;
				}
			}
			printf("\n");
		}
		
return 0;
}