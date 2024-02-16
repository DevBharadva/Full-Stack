#include <stdio.h>
#include <conio.h>


int main()
{
	int i,n,sum=0;
	clrscr;
	printf("enter the n value",n);
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{       sum = sum+i;
		printf("%d\t",i++);
	}
	printf("%d\t",sum);
	getch();
return 0;
}