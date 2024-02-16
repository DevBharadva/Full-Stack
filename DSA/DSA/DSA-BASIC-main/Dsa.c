/*
    operatopr -> Arithmetic operator => +-/
              -> relational opersator => 
              -> logical operator => 
              -> assigment operator =>
              -> unary operator =>
              -> ternary operator =>
        And = first digit 0 than no check condition
        OR  = First digit 1 than no check condition
*/








#include <stdio.h>
int main()
{
    int a=1,b=0,c;

    c=a&&b;         //output = 1,0,0;
    printf("a: %d,b: %d, c: %d\n",a,b,c);
    c=++a&&b;       //output = 2,0,0;
    printf("a: %d,b: %d, c: %d\n",a,b,c);
    c=++a&&b++;     //output = 3,1,0;
    printf("a: %d,b: %d, c: %d\n",a,b,c);
    c=a&&++b;       //output = 3,2,1;
    printf("a: %d,b: %d, c: %d\n",a,b,c);
    c=--a&&++b;     //output = 2,3,1;
    printf("a: %d,b: %d, c: %d\n",a,b,c);
    c=a||b;         //output = 2,3,1;
    printf("a: %d,b: %d, c: %d\n",a,b,c);
    c=++a||b;       //output = 3,3,1;
    printf("a: %d,b: %d, c: %d\n",a,b,c);
    c=++a||++b;     //output = 4,3,1;
    printf("a: %d,b: %d, c: %d\n",a,b,c);
    c=--a||++b;     //output = 3,3,1;
    printf("a: %d,b: %d, c: %d\n",a,b,c);
}