#include <stdio.h>
int main()
{
	int per[100],i,sum=0;

		for(i=1;i<=10;i++)
		{
			printf("enter the your value[%d]:\t",i);
			scanf("%d",&per[i]);
		}
		for(i=1;i<=10;i++)
		{
			
			printf("%d\t=",i);
			sum=sum+per[i];
		}
		printf("%d",sum);
	
	return 0;
}