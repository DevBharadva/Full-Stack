#include <stdio.h>

int main() {
    int size = 5;
    int arr[] = {10, 20, 30, 40, 50};

    
    int temp = arr[size - 1];

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = temp;

    printf("Rotated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
