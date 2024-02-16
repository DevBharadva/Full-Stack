#include <stdio.h>
int main()

{
		int j,n,k=1;
		
		printf("enter the n value:\t");
		scanf("%d",&n);
		
		for(j=1;j<=n;j++)
		{
			printf("%d +",k);
			k=k*10+1;
		}
return 0;
}