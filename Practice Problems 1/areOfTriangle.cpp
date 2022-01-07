#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float side1, side2, side3, a;
    cout << "Side 1 of the Triangle: ";
    cin >> side1;
    cout << "Side 2 of the Triangle: ";
    cin >> side2;
    cout << "Side 3 of the Triangle: ";
    cin >> side3;
    a = (side1 + side2 + side3)/2;

    float area = sqrt(a * (a - side1) * (a - side2) * (a - side3));

    if (isnan(area)) {
        cout << "Invalid sides for a triangle";
    }
    else 
    cout << "Area of the triangle of sides " << side1 << ", " << side2 << ", " << side3 << " is " << area;
}