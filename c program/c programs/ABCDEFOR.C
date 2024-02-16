#include <stdio.h>
#include <conio.h>

int main()
{
	int i,j,a=65;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%c\t",a);
		}
		a++;
		printf("\n");

	}


getch();
return 0;

}