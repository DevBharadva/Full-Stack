#include <stdio.h>
int main()
{
	int i,j;
	printf("enter the value");
	scanf("%d",&i);
	
	j=1;
	
	while(j<=i)
	{
		printf("%d, ",(j*j));
		j++;
	}
return 0;
}