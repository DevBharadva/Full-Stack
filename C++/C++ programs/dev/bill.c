#include <stdio.h>

// Define a structure to store item information
struct Item {
    char name[50];
    float price;
    int quantity;
};

// Function to calculate the total cost of an item including GST
float calculateTotalCost(struct Item item) {
    float total = (item.price * item.quantity) * (1 + 0.18); // 0.18 represents 18% GST
    return total;
}

int main() {
    int numItems;
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    struct Item items[numItems];

    // Input item detailsgcc 
    for (int i = 0; i < numItems; i++) {
        printf("Enter the name of item %d: ", i + 1);
        scanf("%s", items[i].name);
        printf("Enter the price of item %d: ", i + 1);
        scanf("%f", &items[i].price);
        printf("Enter the quantity of item %d: ", i + 1);
        scanf("%d", &items[i].quantity);
    }

    // Display the bill
    printf("\n--- Bill ---\n");
    printf("Item Name\tPrice\tQuantity\tTotal Cost\n");
    for (int i = 0; i < numItems; i++) {
        float totalCost = calculateTotalCost(items[i]);
        printf("%s\t%.2f\t%d\t%.2f\n", items[i].name, items[i].price, items[i].quantity, totalCost);
    }

    return 0;
}
