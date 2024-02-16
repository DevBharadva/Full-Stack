#include <iostream>
using namespace std;
int main()
{
    char i,j;
    char a = 65;

    for(i=1;i<=5;i++)
    {
        for(j=0;j<5;j++)
        {
            
            cout << "\t" << a++;
        }
        cout <<  "\n";
    }
}