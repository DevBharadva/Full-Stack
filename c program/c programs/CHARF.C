#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int b;
	printf("enter ch \n");
	scanf("%c",&ch);

	isalpha(ch);
	printf("%d",isalpha(ch));
return 0;
}