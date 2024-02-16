#include <stdio.h>

int main()
{

	int productprize,sellingprize,profit,loss;
	printf("enter the product prize value\n");
	scanf("%d",&productprize);
	printf("enter the selling prize value\n");
	scanf("%d",&sellingprize);


	if(productprize<sellingprize)
	{
		printf("profit from this product\n");
		profit=sellingprize-productprize;
		printf("this seller is profit:%d\n",profit);

	}else{
		printf("loss from this product\n");
		loss=productprize-sellingprize;
		printf("this seller is loss:%d\n",loss);

	}



 return 0;

}
