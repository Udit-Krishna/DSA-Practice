#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cout << "Quadratic form: ax^2 + bx + c" << endl;
    cout << "Enter the numbers at the place of a,b,c with their arithemetic signs" << endl << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    float d, root1, root2;
    d = pow(b,2) - (4 * a * c);
    root1 = ((-b) + sqrt(d)) / (2 * a);
    root2 = ((-b) - sqrt(d)) / (2 * a);

    cout << "The roots of the quadratic equation " << a << "x^2+" << b << "x+" << c << " are " << root1 << ", " << root2;
}