#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix must be square (equal number of rows and columns).\n");
	}

    int matrix[rows][cols];
    int sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = i; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
	
    printf("Sum of the upper triangle: %d\n", sum);

    return 0;
}