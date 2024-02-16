#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,K=11;
	clrscr();

	for(j=0;j<5;j++)
	{
		for(i=11;i<=55;i++)
		{
			printf("%d\t",K++);
		}
		K+=5;

		printf("\n");
	}
  getch();
 return 0;

}
