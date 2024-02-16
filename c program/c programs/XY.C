#include <stdio.h>
int main()
{
	int x,y;
	printf("enter the x,y value\n");
	scanf("%d\n",x,y);

	if(x<0&&y<0)
	{
		printf("the coordinate point(%d%d)lies in the 3rd quardrant",x,y);

	}else if(x>0&&y>0)
	{
		printf("the coordinate point(%d%d)lies in the 1 st quardrant",x,y);

	}else if(x<0&&y>0)
	{
		printf("the coordinate point(%d%d)lies in the 2nd quardrant",x,y);
	}else{
		printf("the coordinate point(%d%dlies in the 4th quardrant",x,y);

	}
	return 0;
	}
