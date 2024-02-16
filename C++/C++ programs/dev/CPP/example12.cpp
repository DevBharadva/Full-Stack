#include <iostream>
using namespace std;
int main()
{
    int uint;
    float bill,charge,total;

    cout << "enter your uint"; cin >> uint;
    
    if (uint<100)
    {
        bill =uint *0.60;
        cout << "\ntotal bill of uint:"<<bill ;
    }
    if((uint>100)&&(uint<=300))
    {
        bill =100*0.60+(uint-100)*0.80;
        cout << "\ntotal bill of uint:"<< bill;
    }
    if (uint>300)
    {
        bill =100*0.60+200*0.80+(uint-300)*0.90;
        cout << "\ntotal bill of uint:"<< bill;
    }
    if (uint<50)
    {
        bill =50;
        cout << "\never people minmum bill: "<< bill;
    }
    if (uint>300)
    {
        charge = bill*0.15;
        cout << "\ntotal cherge "<< charge;
        total = bill + charge;
        cout << "\nyour total billof in include charge:"<< total;
    }
    
    
}