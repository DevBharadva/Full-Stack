#include <stdio.h>
int main()
{
		int i,j;
		printf("enter the i value");
		scanf("%d",&i);
		
		for(j=1;j<=i;j++)
		{
			printf("%d ,",(j*j));
		}
return 0;
}