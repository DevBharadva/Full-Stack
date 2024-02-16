#include <stdio.h>
int main()
{
		int i=1,n,k=1;
		
		printf("enter the value\t");
		scanf("%d",&n);
		
		do{
			printf("%d +",k);
			k=k*10+1;
			i++;
		}
		while(i<=n);
return 0;
}