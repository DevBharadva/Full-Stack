#include <stdio.h>
#define n 6
int a[n],top = -1;

int insert(int data)
{
    if (top <0)
    {
        printf("Array is full...\n");
    }
    else 
    {
        top++;
        a[top] = data;
    }
}
int firstinsert(int data)
{
    if (top <0)
    {
        printf("Array is empty...\n");
    }
    else 
    {
        for(int i = top; i = 0;i++);
        top++;
        
    }
}
int display()
{
    if (top <0)
    {
        printf("Array empty....");
    }
    else{
        for (int i= 0;i<= top;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("\n");
}
int main()
{
   
  firstinsert(10);
    display(10);
}