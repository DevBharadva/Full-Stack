#include <iostream>
using namespace std;
int main()
{
		int a[4][2]={{1,2},{3,4},{5,6},{7,8}},i,j;
		
		for(i=0;i<4;i++)
		{
			for(j=0;j<2;j++)
			{
				cout<<a[i][j];
			}
			cout<<"\n";
		}
return 0;
}