#include <iostream>
using namespace std;
int main()
{
    int i,j;

    for(i=2;i<=10;++i)
    {
        for(j=0;j<5;j++)
        {
            cout << "\t" << i;
        }
        cout << "\n" << i++;
    }
}