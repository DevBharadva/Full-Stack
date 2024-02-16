#include <iostream>
using namespace std;
int main()
{
    int y,w,d;
    int a = 3329;
    int b = 365;
    int c = 7;

    y = a/b;
    a = a%b;
    w = a%c;
    d = a%c;

    cout <<"\nyour years:" <<  y;
   // cout << "your week " << a;
    cout << "\nyour weeks:"<< w;
    cout << "\nyour days:"<< d;

    //cout << "'years" << "weeks " << "days";

}