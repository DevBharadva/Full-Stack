#include <stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the n value",n);
	scanf("%d",&n);
	
	for(i=1;i<=n;++i)
	{
		printf("%d\n",++i);
		sum=sum+i;
	}
	printf("%d\t",sum);
return 0;
}