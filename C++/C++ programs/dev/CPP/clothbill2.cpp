#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants for prices
    const double SHIRT_PRICE = 29.99;
    const double PANTS_PRICE = 49.99;
    const double SHOES_PRICE = 79.99;

    // Variables for quantities
    int numShirts, numPants, numShoes;

    // Get user input for quantities
    cout << "Enter the number of shirts: ";
    cin >> numShirts;
    cout << "Enter the number of pants: ";
    cin >> numPants;
    cout << "Enter the number of shoes: ";
    cin >> numShoes;

    // Calculate total cost
    double totalCost = (numShirts * SHIRT_PRICE) + (numPants * PANTS_PRICE) + (numShoes * SHOES_PRICE);

    // Display the bill
    cout << "|-------------------------|" << endl;
    cout << "|Professional Clothes Bill|" << endl;
    cout << "|-------------------------|" << endl;
    cout << "| Item\t\tQuantity\tPrice |" << endl;
    cout << "|-------------------------|" << endl;
    cout << "|Shirts\t\t" << numShirts << "\t\t$" << fixed << setprecision(2) << (numShirts * SHIRT_PRICE) << endl;
    cout << "|Pants\t\t" << numPants << "\t\t$" << fixed << setprecision(2) << (numPants * PANTS_PRICE) << endl;
    cout << "|Shoes\t\t" << numShoes << "\t\t$" << fixed << setprecision(2) << (numShoes * SHOES_PRICE) << endl;
    cout << "|-------------------------|" << endl;
    cout << "|Total\t\t\t\t$" << fixed << setprecision(2) << totalCost << endl;
    cout << "|-------------------------|" << endl;

    return 0;
}
