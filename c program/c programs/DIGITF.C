#include <stdio.h>
#include<ctype.h>

int main()
{
	char ch;
	printf("enter the ch value=");
	scanf("%c",&ch);

	if(isalpha(ch))
	{
		printf("character is digit");

	}else
	{
		printf("character is  not digit");
	}

 return 0;

}
