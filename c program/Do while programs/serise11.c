#include <stdio.h>
int main()
{
		int i=2,n,cont=0;
		
		printf("enter the value\t");
		scanf("%d",&n);
		
		do{
			
			if(n%i==0)
			{
				cont+=1;
			}
			i++;
			}
			while(i<=n-1);
			
			if(cont==0)
			{
				printf("this number is prime\n");
			}
			else
			{
				printf("this number is not prime\n");
			}

return 0;
}