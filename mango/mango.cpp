#include <iostream>
#include <string>

using namespace std;

float mangoType(float typeM) {
    if (typeM == 1) {
        return 30;
    } else if (typeM == 2) {
        return 10.50;
    } else if (typeM == 3) {
        return 8.50;
    } else {
        cout << "Invalid input";
        return 0;
    }
}

float calcPrice(float price, float weight) {
    float total = price * weight;
    return total;
}

float calcFinalPrice(float price, char staff) {
    if (price > 100 && staff == 'Y') {
        price = price - (price * 0.25);
    }

    return price;
}

string print(float price) {
    cout << "The price of mango is RM " << price;
}

int main() {
    float typeM;
    cout << "1. Harum Manis = RM 30\n2. Sala = RM10.50\n3. Susu = RM8.50\n\nEnter the type of mango (1-3): ";
    cin >> typeM;
    float priceEach = mangoType(typeM);

    float weight;
    cout << "Enter the weight of mango (kg): ";
    cin >> weight;
    float price = calcPrice(priceEach, weight);

    char staff;
    cout << "Are you a UiTM staff? (Y/N): ";
    cin >> staff;
    staff = toupper(staff);

    float finalPrice = calcFinalPrice(price, staff);

    print(finalPrice);
    return 0;
}