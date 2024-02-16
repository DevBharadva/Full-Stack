#oinclude <stdio.h>
int main()
{
		int i;
		printf("\n program 11,total odd \n");
		
		i=1;
		int sum=0;
		
		while(i<=10)
		{
			sum+=i;
			printf("%d\t",i++);
			i++;
		}
		printf("%d\n",sum);
		
	return 0;
}