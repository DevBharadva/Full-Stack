#include <stdio.h>
int main()
{
		int sub1[5],sub2[5],sub3[5],i,per[5],total[5],gread;
		
		for(i=0;i<5;i++)
		{
			printf("enter the maths marks of student%d:",i+1);
			scanf("%d",&sub1[i]);
			
			printf("enter the english marks of student%d:",i+1);
			scanf("%d",&sub2[i]);
			
			printf("enter the gujrati marks of student%d:",i+1);
			scanf("%d",&sub3[i]);
		}
		for(i=0;i<5;i++)
		{
		total[i]=sub1[i]+sub2[i]+sub3[i];	
			printf("the total marks %d\n",total[i]);
			
		}
		for(i=0;i<5;i++)
		{
			per[i]=(total[i]*100/300);
			printf("the per is the %d :%d\n\n",i+1,per[i]);
		}
		for(i=0;i<5;i++)
		{
			if(per[i]>85 && per[i]>100)
			{
				printf(" gread A\t");
				
			}
			else if(per[i]>65 && per[i]<85)
			{
				printf(" grard B\t");
			}
			else if(per[i]>45 && per[i]<65)
			{
				printf(" gread C\t");
				
			}
			else if(per[i]>35 && per[i]<45)
			{
				printf("gread D\t");
				
			}
				
		}

return 0;
}