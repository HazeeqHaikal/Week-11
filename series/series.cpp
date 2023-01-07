#include <iostream>
#include <string>

using namespace std;

int main() {

    int series, num;
    cout << "Enter the number of series: ";
    cin >> series;

    int i = 1;
    int divBy6 = 0;
    int smallest = 9999;
    while(i <= series) {
        cout << "Enter the number: ";
        cin >> num;

        if (num % 6 == 0 && num % 10 == 0) {
            divBy6++;
        }
        if(num < smallest){
            smallest = num;
        }
        i++;
    }

    cout << "\nNumber of numbers divisible by 6 that ends with zero: " << divBy6 << endl;
    cout << "Smallest number: " << smallest;

    return 0;
}