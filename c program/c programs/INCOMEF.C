#include <stdio.h>
int main()
{
	 int income,total;
	 float tax;
	 printf("enter the income value\n");
	 scanf("%d",&income);

	 if(income>0&&income<2500)
	 {
		tax=income*0.0;
		printf("your tax value%f\n",tax);
		total=income-tax;
		printf("your total income\n");
	 }else if(income>=2500&&income<5000)
	 {
		tax=income*0.10;
		printf("your tax value%f\n",tax);
		total=income-tax;
		printf("your total income%d\n",total);
	 }
	 else if(income>=5000&&income<10000)
	 {
		tax=income*0.20;
		printf("your tax value%f\n",tax);
		total=income-tax;
		printf("your total income%d\n",total);
	 }
	 else
	 {


			tax=income*0.30;
			printf("your tax value%f\n",tax);
			total=income-tax;
			printf("your total income%d\n",total);


	 }
	return 0;
}