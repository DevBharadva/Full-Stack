#include <stdio.h>
int main()
{
		int i,j,n=0;
		printf("enter the i value");
		scanf("%d",&i);
		
		j=1;
		
		while(j<=i)
		{
			if(j%2==0)
			{
					printf("%d ,",(j*j));
					
				
			}
			else{
					printf("%d, ",j);
				
			}
				j++;
			
		}
return 0;
} 	 	 	 		  	