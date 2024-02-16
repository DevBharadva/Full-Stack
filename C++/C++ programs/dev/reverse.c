#include <stdio.h>
int reverseNo(int num) 
{
    int reversed=0;

    while (num!=0)
	{
        reversed=reversed*10+num%10;
        num/=10;
    }

    return reversed;
}

int main() 
{
	int x;
	printf("enter the value: \n");
	scanf("%d",&x);
	
    int reversed=reverseNo(x);
    printf("Reversed number: %d\n", reversed);
	

    return 0;
}

