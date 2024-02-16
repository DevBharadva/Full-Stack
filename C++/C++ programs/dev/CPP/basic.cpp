/*
    stdio.h   =>  iostream
    printf()  =>  cout
                  << -> insertion operator
                  :: -> scope resolution operator
    scanf()   =>  cin
                  >> -> extersion operator

*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a nad b :";
    cin>>a>>b;
    cout<<"\na + b = "<<a+b;
    cout<<"\nvalue of a is:"<<a<<"\n value of b is:"<<b;
}