#include <stdio.h>
int main()
{
	printf("even value for array loop :\n");
	
	int i[5],j;
	
	for(j=0;j<5;j++)
	{
		scanf("%d",&i[j]);
	}
	
	for(j=0;j<=5;j++)
	{
		if(i[j]%2==0)
		{
			printf("%d\t",i[j]);
		}

	}
	
	printf("\nodd value for array loop:\n");

	
	for(j=0;j<5;j++)
	{
		scanf("%d",&i[j]);
	}
	
	for(j=0;j<5;j++)
	{
		if(i[j]%2==1)
		{
			printf("%d\t",i[j]);
		}

	}
return 0;
}