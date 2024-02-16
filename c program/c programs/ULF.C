#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int ascii;
	printf("enter the ch value\n");
	scanf("%c",&ch);

	if(ch>='A'&&ch<='Z')
	{
		ascii=ch+32;
		printf("charcter is lwr value%c\n",ascii);

	}
	if(ch>='a'&&ch<='z')
	{
		ascii=ch-32;
		printf("charcter is upr value%c\n",ascii);
	}

 return 0;

}
