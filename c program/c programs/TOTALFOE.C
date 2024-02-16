#include <stdio.h>
#include <conio.h>
int main()
{
	 int i,ans=0;
	 clrscr();

	 for(i=1;i<=10;i++)
	 {
		ans+=i;
		printf("%d\t",i);
	 }
	 printf("%d\t",ans);

	 getch();
return 0;
}