#include <iostream>

using namespace std;

void duplicate(int&, int&, int);

int main() {
    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
    duplicate(z, y, x);
    cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
}

void duplicate(int& a, int& b, int c) {
    a = a * 2;
    b = b * 2;
    c = c * 2;
    cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
}
