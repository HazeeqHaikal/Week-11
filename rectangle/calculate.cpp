#include <iostream>
#include <string>

using namespace std;

float calcAreaCircle(float radius) {
    float area = 3.142 * radius * radius;
    return area;
}

float calcAreaRectangle(float length, float width) {
    float area = length * width;
    return area;
}

float calcAreaTriangle(float base, float height) {
    float area = (base * height) / 2;
    return area;
}

int main() {
    char choice;
    float radius, length, width, base, height;
    cout << "SHAPE AREA CALCULATION\n\nC - Circle\n\nR - Rectangle\n\nT - Triangle\n\nPlease enter your choice: ";
    cin >> choice;
    choice = toupper(choice);

    switch(choice){
        case 'C':
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            cout << "The area of the circle is " << calcAreaCircle(radius);
            break;
        case 'R':
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            cout << "The area of the rectangle is " << calcAreaRectangle(length, width);
            break;
        case 'T':
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            cout << "The area of the triangle is " << calcAreaTriangle(base, height);
            break;
        default:
            cout << "Invalid input";
    }

    return 0;
}