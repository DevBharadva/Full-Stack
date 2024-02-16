#include <stdio.h>
#include <conio.h>

int main()
{
  int i,j,k=5;
  clrscr();

  for(i=1;i<=5;i++)
  {
	k=5;
	for(j=1;j<=i;j++)
	{
		printf("%d\t",k--);
	}

	printf("\n");
  }


 getch();
 return 0;

}
