#include <iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout << "\nenter your a value:"; cin >> a;
    cout << "\nenter your b value:"; cin >> b;    
    cout << "\nenter your c value:"; cin >> c;

    cout << "\nthe value A is max =" << (a>b)&&(a>c);
    cout << "\nthe value B is max =" << (b>c)&&(b>a);
    cout << "\nthe value C is max =" << (c>b)&&(c>a);
}