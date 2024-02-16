#include <stdio.h>
#include <stdlib.h>

#define n 10

int linearSearch(int a[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (key == a[i]) {
            return i + 1; // Element found at index i
        }
    }
    return -1; // Element not found
}

int countOccurrences(int a[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (key == a[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {5, 8, 12, 3, 3, 4, 7, 6, 6, 10, 10};
    int searchElement;

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    int searchResult = linearSearch(arr, n, searchElement);

    if (searchResult != -1) {
        printf("Element %d found at index %d\n", searchElement, searchResult);
        
        int occurrences = countOccurrences(arr, n, searchElement);
        printf("Count of element %d in the array: %d\n", searchElement, occurrences);
    } else {
        printf("Element %d not found in the array\n", searchElement);
    }

    return 0;
}
