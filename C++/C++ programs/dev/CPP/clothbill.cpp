#include <iostream>
#include <iomanip>

using namespace std;

double calculateGST(double amount) {
    const double GST_RATE = 0.18; // 18% GST rate
    return amount * GST_RATE;
}

int main() {
    
    string customerName, contactInfo, dateOfPurchase;


    cout << "Enter customer name: ";          
    getline(cin, customerName);               
    cout << "Enter contact information: ";    
    getline(cin, contactInfo);                
    cout << "Enter date of purchase: ";       
    getline(cin, dateOfPurchase);             

    int itemCode, quantity;                    
    double price, totalCost = 0, subtotal = 0; 

    while (true) {                            
        cout << "Enter item code (0 to finish): ";
        cin >> itemCode;
        if (itemCode == 0) break;

        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price per unit: $";
        cin >> price;

        double itemTotal = quantity * price;
        totalCost += itemTotal;

        // Display item details
        cout << "Item Code: " << itemCode << "\tQuantity: " << quantity << "\tPrice: $" << price
             << "\tTotal: $" << fixed << setprecision(2) << itemTotal << endl;
    }

    // Calculate subtotal
    subtotal = totalCost;

    // Calculate GST
    double gstAmount = calculateGST(subtotal);

    // Calculate total including GST
    double totalWithGST = subtotal + gstAmount;

    // Display the bill
    cout << "\n********** Arman Clothing Buying Bill **********\n";
    cout << "Customer Name: " << customerName << "\nContact Information: " << contactInfo
         << "\nDate of Purchase: " << dateOfPurchase << "\n\n";
    cout << "Item Details:\n";
    // Display more item details if needed

    // Display costs
    cout << "\nSubtotal: $" << fixed << setprecision(2) << subtotal << endl;
    cout << "GST (18%): $" << fixed << setprecision(2) << gstAmount << endl;
    cout << "Total Cost (including GST): $" << fixed << setprecision(2) << totalWithGST << "\n\n";
    cout << "Thank you for shopping with Arman Company!\n";

    return 0;
}
