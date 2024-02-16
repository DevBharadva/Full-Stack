#include <stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2,d;
	printf("enter the a value\n");
	scanf("%f",&a);
	printf("enter the b value\n");
	scanf("%f",&b);
	printf("enter the c value\n");
	scanf("%f",&c);

	d=((b*b)-(4*a*c));
	printf("%f\n",d);

	if(d>0)
	{
		root1=(-b+(sqrt(d)))/(2*a);
		root2=(-b-(sqrt(d)))/(2*a);
	}
	else if(d==0)
	{
		root1=-b/(2*a);
		root2=-b/(2*a);
		printf("root are eqal =%f\n %f\n",root1,root2);
	}else
	{
		printf("root are imaginary");

	}
 return 0;

}
