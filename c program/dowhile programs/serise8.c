#include <stdio.h>
int main()
{
		 int i=1,n;
		 
		 printf("enter the value\t");
		 scanf("%d",&n);
		 
		 do{
			printf("1/%d +",i);
			i++;
		 }
		 while(i<=n);
		 
return 0;
}