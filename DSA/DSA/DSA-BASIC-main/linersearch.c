#include <stdio.h>
#include <stdlib.h>
#define n 10
int linearSearch(int a[],int b) 
{
    for (int i = 0; i < n; i++) 
    {
        
        if (b == a[i]) {
          
            return i+1; // Element found at index i
        }
    }
    
        return -1; // Element not found
}

int main() 
{
    int c,d,a[n];
    int arr[] = {5, 8, 12, 3, 7, 10};
    
    for(int i=0;i<n;i++)
    {
        a[i] = rand()%20+1;
        printf("%d",a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &c);

    int result = linearSearch(arr,a[n]);

    if (result != -1) {
  
        printf("Element %d found at index %d\n", c, result);
  
    } 
    else{
        printf("Element %d not found in the array\n", c);
    }

    return 0;
}
