#include <stdio.h>
int main()
{
	int rows,cols;
	
	printf("enter the value: ");
	scanf("%d",&rows);
	printf("enter the value: ");
	scanf("%d",&cols);
	
	int matrix1[rows][cols],matrix2[rows][cols], result[rows][cols],i,j;
	
	printf("enter elements of the first matrix:\n");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("enter elements of the secound matrix:\n");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			result[i][j]=matrix1[i][j] +matrix2[i][j];
		}
	}
	
	printf("enter elements of the results matrix:\n");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d\t",result[i][j]);
		}
	}
	printf("\n");
return 0;
}