#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	clrscr();

	for(j=0;j<=5;++j)
	{
		for(i=0;i<10;++i)
		{
			printf("%d\t",++i);
		}
		printf("\n");
	}
getch();
return 0;
}