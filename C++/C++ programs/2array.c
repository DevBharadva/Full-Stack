#include <stdio.h>

int main() {
    int size1 = 3;
    int arr1[] = {1, 2, 3};

    int size2 = 4;
    int arr2[] = {4, 5, 6, 7};


    arr1[size1 + size2];

    for (int i = 0; i < size2; i++) {
        arr1[size1 + i] = arr2[i];
    }

   
    size1 += size2;

   
    printf("Merged Array: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}
