#include <stdio.h>
int main()
{
		int i,n,temp=1;
		printf("enter the n value");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		{
			printf("%d ,",temp);
			temp*=2;
		}
return 0;
}