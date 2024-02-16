#include<stdio.h>
int main()
{
		int i=1,j,n;
		printf("enter the value \t");
		scanf("%d",&n);
		
		do{
		j=1;
			do{
				if(i==1 || i==n || j==1 || j==n)
				{
					printf("*");
				}
				else{
				printf(" ");
				}
				printf(" ");
				j++;
			}while(j<=n);
			
			printf("\n");	
			i++;
		}while(i<=n);
		
return 0;
}