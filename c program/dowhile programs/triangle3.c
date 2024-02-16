#include <stdio.h>
int main()
{
	int i=1,j,num;
	printf("enter the value\t");
	scanf("%d",&num);
	
	do{
			j=0;
			do{
				printf(" \t");
				j++;
				
			}while(j<=num-i);
			
			j=1;
			
			do{
				printf("*\t");
				j++;
			}while(j<=i);
			
		printf("\n");
		i++;
		
	}while(i<=num);
	
 return 0;
}