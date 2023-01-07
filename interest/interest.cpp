#include <iostream>
#include <string>

using namespace std;

int simpleInterest(float a, float r, float t) {
    float interest;
    interest = a * (1 + ((r / 100) * t));
    return interest;
}

int main() {
    float amount, rate, time;

    rate = 2.5 / 100;
    cout << "Enter the amount of loan: ";
    cin >> amount;

    cout << "Enter the time in years: ";
    cin >> time;

    cout << "The interest is: RM" << simpleInterest(amount, rate, time) << endl;

    return 0;
}