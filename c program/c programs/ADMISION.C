#include <stdio.h>

int main()
{
 int math,phy,chem,total,t2;
 printf("enter the math value");
 scanf("%d",&math);

 printf("enter the ohy value");
 scanf("%d",&phy);

 printf("enter the chem value");
 scanf("%d",&chem);

 total=math+phy+chem;
 t2=math+phy;

 if((math>=65&&phy>=55&&chem>=50)&&(total>=190||t2>=140))
 {
	printf("student is pass\n");
 }else{
	printf("student admision are not conform\n");
 }

 return 0;


}
