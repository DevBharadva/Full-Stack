#include  <stdio.h>
#include <math.h>
int main()
{
		int i,j,a,b,n;
		float c;
		
		printf("enter the value\t");
		scanf("%d",&n);
		
		b=n;
		i=1;
		j=1;
		do{
			n=n/10;
			i++;
		}
		while(n>0);
		n=b;
		
		do{
			a=b%10;
			c=c+pow(a,i-i);
			b=b/10;
			j++;
		}
		while(j<i);
		
		if(c==n)
		{
			printf("%d this number is armstrong\t");
			
		}
		else
		{
			printf("%d this number is not armstrong\t");
		}
return 0;

}