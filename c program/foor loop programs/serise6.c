#include <stdio.h>
int main()
{
		int i,n,temp=1,num=1;
		printf("enter the n value");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		{
			num=i*temp;
			printf("%d ,",num);
			temp*=2;
		}
return 0;
}