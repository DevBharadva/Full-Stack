 #include <stdio.h>

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int size = 5,temp;
    int arr[] = {10, 20, 30, 40, 50};
    temp = arr[5];
    arr[0]=arr[size-1];
    arr[size-1]=temp;
    
return 0;
}

//50 20 30 40 10