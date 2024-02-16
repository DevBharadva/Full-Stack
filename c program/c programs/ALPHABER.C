#include<stdio.h>
#include<ctype.h>

int main()
{
	char a;
	printf("enter alphabet=");
	scanf("%c",&a);

	if(isalpha(a))
	{    if(a=='a'||a=='e'||a=='i'||a=='u'||a=='o'||a=='A'||a=='E'||a=='I'||a=='U'||a=='O')
	{
		printf("this alphabet is vowel\n");
	} else{
		printf("this alphabet is consnant\n");
	}

	}else
	{
	printf("Entered input is not alphabet");
	}
return 0;
}