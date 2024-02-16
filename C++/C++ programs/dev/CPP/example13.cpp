 #include<iostream>
using namespace std;
int main()
{
    int m,n;

    cout << "enter your value"; cin >> m;

    if(m>0)
    {
        n = 1;
        cout << "\nthe value of n:" << n;
    }
    else if(m<0)
    {
        n = -1;
        cout << "\nthe value of n:" << n;
    }
    else
    {
        n = 0;
        cout << "\nthe value of n:" << n;
    }

 