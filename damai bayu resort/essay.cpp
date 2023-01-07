#include <iostream>
#include <string>

using namespace std;

int calcPayment(int packageType, int hoursSpend, int guestTotal) {
    int total = 0;
    int totalGuest = 50 * guestTotal;
    if (packageType == 1) {
        total = 500 * hoursSpend + totalGuest;
    } else if (packageType == 2) {
        total = 1000 * hoursSpend + totalGuest;
    } else if (packageType == 3) {
        total = 1500 * hoursSpend + totalGuest;
    }

    return total;
}

float calcDiscount(float total) {
    float discount;
    if (total > 5000) {
        discount = total * 0.2;
    } else {
        discount = total * 0.1;
    }

    return discount;
}

int main() {
    int packageType, hoursSpend, guestTotal, customers;
    float totalEach, discount, totalAll;
    int count = 0;
    char choice = 'N';
    while (choice != 'Y') {
        cout << "\n1. Pearl(basic)\n2. Ruby (sound Effects)\n3. Platinum (sound and lighting effects)\n\nEnter the package type (1-3): ";
        cin >> packageType;

        cout << "Enter the number of hours spent: ";
        cin >> hoursSpend;

        cout << "Enter the number of guests: ";
        cin >> guestTotal;
        if (guestTotal > 100) {
            count++;
        }

        totalEach = calcPayment(packageType, hoursSpend, guestTotal);

        discount = calcDiscount(totalEach);
        totalAll += totalEach - discount;

        cout << "\nNet payment for a customer: RM " << totalEach - discount << endl;
        cout << "Do you want to exit? (Y/N): ";
        cin >> choice;
        choice = toupper(choice);
    }

    cout << "\nTotal number of guests more than 100: " << count << endl;
    cout << "Total for all customers: RM " << totalAll << endl;
    return 0;
}