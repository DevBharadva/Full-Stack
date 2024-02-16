#include <iostream>
#include <math.h>   
using namespace std;
int main()
{
    int i1,i2,j1,j2,ans;
    float a;

    cout << "\nenter your i1 value:";
    cin >> i1;
    cout << "\nenter your i2 value:";
    cin >> i2;
    cout << "\nenter your j1 value:";
    cin >> j1;
    cout << "\nenter your j2 value:";
    cin >> j2;

    ans = (i2-i1)(i2-i1)+(j2-j1)(j2-j1);
    a = sqrt(ans);

    cout << "\nyour ans " << ans;
    cout << "\nyour sqrt " << a;
}