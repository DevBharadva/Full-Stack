c
#include <stdio.h>

int evenSum(int arr[], int n) 
{

    int sum = 0;

    for (int i = 0; i < n; i++) 
	{
        if (arr[i] % 2 == 0) 
		{
            sum += arr[i];
        }
    }
    return 0;
}

/*int main() 
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //int n = sizeof(arr) / sizeof(arr[0]);

    printf("Sum of even numbers in the array: %d", evenSum(arr, n));

    return 0;
}