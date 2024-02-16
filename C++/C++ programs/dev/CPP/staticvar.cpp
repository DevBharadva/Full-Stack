#include <iostream>
using namespace std;

class Car
{
public:
    //declaring a static member
    static int a;
    int i=0;
    Car()
    {
        a++;
        i++;
    }

    void display()
    {
        cout << "display function call ...." << i<<endl;
    }

    static int Display()
    {
        // return a;
        cout<< "static Function Call ..."<<endl;
    }
};

int Car ::a = 50;

int main()
{
    cout << "intial value is: " << Car ::a << endl;
    Car c1; // a=1
    c1.display();

    Car c2; // a=2
    c2.display();

    Car c3,c4;//a=3
     c3.Display();

    cout << "no of object call is: " << Car ::a << endl;
}