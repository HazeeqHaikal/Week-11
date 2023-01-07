#include <iostream>
#include <string>

using namespace std;

float calcTotal(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\nThe total is: " << calcTotal(num1, num2) << endl;

    return 0;
}