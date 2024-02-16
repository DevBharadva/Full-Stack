#include <stdio.h>

int main()
{
	int a=0;
	
	printf("\nprogram 1,1to5\n");
	
	while(a<=5)
	{
		printf("%d dev\n",a);
		a++;
	}
	printf("\nprogram 2,1to5\n");
	
	a=10;

		while(a>0)
		{
			printf("%d\t",a);
			a--;	
		}
		
		printf("\n program 3,51to99 \n");
		
		a=51;
		
		while(a<100)
		{
			
			printf("%d\t",a);
			a++;
		}
		
		printf("\n program 4,1ton \n");
		
		int i,n;
		i=0;
		
		printf("enter the value\t");
		scanf("%d",&n);
		
		while(i<=n)
		{
			printf("%d\t",i);
			i++;
			
		}
		printf("\nprogram 5, -nton \n");
		
		
		i=-n;
		
		printf("enter the value\t");
		scanf("%d",&n);
		
		while(i<=n)
		{
			printf("%d\t",i);
			i++;
			
		}
		
		printf("\n program 6,oddwhile \n");
		
		i=1;
		
		while(i<50)
		{
			printf("%d\t",i++);
			i++;
			
		}
		
		printf("\n program 7,evenwhile \n");
		
		i=0;
		
		while(i<50)
		{
			printf("%d \t",i++);
			i++;
			
		}
		
		printf("\n program 8,atoz \n");
		
		i=65;
		
		while(i<=90)
		{
			printf("%c %d\t",i,i);
			i++;
			
		}
		
		printf("\n program 9,capital or small \n");
		i=65;
		while(i<=90)
		{
			printf("%c %c \t",i,i+32);
			i++;
		}
		printf("\n program 10,atoz \n");
		
		i=65;
		
		while(i<=90)
		{
			printf("%c \t",i);
			i++;
			
		}
		printf("\n program 11,total odd \n");
		
		i=1;
		int sum=0;
		
		while(i<=10)
		{
			sum+=i;
			printf("%d\t",i++);
			i++;
		}
		printf("%d\n",sum);
		
		printf("\n program 12,total even \n");
		
		i=2;
		
		sum=0;
		while(i<=10)
		{
			
			sum+=i;
			printf("%d\t",i++);
			i++;
		}
		printf("%d\t",sum);
		
		printf("\n program 13,total 1to10ans \n");
		
		i=1;
		
		int ans=0;
		while(i<=10)
		{
			
			ans+=i;
			printf("%d\t",i);
			i++;
		}
		printf("%d\t",ans);
		
		
	
return 0;
}