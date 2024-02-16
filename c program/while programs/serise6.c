#include <stdio.h>
int main()
{
		int n,a=0,b=1,c,i=1;
		
		printf("enter the value\t");
		scanf("%d",&n);
		
		printf("%d,",b);
		
		while(i<n)
		{
			c=a+b;
			printf("%d,",c);
			a=b;
			b=c;
			i++;
		}
return 0;
}