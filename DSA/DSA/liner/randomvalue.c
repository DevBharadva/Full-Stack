#include <stdio.h>
#include <stdlib.h>
#define n 20
int main()
{
    int a[n];   
    for(int i=0;i<n;i++){
        a[i] = rand()%20 + 1;
        printf("%d ",a[i]);
    }
}
