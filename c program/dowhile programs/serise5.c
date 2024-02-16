#include <stdio.h>
int main()
{
		int i=1,n,temp=1,num=1;
		
		printf("enter the value\t");
		scanf("%d",&n);
		
		while(i<=n)
		{
			num=i*temp;
			printf("%d,",num);
			temp*=2;
			i++; 
		}
return 0;
}