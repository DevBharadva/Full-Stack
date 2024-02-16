#include <stdio.h>

int main() {
    int years, weeks, days;

    // Input the values
    printf("Enter years: ");
    scanf("%d", &years);
    printf("Enter weeks: ");
    scanf("%d", &weeks);
    printf("Enter days: ");
    scanf("%d", &days);

    // Convert to days
    int totalDays = (years * 365) + (weeks * 7) + days;

    // Display the result
    printf("Total days: %d\n", totalDays);

    return 0;
}
