#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int row = 1; row <= 4; row++) {
        for (int column = 1; column <= 4; column++) {
            if (row == 1 || row == 4)
                cout << "*";
            else if (column == 1 || column == 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}